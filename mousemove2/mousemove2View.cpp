
// mousemove2View.cpp : Cmousemove2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mousemove2.h"
#endif

#include "mousemove2Doc.h"
#include "mousemove2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousemove2View

IMPLEMENT_DYNCREATE(Cmousemove2View, CView)

BEGIN_MESSAGE_MAP(Cmousemove2View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cmousemove2View 构造/析构

Cmousemove2View::Cmousemove2View()
{
	// TODO: 在此处添加构造代码
	rect.left = 150;
	rect.top = 0;
	rect.right = 250;
	rect.bottom = 50;
		//(150, 0, 250, 50);
}

Cmousemove2View::~Cmousemove2View()
{
}

BOOL Cmousemove2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmousemove2View 绘制

void Cmousemove2View::OnDraw(CDC* pDC)
{
	Cmousemove2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetTimer(1, rand() % 500 + 100, NULL);
	pDC->Ellipse(rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cmousemove2View 诊断

#ifdef _DEBUG
void Cmousemove2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousemove2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousemove2Doc* Cmousemove2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousemove2Doc)));
	return (Cmousemove2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousemove2View 消息处理程序


void Cmousemove2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	GetClientRect(&cr);
	rect.top += 10;
	rect.bottom += 10;
	
	if (rect.bottom>= cr.bottom - cr.top)
	{
		rect.left = 150;
		rect.top = 0;
		rect.right = 250;
		rect.bottom = 50;	
	}InvalidateRect(NULL, true);

	CView::OnTimer(nIDEvent);
}
