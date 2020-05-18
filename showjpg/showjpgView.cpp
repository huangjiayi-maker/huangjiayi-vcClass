
// showjpgView.cpp : CshowjpgView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "showjpg.h"
#endif

#include "showjpgDoc.h"
#include "showjpgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CshowjpgView

IMPLEMENT_DYNCREATE(CshowjpgView, CView)

BEGIN_MESSAGE_MAP(CshowjpgView, CView)
	ON_COMMAND(ID_JPGOPEN, &CshowjpgView::OnJpgopen)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CshowjpgView 构造/析构

CshowjpgView::CshowjpgView()
{
	// TODO: 在此处添加构造代码

}

CshowjpgView::~CshowjpgView()
{
}

BOOL CshowjpgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CshowjpgView 绘制

void CshowjpgView::OnDraw(CDC* pDC)
{
	CshowjpgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
      // Invalidate();
		
	//InvalidateRect(NULL, false);
	// TODO: 在此处为本机数据添加绘制代码
}


// CshowjpgView 诊断

#ifdef _DEBUG
void CshowjpgView::AssertValid() const
{
	CView::AssertValid();
}

void CshowjpgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CshowjpgDoc* CshowjpgView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CshowjpgDoc)));
	return (CshowjpgDoc*)m_pDocument;
}
#endif //_DEBUG


// CshowjpgView 消息处理程序


void CshowjpgView::OnJpgopen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	CImage img;
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		img.Load(filename);
		img.Draw(GetDC()->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		//InvalidateRect(NULL, true);
		//Invalidate();
	}
	;
}


void CshowjpgView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CView::OnPaint()
}
