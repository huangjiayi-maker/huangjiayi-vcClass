
// mousepoint2View.cpp : Cmousepoint2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mousepoint2.h"
#endif

#include "mousepoint2Doc.h"
#include "mousepoint2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousepoint2View

IMPLEMENT_DYNCREATE(Cmousepoint2View, CView)

BEGIN_MESSAGE_MAP(Cmousepoint2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmousepoint2View 构造/析构

Cmousepoint2View::Cmousepoint2View()
{
	// TODO: 在此处添加构造代码

}

Cmousepoint2View::~Cmousepoint2View()
{
}

BOOL Cmousepoint2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmousepoint2View 绘制

void Cmousepoint2View::OnDraw(CDC* pDC)
{
	Cmousepoint2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// Cmousepoint2View 诊断

#ifdef _DEBUG
void Cmousepoint2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousepoint2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousepoint2Doc* Cmousepoint2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousepoint2Doc)));
	return (Cmousepoint2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousepoint2View 消息处理程序


void Cmousepoint2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	int x = point.x;
	int y = point.y;
	CView::OnLButtonDown(nFlags, point);
	int r1 = rand() % 100 + 20;
	int r2= rand() % 100 + 30;
	rect.left = point.x - r1;
	rect.top = point.y - r2;
	rect.right= point.x + r1;
	rect.bottom = point.y + r2;
	ca.Add(rect);
	//GetDC()->Ellipse(rect);
	this->Invalidate();
		

}
