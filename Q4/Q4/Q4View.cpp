
// Q4View.cpp : CQ4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Q4.h"
#endif

#include "Q4Doc.h"
#include "Q4View.h"
#include "myDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ4View

IMPLEMENT_DYNCREATE(CQ4View, CView)

BEGIN_MESSAGE_MAP(CQ4View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CQ4View 构造/析构

CQ4View::CQ4View()
{
	// TODO: 在此处添加构造代码

}

CQ4View::~CQ4View()
{
}

BOOL CQ4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQ4View 绘制

void CQ4View::OnDraw(CDC* /*pDC*/)
{
	CQ4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CQ4View 诊断

#ifdef _DEBUG
void CQ4View::AssertValid() const
{
	CView::AssertValid();
}

void CQ4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ4Doc* CQ4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ4Doc)));
	return (CQ4Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ4View 消息处理程序


void CQ4View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	myDlg0 *pD = new myDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
