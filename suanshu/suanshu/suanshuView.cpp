
// suanshuView.cpp : CsuanshuView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "suanshu.h"
#endif

#include "suanshuDoc.h"
#include "suanshuView.h"
#include "dlg0.h"
#include "dlg1.h"
#include "dlg2.h"
#include "dlg3.h"
#include "dlg.h"
#include "dlg5.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CsuanshuView

IMPLEMENT_DYNCREATE(CsuanshuView, CView)

BEGIN_MESSAGE_MAP(CsuanshuView, CView)
	ON_COMMAND(ID_PUTSUM, &CsuanshuView::OnPutsum)
	ON_COMMAND(ID_PUTSUBTRACTION, &CsuanshuView::OnPutsubtraction)
	ON_COMMAND(ID_PUTMUL, &CsuanshuView::OnPutmul)
	ON_COMMAND(ID_PUTDIVISION, &CsuanshuView::OnPutdivision)
	ON_COMMAND(ID_PUTSQRT, &CsuanshuView::OnPutsqrt)
	ON_COMMAND(ID_PUTDAOSHU, &CsuanshuView::OnPutdaoshu)
END_MESSAGE_MAP()

// CsuanshuView ����/����

CsuanshuView::CsuanshuView()
{
	// TODO: �ڴ˴���ӹ������

}

CsuanshuView::~CsuanshuView()
{
}

BOOL CsuanshuView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CsuanshuView ����

void CsuanshuView::OnDraw(CDC* /*pDC*/)
{
	CsuanshuDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CsuanshuView ���

#ifdef _DEBUG
void CsuanshuView::AssertValid() const
{
	CView::AssertValid();
}

void CsuanshuView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CsuanshuDoc* CsuanshuView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CsuanshuDoc)));
	return (CsuanshuDoc*)m_pDocument;
}
#endif //_DEBUG


// CsuanshuView ��Ϣ�������


void CsuanshuView::OnPutsum()
{
	// TODO: �ڴ���������������
	dlg0 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutsubtraction()
{
	// TODO: �ڴ���������������
	dlg1 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutmul()
{
	// TODO: �ڴ���������������
	dlg2 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutdivision()
{
	// TODO: �ڴ���������������
	dlg3 dlg;
	int t = dlg.DoModal();
}


void CsuanshuView::OnPutsqrt()
{
	// TODO: �ڴ���������������
	dlg dlg4;
	int t = dlg4.DoModal();
}


void CsuanshuView::OnPutdaoshu()
{
	// TODO: �ڴ���������������
	dlg5 dlg;
	int t = dlg.DoModal();
}
