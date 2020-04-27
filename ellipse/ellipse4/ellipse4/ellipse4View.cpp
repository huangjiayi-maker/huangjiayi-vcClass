
// ellipse4View.cpp : Cellipse4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ellipse4.h"
#endif

#include "ellipse4Doc.h"
#include "ellipse4View.h"
#include"mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellipse4View

IMPLEMENT_DYNCREATE(Cellipse4View, CView)

BEGIN_MESSAGE_MAP(Cellipse4View, CView)
	ON_COMMAND(ID_COLOR, &Cellipse4View::OnColor)
END_MESSAGE_MAP()

// Cellipse4View 构造/析构

Cellipse4View::Cellipse4View()
{
	// TODO: 在此处添加构造代码

}

Cellipse4View::~Cellipse4View()
{
}

BOOL Cellipse4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cellipse4View 绘制

void Cellipse4View::OnDraw(CDC* pDC)
{
	Cellipse4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	// TODO: 在此处为本机数据添加绘制代码
}


// Cellipse4View 诊断

#ifdef _DEBUG
void Cellipse4View::AssertValid() const
{
	CView::AssertValid();
}

void Cellipse4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellipse4Doc* Cellipse4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellipse4Doc)));
	return (Cellipse4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellipse4View 消息处理程序


void Cellipse4View::OnColor()
{
	// TODO: 在此添加命令处理程序代码
	mydlg0 color;
	int t=color.DoModal();
	//CClientDC dc(this);
	mydlg0 dlg;
	if (IDOK) {
		CDC*dc = GetDC();
	 red1 = dlg.red;
	 green1 = dlg.green;
	 blue1 = dlg.blue;
	 int color = RGB(red1, green1, blue1);
	 CBrush brush;
	 brush.CreateSolidBrush(color);
	 CBrush* older = dc->SelectObject(&brush);
	 CRect rect(200, 200, 300, 350);
	 dc->Ellipse(rect);
	
	// GetDC()->FillSolidRect(&rect, color);//矩形填充
	 dc->SelectObject(older);

	}


	
}
