
// dlg2View.cpp : Cdlg2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "dlg2.h"
#endif

#include "dlg2Doc.h"
#include "dlg2View.h"
#include"myD2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdlg2View

IMPLEMENT_DYNCREATE(Cdlg2View, CView)

BEGIN_MESSAGE_MAP(Cdlg2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cdlg2View ����/����

Cdlg2View::Cdlg2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cdlg2View::~Cdlg2View()
{
}

BOOL Cdlg2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cdlg2View ����

void Cdlg2View::OnDraw(CDC* /*pDC*/)
{
	Cdlg2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cdlg2View ���

#ifdef _DEBUG
void Cdlg2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdlg2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdlg2Doc* Cdlg2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdlg2Doc)));
	return (Cdlg2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdlg2View ��Ϣ�������


void Cdlg2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	myD2 md2;
	int r = md2.DoModal();
	if (r == IDOK)
	{

	}
	CView::OnRButtonDblClk(nFlags, point);
}
