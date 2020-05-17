
// docshow0View.cpp : Cdocshow0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "docshow0.h"
#endif

#include "docshow0Doc.h"
#include "docshow0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdocshow0View

IMPLEMENT_DYNCREATE(Cdocshow0View, CView)

BEGIN_MESSAGE_MAP(Cdocshow0View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdocshow0View 构造/析构

Cdocshow0View::Cdocshow0View()
{
	// TODO: 在此处添加构造代码

}

Cdocshow0View::~Cdocshow0View()
{
}

BOOL Cdocshow0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdocshow0View 绘制

void Cdocshow0View::OnDraw(CDC* /*pDC*/)
{
	Cdocshow0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdocshow0View 诊断

#ifdef _DEBUG
void Cdocshow0View::AssertValid() const
{
	CView::AssertValid();
}

void Cdocshow0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdocshow0Doc* Cdocshow0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdocshow0Doc)));
	return (Cdocshow0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdocshow0View 消息处理程序


void Cdocshow0View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cdocshow0Doc* pDoc = GetDocument();
	GetDC()->TextOutW(200, 200, pDoc->s);
	CView::OnLButtonDown(nFlags, point);
}
