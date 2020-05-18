
// mousepoint2View.cpp : Cmousepoint2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mousepoint2.h"
#endif

#include "mousepoint2Doc.h"
#include "mousepoint2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousepoint2View

IMPLEMENT_DYNCREATE(Cmousepoint2View, CView)

BEGIN_MESSAGE_MAP(Cmousepoint2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmousepoint2View ����/����

Cmousepoint2View::Cmousepoint2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmousepoint2View::~Cmousepoint2View()
{
}

BOOL Cmousepoint2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmousepoint2View ����

void Cmousepoint2View::OnDraw(CDC* pDC)
{
	Cmousepoint2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Ellipse(ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmousepoint2View ���

#ifdef _DEBUG
void Cmousepoint2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousepoint2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousepoint2Doc* Cmousepoint2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousepoint2Doc)));
	return (Cmousepoint2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousepoint2View ��Ϣ�������


void Cmousepoint2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	int x = point.x;
	int y = point.y;
	CView::OnLButtonDown(nFlags, point);
	int r1 = rand() % 100 + 20;
	int r2= rand() % 100 + 30;
	rect.left = point.x - r1;
	rect.top = point.y - r2;
	rect.right= point.x + r1;
	rect.bottom = point.y + r2;
	ca.Add(rect);
	//GetDC()->Ellipse(rect);
	this->Invalidate();
		

}
