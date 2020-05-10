
// W32DView.cpp : CW32DView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "W32D.h"
#endif

#include "W32DDoc.h"
#include "W32DView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32A.h"

// CW32DView

IMPLEMENT_DYNCREATE(CW32DView, CView)

BEGIN_MESSAGE_MAP(CW32DView, CView)
END_MESSAGE_MAP()

// CW32DView ����/����

CW32DView::CW32DView()
{
	// TODO: �ڴ˴���ӹ������

}

CW32DView::~CW32DView()
{
}

BOOL CW32DView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CW32DView ����

void CW32DView::OnDraw(CDC* pDC)
{
	CW32DDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int sum = factorial(5);
	CString s;
	s.Format(_T("%d"), sum);
	pDC->TextOutW(200, 200, s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CW32DView ���

#ifdef _DEBUG
void CW32DView::AssertValid() const
{
	CView::AssertValid();
}

void CW32DView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CW32DDoc* CW32DView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CW32DDoc)));
	return (CW32DDoc*)m_pDocument;
}
#endif //_DEBUG


// CW32DView ��Ϣ�������
