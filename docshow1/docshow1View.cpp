
// docshow1View.cpp : Cdocshow1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "docshow1.h"
#endif

#include "docshow1Doc.h"
#include "docshow1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdocshow1View

IMPLEMENT_DYNCREATE(Cdocshow1View, CView)

BEGIN_MESSAGE_MAP(Cdocshow1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cdocshow1View 构造/析构

Cdocshow1View::Cdocshow1View()
{
	// TODO: 在此处添加构造代码

}

Cdocshow1View::~Cdocshow1View()
{
}

BOOL Cdocshow1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdocshow1View 绘制

void Cdocshow1View::OnDraw(CDC* /*pDC*/)
{
	Cdocshow1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdocshow1View 诊断

#ifdef _DEBUG
void Cdocshow1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdocshow1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdocshow1Doc* Cdocshow1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdocshow1Doc)));
	return (Cdocshow1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdocshow1View 消息处理程序


void Cdocshow1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdocshow1Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cdocshow1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdocshow1Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	GetDC()->TextOutW(200, 200, s);


	CView::OnRButtonDown(nFlags, point);
}
