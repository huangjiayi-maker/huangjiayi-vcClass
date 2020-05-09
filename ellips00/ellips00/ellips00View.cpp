
// ellips00View.cpp : Cellips00View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ellips00.h"
#endif

#include "ellips00Doc.h"
#include "ellips00View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellips00View

IMPLEMENT_DYNCREATE(Cellips00View, CView)

BEGIN_MESSAGE_MAP(Cellips00View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cellips00View 构造/析构

Cellips00View::Cellips00View()
{
	// TODO: 在此处添加构造代码

}

Cellips00View::~Cellips00View()
{
}

BOOL Cellips00View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cellips00View 绘制

void Cellips00View::OnDraw(CDC* pDC)
{
	Cellips00Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->m_crlrect);
	// TODO: 在此处为本机数据添加绘制代码
}


// Cellips00View 诊断

#ifdef _DEBUG
void Cellips00View::AssertValid() const
{
	CView::AssertValid();
}

void Cellips00View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellips00Doc* Cellips00View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellips00Doc)));
	return (Cellips00Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellips00View 消息处理程序


void Cellips00View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cellips00Doc* pDoc = GetDocument();
	pDoc->m_crlrect.left -= 10;
	pDoc->m_crlrect.top -= 10;
	pDoc->m_crlrect.right += 10;
	pDoc->m_crlrect.bottom += 10;
	//GetDC()->Ellipse(pDoc->m_crlrect);
	InvalidateRect(NULL, true);

	CView::OnLButtonDown(nFlags, point);
}
