
// myname3View.cpp : Cmyname3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "myname3.h"
#endif

#include "myname3Doc.h"
#include "myname3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmyname3View

IMPLEMENT_DYNCREATE(Cmyname3View, CView)

BEGIN_MESSAGE_MAP(Cmyname3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cmyname3View ����/����

Cmyname3View::Cmyname3View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmyname3View::~Cmyname3View()
{
}

BOOL Cmyname3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmyname3View ����

void Cmyname3View::OnDraw(CDC* /*pDC*/)
{
	Cmyname3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmyname3View ���

#ifdef _DEBUG
void Cmyname3View::AssertValid() const
{
	CView::AssertValid();
}

void Cmyname3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmyname3Doc* Cmyname3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmyname3Doc)));
	return (Cmyname3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmyname3View ��Ϣ�������


void Cmyname3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cmyname3Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cmyname3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cmyname3Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	GetDC()->TextOutW(200, 150, s);
	CView::OnRButtonDown(nFlags, point);
}
