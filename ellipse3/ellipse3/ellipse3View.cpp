
// ellipse3View.cpp : Cellipse3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ellipse3.h"
#endif

#include "ellipse3Doc.h"
#include "ellipse3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellipse3View

IMPLEMENT_DYNCREATE(Cellipse3View, CView)

BEGIN_MESSAGE_MAP(Cellipse3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cellipse3View 构造/析构

Cellipse3View::Cellipse3View()
{
	// TODO: 在此处添加构造代码

}

Cellipse3View::~Cellipse3View()
{
}

BOOL Cellipse3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cellipse3View 绘制

void Cellipse3View::OnDraw(CDC* pDC)
{
	Cellipse3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect re1(0, 200, 50, 300);
	pDC->Ellipse(re1);

	CRect re3(100, 200, 150, 300);
	pDC->Ellipse(re3);

	CRect re5(200, 200, 250, 300);
	pDC->Ellipse(re5);

	CRect re7(300, 200, 350, 300);
	pDC->Ellipse(re7);
	
	CRect re9(400, 200, 450, 300);
	pDC->Ellipse(re9);

	CRect re10(500, 200, 550, 300);
	pDC->Ellipse(re10);

	CRect re11(600, 200, 650, 300);
	pDC->Ellipse(re11);
	CRect re12(700, 200, 750, 300);
	pDC->Ellipse(re12);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cellipse3View 诊断

#ifdef _DEBUG
void Cellipse3View::AssertValid() const
{
	CView::AssertValid();
}

void Cellipse3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellipse3Doc* Cellipse3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellipse3Doc)));
	return (Cellipse3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellipse3View 消息处理程序


void Cellipse3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CPen pen;
	pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
	CDC*dc = GetDC();
	CPen*oldPen = NULL;
	oldPen = dc->SelectObject(&pen);
	CBrush *oldbrush = NULL;
	CBrush *brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	oldbrush = dc->SelectObject(brush);
	if (point.x > 0 && point.x < 50 && point.y>200 && point.y < 300)
	{
		CRect rc(0, 200, 50, 300);
		dc->Rectangle(rc);
		//dc->SelectObject(oldPen);
	   // Invalidate();
	}
	else if (point.x > 100 && point.x < 150 && point.y>200 && point.y < 300)
	{
		CRect rc(100, 200, 150, 300);
		dc->Rectangle(rc);
		//dc->SelectObject(oldPen);
		// Invalidate();
	}
	else if (point.x >200 && point.x < 250 && point.y>200 && point.y < 300)
	{
		CRect rc(200, 200, 250, 300);
		dc->Rectangle(rc);
		// Invalidate();
	}
	else if (point.x > 300 && point.x < 350 && point.y>200 && point.y < 300)
	{
		CRect rc(300, 200, 350, 300);
		dc->Rectangle(rc);
		// Invalidate();
	}
	else if (point.x > 400 && point.x < 450 && point.y>200 && point.y < 300)
	{
		CRect rc(400, 200, 450, 300);
		dc->Rectangle(rc);
		// Invalidate();
	}
	else if (point.x > 500 && point.x < 550 && point.y>200 && point.y < 300)
	{
		CRect rc(500, 200, 550, 300);
		dc->Rectangle(rc);
		// Invalidate();
	}
	else if (point.x > 600 && point.x < 650 && point.y>200 && point.y < 300)
	{
		CRect rc(600, 200, 650, 300);
		dc->Rectangle(rc);
	}
	else if (point.x > 700 && point.x < 750 && point.y>200 && point.y < 300)
	{
		CRect rc(700, 200, 750, 300);
		dc->Rectangle(rc);
	}
	CView::OnLButtonDown(nFlags, point);
}
