
// mouseleft0View.cpp : Cmouseleft0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mouseleft0.h"
#endif

#include "mouseleft0Doc.h"
#include "mouseleft0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmouseleft0View

IMPLEMENT_DYNCREATE(Cmouseleft0View, CView)

BEGIN_MESSAGE_MAP(Cmouseleft0View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cmouseleft0View ����/����

Cmouseleft0View::Cmouseleft0View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmouseleft0View::~Cmouseleft0View()
{
}

BOOL Cmouseleft0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmouseleft0View ����

void Cmouseleft0View::OnDraw(CDC* /*pDC*/)
{
	Cmouseleft0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmouseleft0View ���

#ifdef _DEBUG
void Cmouseleft0View::AssertValid() const
{
	CView::AssertValid();
}

void Cmouseleft0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmouseleft0Doc* Cmouseleft0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmouseleft0Doc)));
	return (Cmouseleft0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmouseleft0View ��Ϣ�������


void Cmouseleft0View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�����������");
	GetDC()->TextOutW(200, 150, s);
	CView::OnLButtonDown(nFlags, point);
}


void Cmouseleft0View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�������̧��");
	GetDC()->TextOutW(200, 150, s);
	CView::OnLButtonUp(nFlags, point);
}
