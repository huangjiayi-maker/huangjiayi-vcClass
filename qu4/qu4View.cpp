
// qu4View.cpp : Cqu4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "qu4.h"
#endif

#include "qu4Doc.h"
#include "qu4View.h"
#include "mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cqu4View

IMPLEMENT_DYNCREATE(Cqu4View, CView)

BEGIN_MESSAGE_MAP(Cqu4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cqu4View 构造/析构

Cqu4View::Cqu4View()
{
	// TODO: 在此处添加构造代码
	int a = 2018;
	CString s = _T("cbeyf");
	CString ss = _T("hrehh");
}

Cqu4View::~Cqu4View()
{
}

BOOL Cqu4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cqu4View 绘制

void Cqu4View::OnDraw(CDC* /*pDC*/)
{
	Cqu4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cqu4View 诊断

#ifdef _DEBUG
void Cqu4View::AssertValid() const
{
	CView::AssertValid();
}

void Cqu4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cqu4Doc* Cqu4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cqu4Doc)));
	return (Cqu4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cqu4View 消息处理程序


void Cqu4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	mydlg dlg;
	
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
	CView::OnLButtonDown(nFlags, point);
}
