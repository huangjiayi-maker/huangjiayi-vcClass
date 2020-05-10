
// USingDllView.cpp : CUSingDllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "USingDll.h"
#endif

#include "USingDllDoc.h"
#include "USingDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32D1.h";

// CUSingDllView

IMPLEMENT_DYNCREATE(CUSingDllView, CView)

BEGIN_MESSAGE_MAP(CUSingDllView, CView)
END_MESSAGE_MAP()

// CUSingDllView 构造/析构

CUSingDllView::CUSingDllView()
{
	// TODO: 在此处添加构造代码

}

CUSingDllView::~CUSingDllView()
{
}

BOOL CUSingDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUSingDllView 绘制

void CUSingDllView::OnDraw(CDC* pDC)
{
	CUSingDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int sum = factorial(5);
	CString s;
	s.Format(_T("%d"), sum);
	pDC->TextOutW(200, 150, s);
	float f;
	FAC fac;
	f = fac.convert(30.0);
	CString ss;
	ss.Format(_T("%f"), f);
	pDC->TextOutW(200, 200, ss);
	// TODO: 在此处为本机数据添加绘制代码
}


// CUSingDllView 诊断

#ifdef _DEBUG
void CUSingDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUSingDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUSingDllDoc* CUSingDllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUSingDllDoc)));
	return (CUSingDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUSingDllView 消息处理程序
