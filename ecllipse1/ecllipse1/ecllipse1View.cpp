
// ecllipse1View.cpp : Cecllipse1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ecllipse1.h"
#endif

#include "ecllipse1Doc.h"
#include "ecllipse1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cecllipse1View

IMPLEMENT_DYNCREATE(Cecllipse1View, CView)

BEGIN_MESSAGE_MAP(Cecllipse1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_NCMOUSEMOVE()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cecllipse1View ����/����

Cecllipse1View::Cecllipse1View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 1;
}

Cecllipse1View::~Cecllipse1View()
{
}

BOOL Cecllipse1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cecllipse1View ����

void Cecllipse1View::OnDraw(CDC* pDC)
{
	Cecllipse1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if(flag==1)
	pDC->Ellipse(pDoc->m_tagrec);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cecllipse1View ���

#ifdef _DEBUG
void Cecllipse1View::AssertValid() const
{
	CView::AssertValid();
}

void Cecllipse1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cecllipse1Doc* Cecllipse1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cecllipse1Doc)));
	return (Cecllipse1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cecllipse1View ��Ϣ�������


void Cecllipse1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cecllipse1Doc* pDoc = GetDocument();
	 
	 
	 pDoc->m_tagrec.left=point.x;
	 pDoc->m_tagrec.top=point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cecllipse1View::OnNcMouseMove(UINT nHitTest, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//Cecllipse1Doc* pDoc = GetDocument();
	CView::OnNcMouseMove(nHitTest, point);
//	pDoc->m_tagrec.right = point.x;
	//pDoc->m_tagrec.bottom = point.y;
	//InvalidateRect(NULL, true);
}


void Cecllipse1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cecllipse1Doc* pDoc = GetDocument();
    flag = 1;
    pDoc->m_tagrec.right = point.x;
	pDoc->m_tagrec.bottom = point.y;
	InvalidateRect(NULL, true);
	
	
	CView::OnMouseMove(nFlags, point);
}


void Cecllipse1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	Cecllipse1Doc* pDoc = GetDocument();
	pDoc->m_tagrec.right = point.x;
	pDoc->m_tagrec.bottom = point.y;
	InvalidateRect(NULL, true);flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
