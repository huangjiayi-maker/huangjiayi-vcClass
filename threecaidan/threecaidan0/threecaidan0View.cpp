
// threecaidan0View.cpp : Cthreecaidan0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "threecaidan0.h"
#endif

#include "threecaidan0Doc.h"
#include "threecaidan0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cthreecaidan0View

IMPLEMENT_DYNCREATE(Cthreecaidan0View, CView)

BEGIN_MESSAGE_MAP(Cthreecaidan0View, CView)
END_MESSAGE_MAP()

// Cthreecaidan0View 构造/析构

Cthreecaidan0View::Cthreecaidan0View()
{
	// TODO: 在此处添加构造代码

}

Cthreecaidan0View::~Cthreecaidan0View()
{
}

BOOL Cthreecaidan0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cthreecaidan0View 绘制

void Cthreecaidan0View::OnDraw(CDC* /*pDC*/)
{
	Cthreecaidan0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cthreecaidan0View 诊断

#ifdef _DEBUG
void Cthreecaidan0View::AssertValid() const
{
	CView::AssertValid();
}

void Cthreecaidan0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cthreecaidan0Doc* Cthreecaidan0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cthreecaidan0Doc)));
	return (Cthreecaidan0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cthreecaidan0View 消息处理程序
