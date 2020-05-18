
// mousemove2View.cpp : Cmousemove2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mousemove2.h"
#endif

#include "mousemove2Doc.h"
#include "mousemove2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousemove2View

IMPLEMENT_DYNCREATE(Cmousemove2View, CView)

BEGIN_MESSAGE_MAP(Cmousemove2View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cmousemove2View ����/����

Cmousemove2View::Cmousemove2View()
{
	// TODO: �ڴ˴���ӹ������
	rect.left = 150;
	rect.top = 0;
	rect.right = 250;
	rect.bottom = 50;
		//(150, 0, 250, 50);
}

Cmousemove2View::~Cmousemove2View()
{
}

BOOL Cmousemove2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmousemove2View ����

void Cmousemove2View::OnDraw(CDC* pDC)
{
	Cmousemove2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	SetTimer(1, rand() % 500 + 100, NULL);
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmousemove2View ���

#ifdef _DEBUG
void Cmousemove2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousemove2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousemove2Doc* Cmousemove2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousemove2Doc)));
	return (Cmousemove2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousemove2View ��Ϣ�������


void Cmousemove2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	GetClientRect(&cr);
	rect.top += 10;
	rect.bottom += 10;
	
	if (rect.bottom>= cr.bottom - cr.top)
	{
		rect.left = 150;
		rect.top = 0;
		rect.right = 250;
		rect.bottom = 50;	
	}InvalidateRect(NULL, true);

	CView::OnTimer(nIDEvent);
}
