
// JPG00View.cpp : CJPG00View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "JPG00.h"
#endif

#include "JPG00Doc.h"
#include "JPG00View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJPG00View

IMPLEMENT_DYNCREATE(CJPG00View, CView)

BEGIN_MESSAGE_MAP(CJPG00View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CJPG00View::OnFileOpen)
END_MESSAGE_MAP()

// CJPG00View 构造/析构

CJPG00View::CJPG00View()
{
	// TODO: 在此处添加构造代码

}

CJPG00View::~CJPG00View()
{
}

BOOL CJPG00View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CJPG00View 绘制

void CJPG00View::OnDraw(CDC* /*pDC*/)
{
	CJPG00Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CJPG00View 诊断

#ifdef _DEBUG
void CJPG00View::AssertValid() const
{
	CView::AssertValid();
}

void CJPG00View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJPG00Doc* CJPG00View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJPG00Doc)));
	return (CJPG00Doc*)m_pDocument;
}
#endif //_DEBUG


// CJPG00View 消息处理程序


void CJPG00View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);  //建立对象
	int r = cfd.DoModal();  //弹出对话框//如果退出对话框时选项为OK的话
		CClientDC dc(this);
	if (r == IDOK)

	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(300, 200, filename);
	}

}
