
// threecaidan0View.cpp : Cthreecaidan0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "threecaidan0.h"
#endif

#include "threecaidan0Doc.h"
#include "threecaidan0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cthreecaidan0View

IMPLEMENT_DYNCREATE(Cthreecaidan0View, CView)

BEGIN_MESSAGE_MAP(Cthreecaidan0View, CView)
END_MESSAGE_MAP()

// Cthreecaidan0View ����/����

Cthreecaidan0View::Cthreecaidan0View()
{
	// TODO: �ڴ˴���ӹ������

}

Cthreecaidan0View::~Cthreecaidan0View()
{
}

BOOL Cthreecaidan0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cthreecaidan0View ����

void Cthreecaidan0View::OnDraw(CDC* /*pDC*/)
{
	Cthreecaidan0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cthreecaidan0View ���

#ifdef _DEBUG
void Cthreecaidan0View::AssertValid() const
{
	CView::AssertValid();
}

void Cthreecaidan0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cthreecaidan0Doc* Cthreecaidan0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cthreecaidan0Doc)));
	return (Cthreecaidan0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cthreecaidan0View ��Ϣ�������
