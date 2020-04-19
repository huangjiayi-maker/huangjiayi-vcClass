
// threecaidanView.cpp : CthreecaidanView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "threecaidan.h"
#endif

#include "threecaidanDoc.h"
#include "threecaidanView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CthreecaidanView

IMPLEMENT_DYNCREATE(CthreecaidanView, CView)

BEGIN_MESSAGE_MAP(CthreecaidanView, CView)
	ON_COMMAND(ID_LINE, &CthreecaidanView::OnLine)
	ON_COMMAND(ID_RATANGLE, &CthreecaidanView::OnRatangle)
	ON_COMMAND(ID_ECLLIPSE, &CthreecaidanView::OnEcllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CthreecaidanView 构造/析构

CthreecaidanView::CthreecaidanView()
{
	// TODO: 在此处添加构造代码
	flag1 = 1;		flag0 = 1;
}

CthreecaidanView::~CthreecaidanView()
{
}

BOOL CthreecaidanView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CthreecaidanView 绘制

void CthreecaidanView::OnDraw(CDC* /*pDC*/)
{
	CthreecaidanDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CthreecaidanView 诊断

#ifdef _DEBUG
void CthreecaidanView::AssertValid() const
{
	CView::AssertValid();
}

void CthreecaidanView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CthreecaidanDoc* CthreecaidanView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CthreecaidanDoc)));
	return (CthreecaidanDoc*)m_pDocument;
}
#endif //_DEBUG


// CthreecaidanView 消息处理程序


void CthreecaidanView::OnLine()
{
	CClientDC dc(this);
	// TODO: 在此添加命令处理程序代码
	//dc.TextOutW(m_ratangle.left, m_ratangle.bottom, m_ratangle.right,m_ratangle.bottom);
}


void CthreecaidanView::OnRatangle()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	//pDC->Rectangle(m_ratangle);

}


void CthreecaidanView::OnEcllipse()
{
	CClientDC dc(this);
	// TODO: 在此添加命令处理程序代码
}


void CthreecaidanView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	flag0 = 1;
	m_ratangle.left  = point.x;
	m_ratangle.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CthreecaidanView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	flag1 = 0;
	m_ratangle.right = point.x;
	m_ratangle.bottom = point.y;
	CView::OnLButtonUp(nFlags, point);
}


void CthreecaidanView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CClientDC dc(this);
	pointt = point;
	if (flag0 = 1 && flag1 != 0)
		InvalidateRect(NULL, false);
	CView::OnMouseMove(nFlags, point);
}
