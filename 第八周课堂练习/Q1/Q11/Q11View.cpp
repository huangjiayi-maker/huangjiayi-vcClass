
// Q11View.cpp : CQ11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Q11.h"
#endif

#include "Q11Doc.h"
#include "Q11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ11View

IMPLEMENT_DYNCREATE(CQ11View, CView)

BEGIN_MESSAGE_MAP(CQ11View, CView)
END_MESSAGE_MAP()

// CQ11View ����/����

CQ11View::CQ11View()
{
	// TODO: �ڴ˴���ӹ������

}

CQ11View::~CQ11View()
{
}

BOOL CQ11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQ11View ����

void CQ11View::OnDraw(CDC* /*pDC*/)
{
	CQ11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CQ11View ���

#ifdef _DEBUG
void CQ11View::AssertValid() const
{
	CView::AssertValid();
}

void CQ11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ11Doc* CQ11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ11Doc)));
	return (CQ11Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ11View ��Ϣ�������
