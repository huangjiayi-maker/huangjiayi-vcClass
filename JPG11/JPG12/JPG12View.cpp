
// JPG12View.cpp : CJPG12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "JPG12.h"
#endif

#include "JPG12Doc.h"
#include "JPG12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJPG12View

IMPLEMENT_DYNCREATE(CJPG12View, CView)

BEGIN_MESSAGE_MAP(CJPG12View, CView)
END_MESSAGE_MAP()

// CJPG12View ����/����

CJPG12View::CJPG12View()
{
	// TODO: �ڴ˴���ӹ������

}

CJPG12View::~CJPG12View()
{
}

BOOL CJPG12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CJPG12View ����

void CJPG12View::OnDraw(CDC* /*pDC*/)
{
	CJPG12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CJPG12View ���

#ifdef _DEBUG
void CJPG12View::AssertValid() const
{
	CView::AssertValid();
}

void CJPG12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJPG12Doc* CJPG12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJPG12Doc)));
	return (CJPG12Doc*)m_pDocument;
}
#endif //_DEBUG


// CJPG12View ��Ϣ�������
