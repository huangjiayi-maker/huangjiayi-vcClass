
// myname2View.cpp : Cmyname2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "myname2.h"
#endif

#include "myname2Doc.h"
#include "myname2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmyname2View

IMPLEMENT_DYNCREATE(Cmyname2View, CView)

BEGIN_MESSAGE_MAP(Cmyname2View, CView)
END_MESSAGE_MAP()

// Cmyname2View ����/����

Cmyname2View::Cmyname2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmyname2View::~Cmyname2View()
{
}

BOOL Cmyname2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmyname2View ����

void Cmyname2View::OnDraw(CDC* pDC)
{
	Cmyname2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString ss;
	pDC->TextOutW(200, 150, pDoc->s);
	ss.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 200, ss);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmyname2View ���

#ifdef _DEBUG
void Cmyname2View::AssertValid() const
{
	CView::AssertValid();
}

void Cmyname2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmyname2Doc* Cmyname2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmyname2Doc)));
	return (Cmyname2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmyname2View ��Ϣ�������
