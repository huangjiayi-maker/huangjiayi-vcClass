
// W32DView.cpp : CW32DView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "W32D.h"
#endif

#include "W32DDoc.h"
#include "W32DView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32A.h"

// CW32DView

IMPLEMENT_DYNCREATE(CW32DView, CView)

BEGIN_MESSAGE_MAP(CW32DView, CView)
END_MESSAGE_MAP()

// CW32DView 构造/析构

CW32DView::CW32DView()
{
	// TODO: 在此处添加构造代码

}

CW32DView::~CW32DView()
{
}

BOOL CW32DView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CW32DView 绘制

void CW32DView::OnDraw(CDC* pDC)
{
	CW32DDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int sum = factorial(5);
	CString s;
	s.Format(_T("%d"), sum);
	pDC->TextOutW(200, 200, s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CW32DView 诊断

#ifdef _DEBUG
void CW32DView::AssertValid() const
{
	CView::AssertValid();
}

void CW32DView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CW32DDoc* CW32DView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CW32DDoc)));
	return (CW32DDoc*)m_pDocument;
}
#endif //_DEBUG


// CW32DView 消息处理程序
