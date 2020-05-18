
// exchangeView.cpp : CexchangeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exchange.h"
#endif

#include "exchangeDoc.h"
#include "exchangeView.h"
#include"mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CexchangeView

IMPLEMENT_DYNCREATE(CexchangeView, CView)

BEGIN_MESSAGE_MAP(CexchangeView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CexchangeView 构造/析构

CexchangeView::CexchangeView()
{
	// TODO: 在此处添加构造代码

}

CexchangeView::~CexchangeView()
{
}

BOOL CexchangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CexchangeView 绘制

void CexchangeView::OnDraw(CDC* /*pDC*/)
{
	CexchangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CexchangeView 诊断

#ifdef _DEBUG
void CexchangeView::AssertValid() const
{
	CView::AssertValid();
}

void CexchangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CexchangeDoc* CexchangeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CexchangeDoc)));
	return (CexchangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CexchangeView 消息处理程序


void CexchangeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	mydlg *pD = new mydlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDown(nFlags, point);
}
