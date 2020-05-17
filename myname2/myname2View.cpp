
// myname2View.cpp : Cmyname2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "myname2.h"
#endif

#include "myname2Doc.h"
#include "myname2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmyname2View

IMPLEMENT_DYNCREATE(Cmyname2View, CView)

BEGIN_MESSAGE_MAP(Cmyname2View, CView)
END_MESSAGE_MAP()

// Cmyname2View 构造/析构

Cmyname2View::Cmyname2View()
{
	// TODO: 在此处添加构造代码

}

Cmyname2View::~Cmyname2View()
{
}

BOOL Cmyname2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmyname2View 绘制

void Cmyname2View::OnDraw(CDC* pDC)
{
	Cmyname2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString ss;
	pDC->TextOutW(200, 150, pDoc->s);
	ss.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 200, ss);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cmyname2View 诊断

#ifdef _DEBUG
void Cmyname2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmyname2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmyname2Doc* Cmyname2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmyname2Doc)));
	return (Cmyname2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmyname2View 消息处理程序
