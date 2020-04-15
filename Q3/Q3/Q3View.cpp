
// Q3View.cpp : CQ3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Q3.h"
#endif

#include "Q3Doc.h"
#include "Q3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ3View

IMPLEMENT_DYNCREATE(CQ3View, CView)

BEGIN_MESSAGE_MAP(CQ3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CQ3View 构造/析构

CQ3View::CQ3View()
{
	// TODO: 在此处添加构造代码
	set =true;
	rect.bottom = 250;
	rect.top = 200;
	rect.left = 0;
	rect.right = 50;

}

CQ3View::~CQ3View()
{
}

BOOL CQ3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQ3View 绘制

void CQ3View::OnDraw(CDC* pDC)
{
	CQ3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	if (set)
	{
		for (int i = 0; i < 1; i++)
			SetTimer(i, 1000, NULL);
		
	}
	pDC->Ellipse(rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CQ3View 诊断

#ifdef _DEBUG
void CQ3View::AssertValid() const
{
	CView::AssertValid();
}

void CQ3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ3Doc* CQ3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ3Doc)));
	return (CQ3Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ3View 消息处理程序


void CQ3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	//int flag = 0;
	GetClientRect(&cr);
	int i = nIDEvent;
	int t = rect.right;
	if (rect.right<cr.right&&set==true)
	{
		rect.right += 100;
		rect.left += 100;
	} 
	else if (rect.right == cr.right&&set == true)
	
		cr.right = 0;
	else	if (rect.left > 0 && set == true)
		{
			rect.left -= 100;
			rect.right -= 100;
		}
	else if (rect.left == 0 && set == true)
		cr.right = t;
	InvalidateRect(NULL, true);
	CView::OnTimer(nIDEvent);
}


void CQ3View::OnLButtonDown(UINT nFlags, CPoint point)//单击鼠标左键
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = true;
	CView::OnLButtonDown(nFlags, point);
}


void CQ3View::OnLButtonDblClk(UINT nFlags, CPoint point)//双击鼠标左键
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = false;
	CView::OnLButtonDblClk(nFlags, point);
}
