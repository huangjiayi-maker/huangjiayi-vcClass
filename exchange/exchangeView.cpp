
// exchangeView.cpp : CexchangeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exchange.h"
#endif

#include "exchangeDoc.h"
#include "exchangeView.h"
#include"mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CexchangeView

IMPLEMENT_DYNCREATE(CexchangeView, CView)

BEGIN_MESSAGE_MAP(CexchangeView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CexchangeView ����/����

CexchangeView::CexchangeView()
{
	// TODO: �ڴ˴���ӹ������

}

CexchangeView::~CexchangeView()
{
}

BOOL CexchangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CexchangeView ����

void CexchangeView::OnDraw(CDC* /*pDC*/)
{
	CexchangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CexchangeView ���

#ifdef _DEBUG
void CexchangeView::AssertValid() const
{
	CView::AssertValid();
}

void CexchangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CexchangeDoc* CexchangeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CexchangeDoc)));
	return (CexchangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CexchangeView ��Ϣ�������


void CexchangeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	mydlg *pD = new mydlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDown(nFlags, point);
}
