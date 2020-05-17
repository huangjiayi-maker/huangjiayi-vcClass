
// mouseleft1View.cpp : Cmouseleft1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mouseleft1.h"
#endif

#include "mouseleft1Doc.h"
#include "mouseleft1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmouseleft1View

IMPLEMENT_DYNCREATE(Cmouseleft1View, CView)

BEGIN_MESSAGE_MAP(Cmouseleft1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmouseleft1View 构造/析构

Cmouseleft1View::Cmouseleft1View()
{
	// TODO: 在此处添加构造代码

}

Cmouseleft1View::~Cmouseleft1View()
{
}

BOOL Cmouseleft1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmouseleft1View 绘制

void Cmouseleft1View::OnDraw(CDC* pDC)
{
	Cmouseleft1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: 在此处为本机数据添加绘制代码
}


// Cmouseleft1View 诊断

#ifdef _DEBUG
void Cmouseleft1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmouseleft1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmouseleft1Doc* Cmouseleft1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmouseleft1Doc)));
	return (Cmouseleft1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmouseleft1View 消息处理程序


void Cmouseleft1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cmouseleft1Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;
	int sum = a + b;
	CString s;
	s.Format(_T("A+B=%d"), sum);
	GetDC()->TextOutW(200, 150, s);
	CView::OnLButtonDown(nFlags, point);
}
