
// mouseleft2View.cpp : Cmouseleft2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mouseleft2.h"
#endif

#include "mouseleft2Doc.h"
#include "mouseleft2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmouseleft2View

IMPLEMENT_DYNCREATE(Cmouseleft2View, CView)

BEGIN_MESSAGE_MAP(Cmouseleft2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmouseleft2View ����/����

Cmouseleft2View::Cmouseleft2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmouseleft2View::~Cmouseleft2View()
{
}

BOOL Cmouseleft2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmouseleft2View ����

void Cmouseleft2View::OnDraw(CDC* pDC)
{
	Cmouseleft2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr1(200, 200, 300, 250);
	pDC->Rectangle(cr1);
	CRect cr2(400, 200, 500, 250);
	pDC->Rectangle(cr2);
	CRect cr3(600, 200, 700, 250);
	pDC->Rectangle(cr3);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmouseleft2View ���

#ifdef _DEBUG
void Cmouseleft2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmouseleft2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmouseleft2Doc* Cmouseleft2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmouseleft2Doc)));
	return (Cmouseleft2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmouseleft2View ��Ϣ�������


void Cmouseleft2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a, b, sum;
	a = rand();
	b= rand();
	sum = a + b;
	CString s,ss, sss;
	CString cs = _T("�����Ч");
	s.Format(_T("%d"), a);
	ss.Format(_T("%d"), b);
	sss.Format(_T("%d"), sum);
	if (point.x > 200 && point.x < 300 && point.y>200 && point.y < 250)
	{
		GetDC()->TextOutW(240, 220, s);
	}
	else if (point.x > 400 && point.x < 500 && point.y>200 && point.y < 250)
	{
		GetDC()->TextOutW(440, 220, ss);
	}
	else if (point.x > 600 && point.x < 700 && point.y>200 && point.y < 250)
	{
		GetDC()->TextOutW(640, 220, sss);
	}
	else GetDC()->TextOutW(450, 300, cs);

	CView::OnLButtonDown(nFlags, point);
}
