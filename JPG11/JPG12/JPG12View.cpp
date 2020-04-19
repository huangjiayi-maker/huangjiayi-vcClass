
// JPG12View.cpp : CJPG12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "JPG12.h"
#endif

#include "JPG12Doc.h"
#include "JPG12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJPG12View

IMPLEMENT_DYNCREATE(CJPG12View, CView)

BEGIN_MESSAGE_MAP(CJPG12View, CView)
END_MESSAGE_MAP()

// CJPG12View 构造/析构

CJPG12View::CJPG12View()
{
	// TODO: 在此处添加构造代码

}

CJPG12View::~CJPG12View()
{
}

BOOL CJPG12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CJPG12View 绘制

void CJPG12View::OnDraw(CDC* /*pDC*/)
{
	CJPG12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CJPG12View 诊断

#ifdef _DEBUG
void CJPG12View::AssertValid() const
{
	CView::AssertValid();
}

void CJPG12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJPG12Doc* CJPG12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJPG12Doc)));
	return (CJPG12Doc*)m_pDocument;
}
#endif //_DEBUG


// CJPG12View 消息处理程序
