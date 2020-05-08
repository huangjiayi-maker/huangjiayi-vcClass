
// photo1View.cpp : Cphoto1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "photo1.h"
#endif

#include "photo1Doc.h"
#include "photo1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cphoto1View

IMPLEMENT_DYNCREATE(Cphoto1View, CView)

BEGIN_MESSAGE_MAP(Cphoto1View, CView)
	ON_COMMAND(ID_getfile, &Cphoto1View::Ongetfile)
END_MESSAGE_MAP()

// Cphoto1View 构造/析构

Cphoto1View::Cphoto1View()
{
	// TODO: 在此处添加构造代码

}

Cphoto1View::~Cphoto1View()
{
}

BOOL Cphoto1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cphoto1View 绘制

void Cphoto1View::OnDraw(CDC* pDC)
{
	Cphoto1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200, pDoc->filename);

	// TODO: 在此处为本机数据添加绘制代码
}


// Cphoto1View 诊断

#ifdef _DEBUG
void Cphoto1View::AssertValid() const
{
	CView::AssertValid();
}

void Cphoto1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cphoto1Doc* Cphoto1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cphoto1Doc)));
	return (Cphoto1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cphoto1View 消息处理程序


void Cphoto1View::Ongetfile()
{
	// TODO: 在此添加命令处理程序代码
	Cphoto1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t = IDOK)
	{
		pDoc->filename = cfd.GetPathName();
		GetDC()->TextOutW(200, 200, pDoc->filename);
		Invalidate();
	}
}
