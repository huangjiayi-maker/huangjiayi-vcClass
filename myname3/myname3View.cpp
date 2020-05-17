
// myname3View.cpp : Cmyname3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "myname3.h"
#endif

#include "myname3Doc.h"
#include "myname3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmyname3View

IMPLEMENT_DYNCREATE(Cmyname3View, CView)

BEGIN_MESSAGE_MAP(Cmyname3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cmyname3View 构造/析构

Cmyname3View::Cmyname3View()
{
	// TODO: 在此处添加构造代码

}

Cmyname3View::~Cmyname3View()
{
}

BOOL Cmyname3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmyname3View 绘制

void Cmyname3View::OnDraw(CDC* /*pDC*/)
{
	Cmyname3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cmyname3View 诊断

#ifdef _DEBUG
void Cmyname3View::AssertValid() const
{
	CView::AssertValid();
}

void Cmyname3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmyname3Doc* Cmyname3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmyname3Doc)));
	return (Cmyname3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmyname3View 消息处理程序


void Cmyname3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cmyname3Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cmyname3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cmyname3Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	GetDC()->TextOutW(200, 150, s);
	CView::OnRButtonDown(nFlags, point);
}
