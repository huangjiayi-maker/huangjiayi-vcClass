
// mousemove1View.cpp : Cmousemove1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mousemove1.h"
#endif

#include "mousemove1Doc.h"
#include "mousemove1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousemove1View

IMPLEMENT_DYNCREATE(Cmousemove1View, CView)

BEGIN_MESSAGE_MAP(Cmousemove1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Cmousemove1View ����/����

Cmousemove1View::Cmousemove1View()
{
	// TODO: �ڴ˴���ӹ������


}

Cmousemove1View::~Cmousemove1View()
{
}

BOOL Cmousemove1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmousemove1View ����

void Cmousemove1View::OnDraw(CDC* pDC)
{
	Cmousemove1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmousemove1View ���

#ifdef _DEBUG
void Cmousemove1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousemove1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousemove1Doc* Cmousemove1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousemove1Doc)));
	return (Cmousemove1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousemove1View ��Ϣ�������


void Cmousemove1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cmousemove1Doc* pDoc = GetDocument();
	pDoc->rect.left = 200;
	pDoc->rect.top = 200;
	pDoc->rect.right = 300;
	pDoc->rect.bottom = 250;
	InvalidateRect(NULL, true);
	CView::OnLButtonDown(nFlags, point);
}


void Cmousemove1View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cmousemove1Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->rect.left > 0)
		{
			pDoc->rect.left -= 5;
			pDoc->rect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->rect.right<=(clientRec.right- clientRec.left))
		{
			pDoc->rect.left += 5;
			pDoc->rect.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->rect.top > 0)
		{
			pDoc->rect.top -= 5;
			pDoc->rect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->rect.right <= (clientRec.bottom - clientRec.top))
		{
			pDoc->rect.top += 5;
			pDoc->rect.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->rect.left > 0 && pDoc->rect.top > 0)
		{
			pDoc->rect.left -= 10;
			pDoc->rect.top -= 10;
		}
		break;
	case VK_END:
		if (pDoc->rect.bottom <= (clientRec.bottom - clientRec.top) &&
			pDoc->rect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->rect.right -= 10;
			pDoc->rect.bottom -= 10;
		}
		break;
	}InvalidateRect(NULL, true);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Cmousemove1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	/*CRect clientRec;
	GetClientRect(&clientRec);
	Cmousemove1Doc* pDoc = GetDocument();
	switch (nChar)
	{
	case 'Home':
		if (pDoc->rect.left > 0 && pDoc->rect.top > 0)
		{
			pDoc->rect.left -= 10;
			pDoc->rect.top -= 10;
		}
		break;
	case 'End':
		if (pDoc->rect.bottom <= (clientRec.bottom - clientRec.top)&&
			pDoc->rect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->rect.right += 10;
			pDoc->rect.bottom += 10;
		}
		break;
	}
	//InvalidateRect(NULL, true);*/
	CView::OnChar(nChar, nRepCnt, nFlags);
}
