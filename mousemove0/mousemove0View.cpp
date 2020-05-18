
// mousemove0View.cpp : Cmousemove0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mousemove0.h"
#endif

#include "mousemove0Doc.h"
#include "mousemove0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousemove0View

IMPLEMENT_DYNCREATE(Cmousemove0View, CView)

BEGIN_MESSAGE_MAP(Cmousemove0View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cmousemove0View 构造/析构

Cmousemove0View::Cmousemove0View()
{
	// TODO: 在此处添加构造代码
	count1 = 0;
	count2 = 0;
}

Cmousemove0View::~Cmousemove0View()
{
}

BOOL Cmousemove0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmousemove0View 绘制

void Cmousemove0View::OnDraw(CDC* /*pDC*/)
{
	Cmousemove0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cmousemove0View 诊断

#ifdef _DEBUG
void Cmousemove0View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousemove0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousemove0Doc* Cmousemove0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousemove0Doc)));
	return (Cmousemove0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousemove0View 消息处理程序


void Cmousemove0View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CString s,ss;
	//point.x = 0;
	
	

	if (t == true)
	{
    count1++;
	count2 += point2.x - point1.x;
	s.Format(_T("鼠标移动次数：%d"), count1);
	ss.Format(_T("横向移动像素发生次数：%d"), count2);
	GetDC()->TextOutW(200, 150, s);
	GetDC()->TextOutW(200, 200, ss);
	}
    
	CView::OnMouseMove(nFlags, point);
}


void Cmousemove0View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	point1 = point;
	t = true;
}


void Cmousemove0View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point2 = point;
	t = false;
	CView::OnLButtonUp(nFlags, point);
}
