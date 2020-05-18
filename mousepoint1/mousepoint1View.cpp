
// mousepoint1View.cpp : Cmousepoint1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mousepoint1.h"
#endif

#include "mousepoint1Doc.h"
#include "mousepoint1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousepoint1View

IMPLEMENT_DYNCREATE(Cmousepoint1View, CView)

BEGIN_MESSAGE_MAP(Cmousepoint1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmousepoint1View 构造/析构

Cmousepoint1View::Cmousepoint1View()
{
	// TODO: 在此处添加构造代码

}

Cmousepoint1View::~Cmousepoint1View()
{
}

BOOL Cmousepoint1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmousepoint1View 绘制

void Cmousepoint1View::OnDraw(CDC* pDC)
{
	Cmousepoint1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return; 
	pDC->Ellipse(rect);
	/**/
	
	// TODO: 在此处为本机数据添加绘制代码
}


// Cmousepoint1View 诊断

#ifdef _DEBUG
void Cmousepoint1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousepoint1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousepoint1Doc* Cmousepoint1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousepoint1Doc)));
	return (Cmousepoint1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousepoint1View 消息处理程序


void Cmousepoint1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//CClientDC rec(this);
	
	this->GetClientRect(&clientDC);
	if (clientDC.Width() < clientDC.Height())
	{
		rect.left = 0;
		rect.top = 0;
		rect.right = clientDC.Width();
		rect.bottom = clientDC.bottom;
	}
	else
	{
		rect.left = 0;
		rect.top = 0;
		rect.right = clientDC.Height();
		rect.bottom = clientDC.bottom;
	}
	GetDC()->Ellipse(rect);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
