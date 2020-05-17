
// docshow1View.cpp : Cdocshow1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "docshow1.h"
#endif

#include "docshow1Doc.h"
#include "docshow1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdocshow1View

IMPLEMENT_DYNCREATE(Cdocshow1View, CView)

BEGIN_MESSAGE_MAP(Cdocshow1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cdocshow1View ����/����

Cdocshow1View::Cdocshow1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cdocshow1View::~Cdocshow1View()
{
}

BOOL Cdocshow1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cdocshow1View ����

void Cdocshow1View::OnDraw(CDC* /*pDC*/)
{
	Cdocshow1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cdocshow1View ���

#ifdef _DEBUG
void Cdocshow1View::AssertValid() const
{
	CView::AssertValid();
}

void Cdocshow1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdocshow1Doc* Cdocshow1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdocshow1Doc)));
	return (Cdocshow1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdocshow1View ��Ϣ�������


void Cdocshow1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cdocshow1Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cdocshow1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cdocshow1Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	GetDC()->TextOutW(200, 200, s);


	CView::OnRButtonDown(nFlags, point);
}
