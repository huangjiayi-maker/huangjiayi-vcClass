
// bianjiqiView.cpp : CbianjiqiView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "bianjiqi.h"
#endif

#include "bianjiqiDoc.h"
#include "bianjiqiView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CbianjiqiView

IMPLEMENT_DYNCREATE(CbianjiqiView, CView)

BEGIN_MESSAGE_MAP(CbianjiqiView, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CbianjiqiView 构造/析构

CbianjiqiView::CbianjiqiView()
{
	// TODO: 在此处添加构造代码

}

CbianjiqiView::~CbianjiqiView()
{
}

BOOL CbianjiqiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CbianjiqiView 绘制

void CbianjiqiView::OnDraw(CDC* pDC)
{
	CbianjiqiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(100,100, 400, 400);
	// TODO: 在此处为本机数据添加绘制代码
}


// CbianjiqiView 诊断

#ifdef _DEBUG
void CbianjiqiView::AssertValid() const
{
	CView::AssertValid();
}

void CbianjiqiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CbianjiqiDoc* CbianjiqiView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CbianjiqiDoc)));
	return (CbianjiqiDoc*)m_pDocument;
}
#endif //_DEBUG


// CbianjiqiView 消息处理程序

int x, y;
CString cs;
void CbianjiqiView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CClientDC dc(this);
	int flag;
	int a;
	CRect rect(300, 300, 600, 600);
	s.Format(_T("%c"), nChar);
	if (x >= 200 && y >=200)
	{
		a = (x - 200) / 10 + (y - 200) / 20 * 30;
		cs.Insert(a, nChar);
	}
	else
	{
		s.Append(s);
	}
	dc.DrawText(cs, rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CbianjiqiView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	//CRect cr;
	
}
