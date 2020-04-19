
// Q3View.cpp : CQ3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Q3.h"
#endif

#include "Q3Doc.h"
#include "Q3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ3View

IMPLEMENT_DYNCREATE(CQ3View, CView)

BEGIN_MESSAGE_MAP(CQ3View, CView)
END_MESSAGE_MAP()

// CQ3View 构造/析构

CQ3View::CQ3View()
{
	// TODO: 在此处添加构造代码

}

CQ3View::~CQ3View()
{
}

BOOL CQ3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQ3View 绘制

void CQ3View::OnDraw(CDC* /*pDC*/)
{
	CQ3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CQ3View 诊断

#ifdef _DEBUG
void CQ3View::AssertValid() const
{
	CView::AssertValid();
}

void CQ3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ3Doc* CQ3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ3Doc)));
	return (CQ3Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ3View 消息处理程序
