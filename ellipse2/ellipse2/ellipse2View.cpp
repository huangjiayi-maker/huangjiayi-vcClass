
// ellipse2View.cpp : Cellipse2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ellipse2.h"
#endif

#include "ellipse2Doc.h"
#include "ellipse2View.h"
#include "mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellipse2View

IMPLEMENT_DYNCREATE(Cellipse2View, CView)

BEGIN_MESSAGE_MAP(Cellipse2View, CView)
	ON_COMMAND(ID_OUTPUT, &Cellipse2View::OnOutput)
END_MESSAGE_MAP()

// Cellipse2View 构造/析构

Cellipse2View::Cellipse2View()
{
	// TODO: 在此处添加构造代码

}

Cellipse2View::~Cellipse2View()
{
}

BOOL Cellipse2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cellipse2View 绘制

void Cellipse2View::OnDraw(CDC* /*pDC*/)
{
	Cellipse2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cellipse2View 诊断

#ifdef _DEBUG
void Cellipse2View::AssertValid() const
{
	CView::AssertValid();
}

void Cellipse2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellipse2Doc* Cellipse2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellipse2Doc)));
	return (Cellipse2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellipse2View 消息处理程序


void Cellipse2View::OnOutput()
{
	// TODO: 在此添加命令处理程序代码
	mydlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int a = dlg.left;
		int b = dlg.top;
		int c = dlg.right;
		int d = dlg.bouttom;
		CRect re(a, b, c, d);
		GetDC()->Ellipse(re);
	}
}
