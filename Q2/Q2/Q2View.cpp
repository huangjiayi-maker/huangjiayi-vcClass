
// Q2View.cpp : CQ2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Q2.h"
#endif

#include "Q2Doc.h"
#include "Q2View.h"
#include "mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ2View

IMPLEMENT_DYNCREATE(CQ2View, CView)

BEGIN_MESSAGE_MAP(CQ2View, CView)
	ON_COMMAND(ID_OPOOUT, &CQ2View::OnOpoout)
END_MESSAGE_MAP()

// CQ2View 构造/析构

CQ2View::CQ2View()
{
	// TODO: 在此处添加构造代码

}

CQ2View::~CQ2View()
{
}

BOOL CQ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CQ2View 绘制

void CQ2View::OnDraw(CDC* /*pDC*/)
{
	CQ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CQ2View 诊断

#ifdef _DEBUG
void CQ2View::AssertValid() const
{
	CView::AssertValid();
}

void CQ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ2Doc* CQ2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ2Doc)));
	return (CQ2Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ2View 消息处理程序


void CQ2View::OnOpoout()
{
	// TODO: 在此添加命令处理程序代码
	mydlg0 dlg;
	int t = dlg.DoModal();
	if (t = IDOK)
	{
		int SUM, X, Y;
		SUM = dlg.sum;
		X = dlg.x;
		Y = dlg.y;//取得从对话框那头取回来的数值
	}

}
