
// UsingDllView.cpp : CUsingDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingDll.h"
#endif

#include "UsingDllDoc.h"
#include "UsingDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32A.h"

// CUsingDllView

IMPLEMENT_DYNCREATE(CUsingDllView, CView)

BEGIN_MESSAGE_MAP(CUsingDllView, CView)
END_MESSAGE_MAP()

// CUsingDllView ����/����

CUsingDllView::CUsingDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingDllView::~CUsingDllView()
{
}

BOOL CUsingDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingDllView ����

void CUsingDllView::OnDraw(CDC* pDC)
{
	CUsingDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
    float f;
	FAC fac;
	f= fac.convert(30.0);
	CString s;
	s.Format(_T("%f"), f);
	pDC->TextOutW(200, 200, s);
}


// CUsingDllView ���

#ifdef _DEBUG
void CUsingDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingDllDoc* CUsingDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingDllDoc)));
	return (CUsingDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingDllView ��Ϣ�������
