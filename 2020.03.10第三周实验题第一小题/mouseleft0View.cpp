
// mouseleft0View.cpp : Cmouseleft0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mouseleft0.h"
#endif

#include "mouseleft0Doc.h"
#include "mouseleft0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmouseleft0View

IMPLEMENT_DYNCREATE(Cmouseleft0View, CView)

BEGIN_MESSAGE_MAP(Cmouseleft0View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cmouseleft0View 构造/析构

Cmouseleft0View::Cmouseleft0View()
{
	// TODO: 在此处添加构造代码

}

Cmouseleft0View::~Cmouseleft0View()
{
}

BOOL Cmouseleft0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmouseleft0View 绘制

void Cmouseleft0View::OnDraw(CDC* /*pDC*/)
{
	Cmouseleft0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cmouseleft0View 诊断

#ifdef _DEBUG
void Cmouseleft0View::AssertValid() const
{
	CView::AssertValid();
}

void Cmouseleft0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmouseleft0Doc* Cmouseleft0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmouseleft0Doc)));
	return (Cmouseleft0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmouseleft0View 消息处理程序


void Cmouseleft0View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正被按下");
	GetDC()->TextOutW(200, 150, s);
	CView::OnLButtonDown(nFlags, point);
}


void Cmouseleft0View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正在抬起");
	GetDC()->TextOutW(200, 150, s);
	CView::OnLButtonUp(nFlags, point);
}
