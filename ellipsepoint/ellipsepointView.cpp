
// ellipsepointView.cpp : CellipsepointView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ellipsepoint.h"
#endif

#include "ellipsepointDoc.h"
#include "ellipsepointView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CellipsepointView

IMPLEMENT_DYNCREATE(CellipsepointView, CView)

BEGIN_MESSAGE_MAP(CellipsepointView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CellipsepointView ����/����

CellipsepointView::CellipsepointView()
{
	// TODO: �ڴ˴���ӹ������
	t = false;
}

CellipsepointView::~CellipsepointView()
{
}

BOOL CellipsepointView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CellipsepointView ����

void CellipsepointView::OnDraw(CDC* /*pDC*/)
{
	CellipsepointDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CellipsepointView ���

#ifdef _DEBUG
void CellipsepointView::AssertValid() const
{
	CView::AssertValid();
}

void CellipsepointView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CellipsepointDoc* CellipsepointView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CellipsepointDoc)));
	return (CellipsepointDoc*)m_pDocument;
}
#endif //_DEBUG


// CellipsepointView ��Ϣ�������


void CellipsepointView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	t = true;
	point1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CellipsepointView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	t = false;
	point2 = point;
	CView::OnLButtonUp(nFlags, point);
	CRect cr(point1.x, point1.y, point2.x, point2.y);
	GetDC()->Rectangle(cr);
}


void CellipsepointView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CClientDC clientDC(this);
	s.Format(_T("x=%d  Y=%d"), point.x, point.y);
	if(t==true)
	clientDC.TextOut(20, 20, s);
	CView::OnMouseMove(nFlags, point);
	
}
