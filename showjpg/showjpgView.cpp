
// showjpgView.cpp : CshowjpgView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "showjpg.h"
#endif

#include "showjpgDoc.h"
#include "showjpgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CshowjpgView

IMPLEMENT_DYNCREATE(CshowjpgView, CView)

BEGIN_MESSAGE_MAP(CshowjpgView, CView)
	ON_COMMAND(ID_JPGOPEN, &CshowjpgView::OnJpgopen)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CshowjpgView ����/����

CshowjpgView::CshowjpgView()
{
	// TODO: �ڴ˴���ӹ������

}

CshowjpgView::~CshowjpgView()
{
}

BOOL CshowjpgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CshowjpgView ����

void CshowjpgView::OnDraw(CDC* pDC)
{
	CshowjpgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
      // Invalidate();
		
	//InvalidateRect(NULL, false);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CshowjpgView ���

#ifdef _DEBUG
void CshowjpgView::AssertValid() const
{
	CView::AssertValid();
}

void CshowjpgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CshowjpgDoc* CshowjpgView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CshowjpgDoc)));
	return (CshowjpgDoc*)m_pDocument;
}
#endif //_DEBUG


// CshowjpgView ��Ϣ�������


void CshowjpgView::OnJpgopen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	CImage img;
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		CString filename = cfd.GetPathName();
		img.Load(filename);
		img.Draw(GetDC()->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		//InvalidateRect(NULL, true);
		//Invalidate();
	}
	;
}


void CshowjpgView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CView::OnPaint()
}
