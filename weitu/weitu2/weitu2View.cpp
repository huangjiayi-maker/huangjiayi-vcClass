
// weitu2View.cpp : Cweitu2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "weitu2.h"
#endif

#include "weitu2Doc.h"
#include "weitu2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweitu2View

IMPLEMENT_DYNCREATE(Cweitu2View, CView)

BEGIN_MESSAGE_MAP(Cweitu2View, CView)
END_MESSAGE_MAP()

// Cweitu2View ����/����

Cweitu2View::Cweitu2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cweitu2View::~Cweitu2View()
{
}

BOOL Cweitu2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cweitu2View ����

void Cweitu2View::OnDraw(CDC* /*pDC*/)
{
	Cweitu2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cweitu2View ���

#ifdef _DEBUG
void Cweitu2View::AssertValid() const
{
	CView::AssertValid();
}

void Cweitu2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweitu2Doc* Cweitu2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweitu2Doc)));
	return (Cweitu2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweitu2View ��Ϣ�������
