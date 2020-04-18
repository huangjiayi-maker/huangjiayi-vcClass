
// dlg2View.cpp : Cdlg2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "dlg2.h"
#endif

#include "dlg2Doc.h"
#include "dlg2View.h"
#include"myD2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdlg2View

IMPLEMENT_DYNCREATE(Cdlg2View, CView)

BEGIN_MESSAGE_MAP(Cdlg2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cdlg2View 构造/析构

Cdlg2View::Cdlg2View()
{
	// TODO: 在此处添加构造代码

}

Cdlg2View::~Cdlg2View()
{
}

BOOL Cdlg2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdlg2View 绘制

void Cdlg2View::OnDraw(CDC* /*pDC*/)
{
	Cdlg2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdlg2View 诊断

#ifdef _DEBUG
void Cdlg2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdlg2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdlg2Doc* Cdlg2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdlg2Doc)));
	return (Cdlg2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdlg2View 消息处理程序


void Cdlg2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	myD2 md2;
	int r = md2.DoModal();
	if (r == IDOK)
	{

	}
	CView::OnRButtonDblClk(nFlags, point);
}
