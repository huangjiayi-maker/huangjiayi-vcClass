
// mynameView.cpp : CmynameView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "myname.h"
#endif

#include "mynameDoc.h"
#include "mynameView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmynameView

IMPLEMENT_DYNCREATE(CmynameView, CView)

BEGIN_MESSAGE_MAP(CmynameView, CView)
END_MESSAGE_MAP()

// CmynameView ����/����

CmynameView::CmynameView()
{
	// TODO: �ڴ˴���ӹ������

}

CmynameView::~CmynameView()
{
}

BOOL CmynameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CmynameView ����

void CmynameView::OnDraw(CDC* pDC)
{
	CmynameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString ss;
	int a;
	a = 20;
	CString s=_T("����XXX");
	pDC->TextOutW(200, 150, s);
	ss.Format(_T("%d"), a);
	pDC->TextOutW(200, 200, ss);

	//Invalidate();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CmynameView ���

#ifdef _DEBUG
void CmynameView::AssertValid() const
{
	CView::AssertValid();
}

void CmynameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmynameDoc* CmynameView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmynameDoc)));
	return (CmynameDoc*)m_pDocument;
}
#endif //_DEBUG


// CmynameView ��Ϣ�������
