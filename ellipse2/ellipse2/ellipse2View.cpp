
// ellipse2View.cpp : Cellipse2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ellipse2.h"
#endif

#include "ellipse2Doc.h"
#include "ellipse2View.h"
#include "mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellipse2View

IMPLEMENT_DYNCREATE(Cellipse2View, CView)

BEGIN_MESSAGE_MAP(Cellipse2View, CView)
	ON_COMMAND(ID_OUTPUT, &Cellipse2View::OnOutput)
END_MESSAGE_MAP()

// Cellipse2View ����/����

Cellipse2View::Cellipse2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cellipse2View::~Cellipse2View()
{
}

BOOL Cellipse2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cellipse2View ����

void Cellipse2View::OnDraw(CDC* /*pDC*/)
{
	Cellipse2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cellipse2View ���

#ifdef _DEBUG
void Cellipse2View::AssertValid() const
{
	CView::AssertValid();
}

void Cellipse2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellipse2Doc* Cellipse2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellipse2Doc)));
	return (Cellipse2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellipse2View ��Ϣ�������


void Cellipse2View::OnOutput()
{
	// TODO: �ڴ���������������
	mydlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int a = dlg.left;
		int b = dlg.top;
		int c = dlg.right;
		int d = dlg.bouttom;
		CRect re(a, b, c, d);
		GetDC()->Ellipse(re);
	}
}
