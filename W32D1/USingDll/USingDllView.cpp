
// USingDllView.cpp : CUSingDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "USingDll.h"
#endif

#include "USingDllDoc.h"
#include "USingDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32D1.h";

// CUSingDllView

IMPLEMENT_DYNCREATE(CUSingDllView, CView)

BEGIN_MESSAGE_MAP(CUSingDllView, CView)
END_MESSAGE_MAP()

// CUSingDllView ����/����

CUSingDllView::CUSingDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUSingDllView::~CUSingDllView()
{
}

BOOL CUSingDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUSingDllView ����

void CUSingDllView::OnDraw(CDC* pDC)
{
	CUSingDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int sum = factorial(5);
	CString s;
	s.Format(_T("%d"), sum);
	pDC->TextOutW(200, 150, s);
	float f;
	FAC fac;
	f = fac.convert(30.0);
	CString ss;
	ss.Format(_T("%f"), f);
	pDC->TextOutW(200, 200, ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUSingDllView ���

#ifdef _DEBUG
void CUSingDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUSingDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUSingDllDoc* CUSingDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUSingDllDoc)));
	return (CUSingDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUSingDllView ��Ϣ�������
