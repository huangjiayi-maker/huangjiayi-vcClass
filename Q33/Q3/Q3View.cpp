
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
END_MESSAGE_MAP()

// CQ3View ����/����

CQ3View::CQ3View()
{
	// TODO: �ڴ˴���ӹ������

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

void CQ3View::OnDraw(CDC* /*pDC*/)
{
	CQ3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

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
