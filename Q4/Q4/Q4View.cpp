
// Q4View.cpp : CQ4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Q4.h"
#endif

#include "Q4Doc.h"
#include "Q4View.h"
#include "myDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ4View

IMPLEMENT_DYNCREATE(CQ4View, CView)

BEGIN_MESSAGE_MAP(CQ4View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CQ4View ����/����

CQ4View::CQ4View()
{
	// TODO: �ڴ˴���ӹ������

}

CQ4View::~CQ4View()
{
}

BOOL CQ4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQ4View ����

void CQ4View::OnDraw(CDC* /*pDC*/)
{
	CQ4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CQ4View ���

#ifdef _DEBUG
void CQ4View::AssertValid() const
{
	CView::AssertValid();
}

void CQ4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ4Doc* CQ4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ4Doc)));
	return (CQ4Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ4View ��Ϣ�������


void CQ4View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	myDlg0 *pD = new myDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
