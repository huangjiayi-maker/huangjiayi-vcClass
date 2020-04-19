
// weitu2View.cpp : Cweitu2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "weitu2.h"
#endif

#include "weitu2Doc.h"
#include "weitu2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweitu2View

IMPLEMENT_DYNCREATE(Cweitu2View, CView)

BEGIN_MESSAGE_MAP(Cweitu2View, CView)
END_MESSAGE_MAP()

// Cweitu2View 构造/析构

Cweitu2View::Cweitu2View()
{
	// TODO: 在此处添加构造代码

}

Cweitu2View::~Cweitu2View()
{
}

BOOL Cweitu2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweitu2View 绘制

void Cweitu2View::OnDraw(CDC* /*pDC*/)
{
	Cweitu2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cweitu2View 诊断

#ifdef _DEBUG
void Cweitu2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweitu2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweitu2Doc* Cweitu2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweitu2Doc)));
	return (Cweitu2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweitu2View 消息处理程序
