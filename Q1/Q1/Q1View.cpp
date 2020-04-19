
// Q1View.cpp : CQ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Q1.h"
#endif

#include "Q1Doc.h"
#include "Q1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ1View

IMPLEMENT_DYNCREATE(CQ1View, CView)

BEGIN_MESSAGE_MAP(CQ1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CQ1View ����/����

CQ1View::CQ1View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 200; cr.top = 200;
	cr.right = 300; cr.bottom = 300;
	flag = 0;
}

CQ1View::~CQ1View()
{
}

BOOL CQ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQ1View ����

void CQ1View::OnDraw(CDC* pDC)
{
	CQ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//CRect cr(200, 200, 300, 300);
	pDC->Rectangle(cr);
	//Invalidate();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CQ1View ���

#ifdef _DEBUG
void CQ1View::AssertValid() const
{
	CView::AssertValid();
}

void CQ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ1Doc* CQ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ1Doc)));
	return (CQ1Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ1View ��Ϣ�������


void CQ1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if(nFlags)
	cr.left = point.x - 50;
	cr.top = point.y - 50;
	cr.right = point.x + 50;
	0; cr.bottom = point.y + 50;
	InvalidateRect(NULL, true);

	CView::OnLButtonDown(nFlags, point);
}


void CQ1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if(nFlags)
	cr.left = point.x - 50;
	cr.top = point.y - 50;
	cr.right = point.x + 50;
	0; cr.bottom = point.y + 50;
	InvalidateRect(NULL, true);
	CView::OnMouseMove(nFlags, point);

}


void CQ1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nFlags) {
	cr.left = point.x - 50;
	cr.top = point.y - 50;
	cr.right = point.x + 50;
	0; cr.bottom = point.y + 50;
	InvalidateRect(NULL, true);
	}

	CView::OnLButtonUp(nFlags, point);
}
