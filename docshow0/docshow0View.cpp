
// docshow0View.cpp : Cdocshow0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "docshow0.h"
#endif

#include "docshow0Doc.h"
#include "docshow0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdocshow0View

IMPLEMENT_DYNCREATE(Cdocshow0View, CView)

BEGIN_MESSAGE_MAP(Cdocshow0View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdocshow0View ����/����

Cdocshow0View::Cdocshow0View()
{
	// TODO: �ڴ˴���ӹ������

}

Cdocshow0View::~Cdocshow0View()
{
}

BOOL Cdocshow0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cdocshow0View ����

void Cdocshow0View::OnDraw(CDC* /*pDC*/)
{
	Cdocshow0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cdocshow0View ���

#ifdef _DEBUG
void Cdocshow0View::AssertValid() const
{
	CView::AssertValid();
}

void Cdocshow0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdocshow0Doc* Cdocshow0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdocshow0Doc)));
	return (Cdocshow0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdocshow0View ��Ϣ�������


void Cdocshow0View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cdocshow0Doc* pDoc = GetDocument();
	GetDC()->TextOutW(200, 200, pDoc->s);
	CView::OnLButtonDown(nFlags, point);
}
