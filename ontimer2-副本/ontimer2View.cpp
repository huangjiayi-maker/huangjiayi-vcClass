
// ontimer2View.cpp : Contimer2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ontimer2.h"
#endif

#include "ontimer2Doc.h"
#include "ontimer2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Contimer2View

IMPLEMENT_DYNCREATE(Contimer2View, CView)

BEGIN_MESSAGE_MAP(Contimer2View, CView)
	ON_WM_TIMER()
	ON_COMMAND(ID_bigellipse, &Contimer2View::Onbigellipse)
END_MESSAGE_MAP()

// Contimer2View ����/����

Contimer2View::Contimer2View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	b = false;
	//oldbrush = NULL;
	for (int i = 0; i < 1; i++)
	{
		int t = (i + 1) * 100;
	}
	red = 255;
	green = 0;
	blue=0;
	//color = RGB(red, green, blue);
}

Contimer2View::~Contimer2View()
{
}

BOOL Contimer2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Contimer2View ����

void Contimer2View::OnDraw(CDC* pDC)
{
	Contimer2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect re;
	this->GetClientRect(&re);
	int m = re.right / 2;
	int n = re.bottom / 2;
	CRect rect(m, n, m, n);//���Ͻ����꣬���½�����
		cr.Add(rect);
		//if (b == true) {
			if (set)
			{
				for (int i = 0; i < 1; i++)
					SetTimer(i, rand() % 500 + 100, NULL);
				set = false;
			}
			int color = RGB(red, green, blue);
			CBrush newBrush;
			newBrush.CreateSolidBrush(color);
			pDC->SelectObject(&newBrush);
			// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
			for (int i = 0; i < 1; i++)
			{
				pDC->Ellipse(cr[i]);
				DeleteObject(newBrush);
			}
			
}
// Contimer2View ���

#ifdef _DEBUG
void Contimer2View::AssertValid() const
{
	CView::AssertValid();
}

void Contimer2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Contimer2Doc* Contimer2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Contimer2Doc)));
	return (Contimer2Doc*)m_pDocument;
}
#endif //_DEBUG


// Contimer2View ��Ϣ�������


void Contimer2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	if (b) 
	{			
		
		cr[i].top -= 10;
		cr[i].left -= 10;
		cr[i].right += 10;
		cr[i].bottom += 10;
		red += 10;
		green += 20;
		blue += 10;
	
	}InvalidateRect(NULL, true);
	CView::OnTimer(nIDEvent);
}


void Contimer2View::Onbigellipse()
{
	// TODO: �ڴ���������������
	b = true;
}
