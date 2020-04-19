
// name0View.cpp : Cname0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "name0.h"
#endif

#include "name0Doc.h"
#include "name0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cname0View

IMPLEMENT_DYNCREATE(Cname0View, CView)

BEGIN_MESSAGE_MAP(Cname0View, CView)
END_MESSAGE_MAP()

// Cname0View 构造/析构

Cname0View::Cname0View()
{
	// TODO: 在此处添加构造代码

}

Cname0View::~Cname0View()
{
}

BOOL Cname0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cname0View 绘制

void Cname0View::OnDraw(CDC* /*pDC*/)
{
	Cname0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cname0View 诊断

#ifdef _DEBUG
void Cname0View::AssertValid() const
{
	CView::AssertValid();
}

void Cname0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cname0Doc* Cname0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cname0Doc)));
	return (Cname0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cname0View 消息处理程序
