
// ellipse4View.cpp : Cellipse4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ellipse4.h"
#endif

#include "ellipse4Doc.h"
#include "ellipse4View.h"
#include"mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cellipse4View

IMPLEMENT_DYNCREATE(Cellipse4View, CView)

BEGIN_MESSAGE_MAP(Cellipse4View, CView)
	ON_COMMAND(ID_COLOR, &Cellipse4View::OnColor)
END_MESSAGE_MAP()

// Cellipse4View ����/����

Cellipse4View::Cellipse4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cellipse4View::~Cellipse4View()
{
}

BOOL Cellipse4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cellipse4View ����

void Cellipse4View::OnDraw(CDC* pDC)
{
	Cellipse4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cellipse4View ���

#ifdef _DEBUG
void Cellipse4View::AssertValid() const
{
	CView::AssertValid();
}

void Cellipse4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cellipse4Doc* Cellipse4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cellipse4Doc)));
	return (Cellipse4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cellipse4View ��Ϣ�������


void Cellipse4View::OnColor()
{
	// TODO: �ڴ���������������
	mydlg0 color;
	int t=color.DoModal();
	//CClientDC dc(this);
	mydlg0 dlg;
	if (IDOK) {
		CDC*dc = GetDC();
	 red1 = dlg.red;
	 green1 = dlg.green;
	 blue1 = dlg.blue;
	 int color = RGB(red1, green1, blue1);
	 CBrush brush;
	 brush.CreateSolidBrush(color);
	 CBrush* older = dc->SelectObject(&brush);
	 CRect rect(200, 200, 300, 350);
	 dc->Ellipse(rect);
	
	// GetDC()->FillSolidRect(&rect, color);//�������
	 dc->SelectObject(older);

	}


	
}
