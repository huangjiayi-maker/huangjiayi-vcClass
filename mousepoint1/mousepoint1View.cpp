
// mousepoint1View.cpp : Cmousepoint1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mousepoint1.h"
#endif

#include "mousepoint1Doc.h"
#include "mousepoint1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousepoint1View

IMPLEMENT_DYNCREATE(Cmousepoint1View, CView)

BEGIN_MESSAGE_MAP(Cmousepoint1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cmousepoint1View ����/����

Cmousepoint1View::Cmousepoint1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmousepoint1View::~Cmousepoint1View()
{
}

BOOL Cmousepoint1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmousepoint1View ����

void Cmousepoint1View::OnDraw(CDC* pDC)
{
	Cmousepoint1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return; 
	pDC->Ellipse(rect);
	/**/
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmousepoint1View ���

#ifdef _DEBUG
void Cmousepoint1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousepoint1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousepoint1Doc* Cmousepoint1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousepoint1Doc)));
	return (Cmousepoint1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousepoint1View ��Ϣ�������


void Cmousepoint1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//CClientDC rec(this);
	
	this->GetClientRect(&clientDC);
	if (clientDC.Width() < clientDC.Height())
	{
		rect.left = 0;
		rect.top = 0;
		rect.right = clientDC.Width();
		rect.bottom = clientDC.bottom;
	}
	else
	{
		rect.left = 0;
		rect.top = 0;
		rect.right = clientDC.Height();
		rect.bottom = clientDC.bottom;
	}
	GetDC()->Ellipse(rect);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
