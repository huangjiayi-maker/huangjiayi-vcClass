
// threecaidanView.cpp : CthreecaidanView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "threecaidan.h"
#endif

#include "threecaidanDoc.h"
#include "threecaidanView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CthreecaidanView

IMPLEMENT_DYNCREATE(CthreecaidanView, CView)

BEGIN_MESSAGE_MAP(CthreecaidanView, CView)
	ON_COMMAND(ID_LINE, &CthreecaidanView::OnLine)
	ON_COMMAND(ID_RATANGLE, &CthreecaidanView::OnRatangle)
	ON_COMMAND(ID_ECLLIPSE, &CthreecaidanView::OnEcllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CthreecaidanView ����/����

CthreecaidanView::CthreecaidanView()
{
	// TODO: �ڴ˴���ӹ������
	flag1 = 1;		flag0 = 1;
}

CthreecaidanView::~CthreecaidanView()
{
}

BOOL CthreecaidanView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CthreecaidanView ����

void CthreecaidanView::OnDraw(CDC* /*pDC*/)
{
	CthreecaidanDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CthreecaidanView ���

#ifdef _DEBUG
void CthreecaidanView::AssertValid() const
{
	CView::AssertValid();
}

void CthreecaidanView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CthreecaidanDoc* CthreecaidanView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CthreecaidanDoc)));
	return (CthreecaidanDoc*)m_pDocument;
}
#endif //_DEBUG


// CthreecaidanView ��Ϣ�������


void CthreecaidanView::OnLine()
{
	CClientDC dc(this);
	// TODO: �ڴ���������������
	//dc.TextOutW(m_ratangle.left, m_ratangle.bottom, m_ratangle.right,m_ratangle.bottom);
}


void CthreecaidanView::OnRatangle()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	//pDC->Rectangle(m_ratangle);

}


void CthreecaidanView::OnEcllipse()
{
	CClientDC dc(this);
	// TODO: �ڴ���������������
}


void CthreecaidanView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	flag0 = 1;
	m_ratangle.left  = point.x;
	m_ratangle.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void CthreecaidanView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	flag1 = 0;
	m_ratangle.right = point.x;
	m_ratangle.bottom = point.y;
	CView::OnLButtonUp(nFlags, point);
}


void CthreecaidanView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CClientDC dc(this);
	pointt = point;
	if (flag0 = 1 && flag1 != 0)
		InvalidateRect(NULL, false);
	CView::OnMouseMove(nFlags, point);
}
