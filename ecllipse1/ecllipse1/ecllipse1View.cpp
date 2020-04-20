
// ecllipse1View.cpp : Cecllipse1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ecllipse1.h"
#endif

#include "ecllipse1Doc.h"
#include "ecllipse1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cecllipse1View

IMPLEMENT_DYNCREATE(Cecllipse1View, CView)

BEGIN_MESSAGE_MAP(Cecllipse1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_NCMOUSEMOVE()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cecllipse1View 构造/析构

Cecllipse1View::Cecllipse1View()
{
	// TODO: 在此处添加构造代码
	flag = 1;
}

Cecllipse1View::~Cecllipse1View()
{
}

BOOL Cecllipse1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cecllipse1View 绘制

void Cecllipse1View::OnDraw(CDC* pDC)
{
	Cecllipse1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if(flag==1)
	pDC->Ellipse(pDoc->m_tagrec);

	// TODO: 在此处为本机数据添加绘制代码
}


// Cecllipse1View 诊断

#ifdef _DEBUG
void Cecllipse1View::AssertValid() const
{
	CView::AssertValid();
}

void Cecllipse1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cecllipse1Doc* Cecllipse1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cecllipse1Doc)));
	return (Cecllipse1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cecllipse1View 消息处理程序


void Cecllipse1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cecllipse1Doc* pDoc = GetDocument();
	 
	 
	 pDoc->m_tagrec.left=point.x;
	 pDoc->m_tagrec.top=point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cecllipse1View::OnNcMouseMove(UINT nHitTest, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//Cecllipse1Doc* pDoc = GetDocument();
	CView::OnNcMouseMove(nHitTest, point);
//	pDoc->m_tagrec.right = point.x;
	//pDoc->m_tagrec.bottom = point.y;
	//InvalidateRect(NULL, true);
}


void Cecllipse1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cecllipse1Doc* pDoc = GetDocument();
    flag = 1;
    pDoc->m_tagrec.right = point.x;
	pDoc->m_tagrec.bottom = point.y;
	InvalidateRect(NULL, true);
	
	
	CView::OnMouseMove(nFlags, point);
}


void Cecllipse1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	Cecllipse1Doc* pDoc = GetDocument();
	pDoc->m_tagrec.right = point.x;
	pDoc->m_tagrec.bottom = point.y;
	InvalidateRect(NULL, true);flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
