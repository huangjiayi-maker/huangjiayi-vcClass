
// suanshuView.cpp : CsuanshuView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "suanshu.h"
#endif

#include "suanshuDoc.h"
#include "suanshuView.h"
#include "dlg0.h"
#include "dlg1.h"
#include "dlg2.h"
#include "dlg3.h"
#include "dlg.h"
#include "dlg5.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CsuanshuView

IMPLEMENT_DYNCREATE(CsuanshuView, CView)

BEGIN_MESSAGE_MAP(CsuanshuView, CView)
	ON_COMMAND(ID_PUTSUM, &CsuanshuView::OnPutsum)
	ON_COMMAND(ID_PUTSUBTRACTION, &CsuanshuView::OnPutsubtraction)
	ON_COMMAND(ID_PUTMUL, &CsuanshuView::OnPutmul)
	ON_COMMAND(ID_PUTDIVISION, &CsuanshuView::OnPutdivision)
	ON_COMMAND(ID_PUTSQRT, &CsuanshuView::OnPutsqrt)
	ON_COMMAND(ID_PUTDAOSHU, &CsuanshuView::OnPutdaoshu)
END_MESSAGE_MAP()

// CsuanshuView 构造/析构

CsuanshuView::CsuanshuView()
{
	// TODO: 在此处添加构造代码

}

CsuanshuView::~CsuanshuView()
{
}

BOOL CsuanshuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CsuanshuView 绘制

void CsuanshuView::OnDraw(CDC* /*pDC*/)
{
	CsuanshuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CsuanshuView 诊断

#ifdef _DEBUG
void CsuanshuView::AssertValid() const
{
	CView::AssertValid();
}

void CsuanshuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CsuanshuDoc* CsuanshuView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CsuanshuDoc)));
	return (CsuanshuDoc*)m_pDocument;
}
#endif //_DEBUG


// CsuanshuView 消息处理程序


void CsuanshuView::OnPutsum()
{
	// TODO: 在此添加命令处理程序代码
	dlg0 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutsubtraction()
{
	// TODO: 在此添加命令处理程序代码
	dlg1 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutmul()
{
	// TODO: 在此添加命令处理程序代码
	dlg2 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutdivision()
{
	// TODO: 在此添加命令处理程序代码
	dlg3 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutsqrt()
{
	// TODO: 在此添加命令处理程序代码
	dlg dlg4;
	int t = dlg4.DoModal();
}


void CsuanshuView::OnPutdaoshu()
{
	// TODO: 在此添加命令处理程序代码
	dlg5 dlg;
	int t = dlg.DoModal();
}
