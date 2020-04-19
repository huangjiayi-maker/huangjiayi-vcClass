
// Q3View.cpp : CQ3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Q3.h"
#endif

#include "Q3Doc.h"
#include "Q3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ3View

IMPLEMENT_DYNCREATE(CQ3View, CView)

BEGIN_MESSAGE_MAP(CQ3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CQ3View ����/����

CQ3View::CQ3View()
{
	// TODO: �ڴ˴���ӹ������
	set =true;
	rect.bottom = 250;
	rect.top = 200;
	rect.left = 0;
	rect.right = 50;

}

CQ3View::~CQ3View()
{
}

BOOL CQ3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQ3View ����

void CQ3View::OnDraw(CDC* pDC)
{
	CQ3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	if (set)
	{
		for (int i = 0; i < 1; i++)
			SetTimer(i, 1000, NULL);
		
	}
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CQ3View ���

#ifdef _DEBUG
void CQ3View::AssertValid() const
{
	CView::AssertValid();
}

void CQ3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ3Doc* CQ3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ3Doc)));
	return (CQ3Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ3View ��Ϣ�������


void CQ3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	//int flag = 0;
	GetClientRect(&cr);
	int i = nIDEvent;
	int t = rect.right;
	if (rect.right<cr.right&&set==true)
	{
		rect.right += 100;
		rect.left += 100;
	} 
	else if (rect.right == cr.right&&set == true)
	
		cr.right = 0;
	else	if (rect.left > 0 && set == true)
		{
			rect.left -= 100;
			rect.right -= 100;
		}
	else if (rect.left == 0 && set == true)
		cr.right = t;
	InvalidateRect(NULL, true);
	CView::OnTimer(nIDEvent);
}


void CQ3View::OnLButtonDown(UINT nFlags, CPoint point)//����������
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = true;
	CView::OnLButtonDown(nFlags, point);
}


void CQ3View::OnLButtonDblClk(UINT nFlags, CPoint point)//˫��������
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = false;
	CView::OnLButtonDblClk(nFlags, point);
}
