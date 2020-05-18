
// ellipsepointView.cpp : CellipsepointView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ellipsepoint.h"
#endif

#include "ellipsepointDoc.h"
#include "ellipsepointView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CellipsepointView

IMPLEMENT_DYNCREATE(CellipsepointView, CView)

BEGIN_MESSAGE_MAP(CellipsepointView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CellipsepointView 构造/析构

CellipsepointView::CellipsepointView()
{
	// TODO: 在此处添加构造代码
	t = false;
}

CellipsepointView::~CellipsepointView()
{
}

BOOL CellipsepointView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CellipsepointView 绘制

void CellipsepointView::OnDraw(CDC* /*pDC*/)
{
	CellipsepointDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CellipsepointView 诊断

#ifdef _DEBUG
void CellipsepointView::AssertValid() const
{
	CView::AssertValid();
}

void CellipsepointView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CellipsepointDoc* CellipsepointView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CellipsepointDoc)));
	return (CellipsepointDoc*)m_pDocument;
}
#endif //_DEBUG


// CellipsepointView 消息处理程序


void CellipsepointView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	t = true;
	point1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CellipsepointView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	t = false;
	point2 = point;
	CView::OnLButtonUp(nFlags, point);
	CRect cr(point1.x, point1.y, point2.x, point2.y);
	GetDC()->Rectangle(cr);
}


void CellipsepointView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CClientDC clientDC(this);
	s.Format(_T("x=%d  Y=%d"), point.x, point.y);
	if(t==true)
	clientDC.TextOut(20, 20, s);
	CView::OnMouseMove(nFlags, point);
	
}
