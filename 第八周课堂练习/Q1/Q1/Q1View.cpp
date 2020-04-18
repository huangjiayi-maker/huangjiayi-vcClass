
// Q1View.cpp : CQ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Q1.h"
#endif

#include "Q1Doc.h"
#include "Q1View.h"
#include"mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CQ1View

IMPLEMENT_DYNCREATE(CQ1View, CView)

BEGIN_MESSAGE_MAP(CQ1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_OPEN, &CQ1View::OnOpen)
END_MESSAGE_MAP()

// CQ1View ����/����

CQ1View::CQ1View()
{
	// TODO: �ڴ˴���ӹ������

}

CQ1View::~CQ1View()
{
}

BOOL CQ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CQ1View ����

void CQ1View::OnDraw(CDC* /*pDC*/)
{
	CQ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CQ1View ���

#ifdef _DEBUG
void CQ1View::AssertValid() const
{
	CView::AssertValid();
}

void CQ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQ1Doc* CQ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQ1Doc)));
	return (CQ1Doc*)m_pDocument;
}
#endif //_DEBUG


// CQ1View ��Ϣ�������


void CQ1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		 filename = cfd.GetPathName();
		dc.TextOutW(300, 200, filename);
	}

	CView::OnLButtonDblClk(nFlags, point);
}


void CQ1View::OnOpen()
{
	// TODO: �ڴ���������������
	mydlg dlg;
	int t = dlg.DoModal();
	CClientDC dc(this);
		
		dlg.s = filename;
		
		//GetDC->


}
