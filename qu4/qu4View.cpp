
// qu4View.cpp : Cqu4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "qu4.h"
#endif

#include "qu4Doc.h"
#include "qu4View.h"
#include "mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cqu4View

IMPLEMENT_DYNCREATE(Cqu4View, CView)

BEGIN_MESSAGE_MAP(Cqu4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cqu4View ����/����

Cqu4View::Cqu4View()
{
	// TODO: �ڴ˴���ӹ������
	int a = 2018;
	CString s = _T("cbeyf");
	CString ss = _T("hrehh");
}

Cqu4View::~Cqu4View()
{
}

BOOL Cqu4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cqu4View ����

void Cqu4View::OnDraw(CDC* /*pDC*/)
{
	Cqu4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cqu4View ���

#ifdef _DEBUG
void Cqu4View::AssertValid() const
{
	CView::AssertValid();
}

void Cqu4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cqu4Doc* Cqu4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cqu4Doc)));
	return (Cqu4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cqu4View ��Ϣ�������


void Cqu4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	mydlg dlg;
	
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
	CView::OnLButtonDown(nFlags, point);
}
