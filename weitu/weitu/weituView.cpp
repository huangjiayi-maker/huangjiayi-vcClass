
// weituView.cpp : CweituView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "weitu.h"
#endif

#include "weituDoc.h"
#include "weituView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CweituView

IMPLEMENT_DYNCREATE(CweituView, CView)

BEGIN_MESSAGE_MAP(CweituView, CView)
END_MESSAGE_MAP()

// CweituView ����/����

CweituView::CweituView()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_bitmap.LoadBitmap(IDB_BITMAP1);
	m_bitmap.GetBitmap(&BM);
	m_nwidth = BM.bmWidth;
	m_nheight = BM.bmHeight;
}

CweituView::~CweituView()
{
}

BOOL CweituView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CweituView ����

void CweituView::OnDraw(CDC* pDC)
{
	CweituDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MenDC;
	MenDC.CreateCompatibleDC(NULL);
	MenDC.SelectObject(m_bitmap);
	pDC->BitBlt(0, 0, m_nwidth, m_nheight, &MenDC, 0, 0, SRCCOPY);
}


// CweituView ���

#ifdef _DEBUG
void CweituView::AssertValid() const
{
	CView::AssertValid();
}

void CweituView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CweituDoc* CweituView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CweituDoc)));
	return (CweituDoc*)m_pDocument;
}
#endif //_DEBUG


// CweituView ��Ϣ�������
