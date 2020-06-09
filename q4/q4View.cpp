
// q4View.cpp : Cq4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "q4.h"
#endif

#include "q4Doc.h"
#include "q4View.h"
#include "mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cq4View

IMPLEMENT_DYNCREATE(Cq4View, CView)

BEGIN_MESSAGE_MAP(Cq4View, CView)
	ON_COMMAND(ID_show, &Cq4View::Onshow)
END_MESSAGE_MAP()

// Cq4View 构造/析构

Cq4View::Cq4View()
{
	// TODO: 在此处添加构造代码

}

Cq4View::~Cq4View()
{
}

BOOL Cq4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cq4View 绘制

void Cq4View::OnDraw(CDC* /*pDC*/)
{
	Cq4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cq4View 诊断

#ifdef _DEBUG
void Cq4View::AssertValid() const
{
	CView::AssertValid();
}

void Cq4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cq4Doc* Cq4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cq4Doc)));
	return (Cq4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cq4View 消息处理程序


void Cq4View::Onshow()
{
	// TODO: 在此添加命令处理程序代码
	mydlg dlg;
	int r=dlg.DoModal();
	if (r== IDOK)
	{
		CRect cr;
		int color = RGB(dlg.R, dlg.G, dlg.B);
		CClientDC dc(this);
		CBrush newBrush;
		newBrush.CreateSolidBrush(color);
		dc.SelectObject(&newBrush);
		GetClientRect(&cr);
		dc.Ellipse(cr);
		DeleteObject(newBrush);
		//Invalidate();
	}
	
}
