
// ontimer2View.cpp : Contimer2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ontimer2.h"
#endif

#include "ontimer2Doc.h"
#include "ontimer2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Contimer2View

IMPLEMENT_DYNCREATE(Contimer2View, CView)

BEGIN_MESSAGE_MAP(Contimer2View, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_bigellipse, &Contimer2View::Onbigellipse)
END_MESSAGE_MAP()

// Contimer2View 构造/析构

Contimer2View::Contimer2View()
{
	// TODO: 在此处添加构造代码
	set = true;
	b = false;
	//oldbrush = NULL;
	for (int i = 0; i < 1; i++)
	{
		int t = (i + 1) * 100;
	}
	red = 255;
	green = 0;
	blue=0;
	//color = RGB(red, green, blue);
}

Contimer2View::~Contimer2View()
{
}

BOOL Contimer2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Contimer2View 绘制

void Contimer2View::OnDraw(CDC* pDC)
{
	Contimer2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect re;
	this->GetClientRect(&re);
	int m = re.right / 2;
	int n = re.bottom / 2;
	CRect rect(m, n, m, n);//左上角坐标，右下角坐标
		cr.Add(rect);
		//if (b == true) {
			if (set)
			{
				for (int i = 0; i < 1; i++)
					SetTimer(i, rand() % 500 + 100, NULL);
				set = false;
			}
			int color = RGB(red, green, blue);
			CBrush newBrush;
			newBrush.CreateSolidBrush(color);
			pDC->SelectObject(&newBrush);
			// TODO: 在此处为本机数据添加绘制代码
			for (int i = 0; i < 1; i++)
			{
				pDC->Ellipse(cr[i]);
				DeleteObject(newBrush);
			}
			
}
// Contimer2View 诊断

#ifdef _DEBUG
void Contimer2View::AssertValid() const
{
	CView::AssertValid();
}

void Contimer2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Contimer2Doc* Contimer2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Contimer2Doc)));
	return (Contimer2Doc*)m_pDocument;
}
#endif //_DEBUG


// Contimer2View 消息处理程序


void Contimer2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	if (b) 
	{			
		
		cr[i].top -= 10;
		cr[i].left -= 10;
		cr[i].right += 10;
		cr[i].bottom += 10;
		red += 10;
		green += 20;
		blue += 10;
	
	}InvalidateRect(NULL, true);
	CView::OnTimer(nIDEvent);
}


void Contimer2View::Onbigellipse()
{
	// TODO: 在此添加命令处理程序代码
	b = true;
}
