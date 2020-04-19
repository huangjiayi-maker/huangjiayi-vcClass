
// Q11View.cpp : CQ11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Q11.h"
#endif

#include "Q11Doc.h"
#include "Q11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ11View

IMPLEMENT_DYNCREATE(CQ11View, CView)

BEGIN_MESSAGE_MAP(CQ11View, CView)
END_MESSAGE_MAP()

// CQ11View 构造/析构

CQ11View::CQ11View()
{
	// TODO: 在此处添加构造代码

}

CQ11View::~CQ11View()
{
}

BOOL CQ11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQ11View 绘制

void CQ11View::OnDraw(CDC* /*pDC*/)
{
	CQ11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CQ11View 诊断

#ifdef _DEBUG
void CQ11View::AssertValid() const
{
	CView::AssertValid();
}

void CQ11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ11Doc* CQ11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ11Doc)));
	return (CQ11Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ11View 消息处理程序
