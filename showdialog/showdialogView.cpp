
// showdialogView.cpp : CshowdialogView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "showdialog.h"
#endif

#include "showdialogDoc.h"
#include "showdialogView.h"
#include"mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CshowdialogView

IMPLEMENT_DYNCREATE(CshowdialogView, CView)

BEGIN_MESSAGE_MAP(CshowdialogView, CView)
	ON_COMMAND(ID_output, &CshowdialogView::Onoutput)
END_MESSAGE_MAP()

// CshowdialogView 构造/析构

CshowdialogView::CshowdialogView()
{
	// TODO: 在此处添加构造代码

}

CshowdialogView::~CshowdialogView()
{
}

BOOL CshowdialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CshowdialogView 绘制

void CshowdialogView::OnDraw(CDC* /*pDC*/)
{
	CshowdialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CshowdialogView 诊断

#ifdef _DEBUG
void CshowdialogView::AssertValid() const
{
	CView::AssertValid();
}

void CshowdialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CshowdialogDoc* CshowdialogView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CshowdialogDoc)));
	return (CshowdialogDoc*)m_pDocument;
}
#endif //_DEBUG


// CshowdialogView 消息处理程序


void CshowdialogView::Onoutput()
{
	// TODO: 在此添加命令处理程序代码
	mydlg0 dlg0;
	//CFileDialog cfd(true);
	int  t = dlg0.DoModal();
	if (t != IDOK)
	{
		CClientDC dc(this);
		CString s = _T("你已退出对话框");
		dc.TextOutW(200, 200, s);
	}
}
