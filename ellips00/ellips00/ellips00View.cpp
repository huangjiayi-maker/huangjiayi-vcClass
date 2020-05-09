
// ellips00View.cpp : Cellips00View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ellips00.h"
#endif

#include "ellips00Doc.h"
#include "ellips00View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellips00View

IMPLEMENT_DYNCREATE(Cellips00View, CView)

BEGIN_MESSAGE_MAP(Cellips00View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cellips00View ����/����

Cellips00View::Cellips00View()
{
	// TODO: �ڴ˴���ӹ������

}

Cellips00View::~Cellips00View()
{
}

BOOL Cellips00View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cellips00View ����

void Cellips00View::OnDraw(CDC* pDC)
{
	Cellips00Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->m_crlrect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cellips00View ���

#ifdef _DEBUG
void Cellips00View::AssertValid() const
{
	CView::AssertValid();
}

void Cellips00View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellips00Doc* Cellips00View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellips00Doc)));
	return (Cellips00Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellips00View ��Ϣ�������


void Cellips00View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cellips00Doc* pDoc = GetDocument();
	pDoc->m_crlrect.left -= 10;
	pDoc->m_crlrect.top -= 10;
	pDoc->m_crlrect.right += 10;
	pDoc->m_crlrect.bottom += 10;
	//GetDC()->Ellipse(pDoc->m_crlrect);
	InvalidateRect(NULL, true);

	CView::OnLButtonDown(nFlags, point);
}
