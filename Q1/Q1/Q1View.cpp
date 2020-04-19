
// Q1View.cpp : CQ1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Q1.h"
#endif

#include "Q1Doc.h"
#include "Q1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ1View

IMPLEMENT_DYNCREATE(CQ1View, CView)

BEGIN_MESSAGE_MAP(CQ1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CQ1View 构造/析构

CQ1View::CQ1View()
{
	// TODO: 在此处添加构造代码
	cr.left = 200; cr.top = 200;
	cr.right = 300; cr.bottom = 300;
	flag = 0;
}

CQ1View::~CQ1View()
{
}

BOOL CQ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQ1View 绘制

void CQ1View::OnDraw(CDC* pDC)
{
	CQ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//CRect cr(200, 200, 300, 300);
	pDC->Rectangle(cr);
	//Invalidate();
	// TODO: 在此处为本机数据添加绘制代码
}


// CQ1View 诊断

#ifdef _DEBUG
void CQ1View::AssertValid() const
{
	CView::AssertValid();
}

void CQ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ1Doc* CQ1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ1Doc)));
	return (CQ1Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ1View 消息处理程序


void CQ1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if(nFlags)
	cr.left = point.x - 50;
	cr.top = point.y - 50;
	cr.right = point.x + 50;
	0; cr.bottom = point.y + 50;
	InvalidateRect(NULL, true);

	CView::OnLButtonDown(nFlags, point);
}


void CQ1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if(nFlags)
	cr.left = point.x - 50;
	cr.top = point.y - 50;
	cr.right = point.x + 50;
	0; cr.bottom = point.y + 50;
	InvalidateRect(NULL, true);
	CView::OnMouseMove(nFlags, point);

}


void CQ1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nFlags) {
	cr.left = point.x - 50;
	cr.top = point.y - 50;
	cr.right = point.x + 50;
	0; cr.bottom = point.y + 50;
	InvalidateRect(NULL, true);
	}

	CView::OnLButtonUp(nFlags, point);
}
