
// nameView.cpp : CnameView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "name.h"
#endif

#include "nameDoc.h"
#include "nameView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CnameView

IMPLEMENT_DYNCREATE(CnameView, CView)

BEGIN_MESSAGE_MAP(CnameView, CView)
	ON_COMMAND(ID_ONSHOWNUMBER, &CnameView::OnOnshownumber)
END_MESSAGE_MAP()

// CnameView 构造/析构

CnameView::CnameView()
{
	// TODO: 在此处添加构造代码

}

CnameView::~CnameView()
{
}

BOOL CnameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CnameView 绘制

void CnameView::OnDraw(CDC* /*pDC*/)
{
	CnameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CnameView 诊断

#ifdef _DEBUG
void CnameView::AssertValid() const
{
	CView::AssertValid();
}

void CnameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CnameDoc* CnameView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CnameDoc)));
	return (CnameDoc*)m_pDocument;
}
#endif //_DEBUG


// CnameView 消息处理程序


void CnameView::OnOnshownumber()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("我的名字是黄嘉怡");
	CClientDC dc(this);
	dc.TextOutW(200, 300,s);

}
