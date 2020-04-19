
// JPG11View.cpp : CJPG11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "JPG11.h"
#endif

#include "JPG11Doc.h"
#include "JPG11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJPG11View

IMPLEMENT_DYNCREATE(CJPG11View, CView)

BEGIN_MESSAGE_MAP(CJPG11View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CJPG11View::OnFileOpen)
END_MESSAGE_MAP()

// CJPG11View 构造/析构

CJPG11View::CJPG11View()
{
	// TODO: 在此处添加构造代码

}

CJPG11View::~CJPG11View()
{
}

BOOL CJPG11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CJPG11View 绘制

void CJPG11View::OnDraw(CDC* pDC)
{
	CJPG11Doc* pDoc = GetDocument();
	//m_hDC
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CJPG11View 诊断

#ifdef _DEBUG
void CJPG11View::AssertValid() const
{
	CView::AssertValid();
}

void CJPG11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJPG11Doc* CJPG11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJPG11Doc)));
	return (CJPG11Doc*)m_pDocument;
}
#endif //_DEBUG


// CJPG11View 消息处理程序


void CJPG11View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CDC*pDC = GetDC();
	CFileDialog cfd(true);  //建立对象
	int r = cfd.DoModal();  //弹出对话框//如果退出对话框时选项为OK的话
	CClientDC dc(this);
	if (r == IDOK)

	{
		CString filename = cfd.GetPathName();
		CImage img;
	img.Load(filename);

	img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	//dc.TextOutW(300, 200, filename);
	}

}
