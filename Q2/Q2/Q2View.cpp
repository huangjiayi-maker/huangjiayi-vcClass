
// Q2View.cpp : CQ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Q2.h"
#endif

#include "Q2Doc.h"
#include "Q2View.h"
#include "mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ2View

IMPLEMENT_DYNCREATE(CQ2View, CView)

BEGIN_MESSAGE_MAP(CQ2View, CView)
	ON_COMMAND(ID_OPOOUT, &CQ2View::OnOpoout)
END_MESSAGE_MAP()

// CQ2View ����/����

CQ2View::CQ2View()
{
	// TODO: �ڴ˴���ӹ������

}

CQ2View::~CQ2View()
{
}

BOOL CQ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQ2View ����

void CQ2View::OnDraw(CDC* /*pDC*/)
{
	CQ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CQ2View ���

#ifdef _DEBUG
void CQ2View::AssertValid() const
{
	CView::AssertValid();
}

void CQ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ2Doc* CQ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ2Doc)));
	return (CQ2Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ2View ��Ϣ�������


void CQ2View::OnOpoout()
{
	// TODO: �ڴ���������������
	mydlg0 dlg;
	int t = dlg.DoModal();
	if (t = IDOK)
	{
		int SUM, X, Y;
		SUM = dlg.sum;
		X = dlg.x;
		Y = dlg.y;//ȡ�ôӶԻ�����ͷȡ��������ֵ
	}

}
