
// weituView.cpp : CweituView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "weitu.h"
#endif

#include "weituDoc.h"
#include "weituView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CweituView

IMPLEMENT_DYNCREATE(CweituView, CView)

BEGIN_MESSAGE_MAP(CweituView, CView)
END_MESSAGE_MAP()

// CweituView 构造/析构

CweituView::CweituView()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_bitmap.LoadBitmap(IDB_BITMAP1);
	m_bitmap.GetBitmap(&BM);
	m_nwidth = BM.bmWidth;
	m_nheight = BM.bmHeight;
}

CweituView::~CweituView()
{
}

BOOL CweituView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CweituView 绘制

void CweituView::OnDraw(CDC* pDC)
{
	CweituDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MenDC;
	MenDC.CreateCompatibleDC(NULL);
	MenDC.SelectObject(m_bitmap);
	pDC->BitBlt(0, 0, m_nwidth, m_nheight, &MenDC, 0, 0, SRCCOPY);
}


// CweituView 诊断

#ifdef _DEBUG
void CweituView::AssertValid() const
{
	CView::AssertValid();
}

void CweituView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CweituDoc* CweituView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CweituDoc)));
	return (CweituDoc*)m_pDocument;
}
#endif //_DEBUG


// CweituView 消息处理程序
