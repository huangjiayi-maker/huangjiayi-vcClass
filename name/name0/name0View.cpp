
// name0View.cpp : Cname0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "name0.h"
#endif

#include "name0Doc.h"
#include "name0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cname0View

IMPLEMENT_DYNCREATE(Cname0View, CView)

BEGIN_MESSAGE_MAP(Cname0View, CView)
END_MESSAGE_MAP()

// Cname0View ����/����

Cname0View::Cname0View()
{
	// TODO: �ڴ˴���ӹ������

}

Cname0View::~Cname0View()
{
}

BOOL Cname0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cname0View ����

void Cname0View::OnDraw(CDC* /*pDC*/)
{
	Cname0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cname0View ���

#ifdef _DEBUG
void Cname0View::AssertValid() const
{
	CView::AssertValid();
}

void Cname0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cname0Doc* Cname0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cname0Doc)));
	return (Cname0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cname0View ��Ϣ�������
