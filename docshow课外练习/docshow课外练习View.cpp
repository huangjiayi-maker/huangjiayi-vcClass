
// docshow������ϰView.cpp : Cdocshow������ϰView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "docshow������ϰ.h"
#endif

#include "docshow������ϰDoc.h"
#include "docshow������ϰView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdocshow������ϰView

IMPLEMENT_DYNCREATE(Cdocshow������ϰView, CView)

BEGIN_MESSAGE_MAP(Cdocshow������ϰView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cdocshow������ϰView ����/����

Cdocshow������ϰView::Cdocshow������ϰView()
{
	// TODO: �ڴ˴���ӹ������
	s = _T("ehwvonxj");

}

Cdocshow������ϰView::~Cdocshow������ϰView()
{
}

BOOL Cdocshow������ϰView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cdocshow������ϰView ����

void Cdocshow������ϰView::OnDraw(CDC* /*pDC*/)
{
	Cdocshow������ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cdocshow������ϰView ���

#ifdef _DEBUG
void Cdocshow������ϰView::AssertValid() const
{
	CView::AssertValid();
}

void Cdocshow������ϰView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdocshow������ϰDoc* Cdocshow������ϰView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdocshow������ϰDoc)));
	return (Cdocshow������ϰDoc*)m_pDocument;
}
#endif //_DEBUG


// Cdocshow������ϰView ��Ϣ�������


void Cdocshow������ϰView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cdocshow������ϰDoc* pDoc = GetDocument();
	GetDC()->TextOutW(200, 150, s );
	GetDC()->TextOutW(200, 200, s + pDoc->ss);
	CView::OnLButtonDown(nFlags, point);
}
