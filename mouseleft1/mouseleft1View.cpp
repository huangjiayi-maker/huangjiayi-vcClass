
// mouseleft1View.cpp : Cmouseleft1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mouseleft1.h"
#endif

#include "mouseleft1Doc.h"
#include "mouseleft1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmouseleft1View

IMPLEMENT_DYNCREATE(Cmouseleft1View, CView)

BEGIN_MESSAGE_MAP(Cmouseleft1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmouseleft1View ����/����

Cmouseleft1View::Cmouseleft1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmouseleft1View::~Cmouseleft1View()
{
}

BOOL Cmouseleft1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmouseleft1View ����

void Cmouseleft1View::OnDraw(CDC* pDC)
{
	Cmouseleft1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmouseleft1View ���

#ifdef _DEBUG
void Cmouseleft1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmouseleft1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmouseleft1Doc* Cmouseleft1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmouseleft1Doc)));
	return (Cmouseleft1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmouseleft1View ��Ϣ�������


void Cmouseleft1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cmouseleft1Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;
	int sum = a + b;
	CString s;
	s.Format(_T("A+B=%d"), sum);
	GetDC()->TextOutW(200, 150, s);
	CView::OnLButtonDown(nFlags, point);
}
