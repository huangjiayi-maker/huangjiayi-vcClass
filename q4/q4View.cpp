
// q4View.cpp : Cq4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "q4.h"
#endif

#include "q4Doc.h"
#include "q4View.h"
#include "mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cq4View

IMPLEMENT_DYNCREATE(Cq4View, CView)

BEGIN_MESSAGE_MAP(Cq4View, CView)
	ON_COMMAND(ID_show, &Cq4View::Onshow)
END_MESSAGE_MAP()

// Cq4View ����/����

Cq4View::Cq4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cq4View::~Cq4View()
{
}

BOOL Cq4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cq4View ����

void Cq4View::OnDraw(CDC* /*pDC*/)
{
	Cq4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cq4View ���

#ifdef _DEBUG
void Cq4View::AssertValid() const
{
	CView::AssertValid();
}

void Cq4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cq4Doc* Cq4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cq4Doc)));
	return (Cq4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cq4View ��Ϣ�������


void Cq4View::Onshow()
{
	// TODO: �ڴ���������������
	mydlg dlg;
	int r=dlg.DoModal();
	if (r== IDOK)
	{
		CRect cr;
		int color = RGB(dlg.R, dlg.G, dlg.B);
		CClientDC dc(this);
		CBrush newBrush;
		newBrush.CreateSolidBrush(color);
		dc.SelectObject(&newBrush);
		GetClientRect(&cr);
		dc.Ellipse(cr);
		DeleteObject(newBrush);
		//Invalidate();
	}
	
}
