
// mousemove0View.cpp : Cmousemove0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "mousemove0.h"
#endif

#include "mousemove0Doc.h"
#include "mousemove0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmousemove0View

IMPLEMENT_DYNCREATE(Cmousemove0View, CView)

BEGIN_MESSAGE_MAP(Cmousemove0View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cmousemove0View ����/����

Cmousemove0View::Cmousemove0View()
{
	// TODO: �ڴ˴���ӹ������
	count1 = 0;
	count2 = 0;
}

Cmousemove0View::~Cmousemove0View()
{
}

BOOL Cmousemove0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmousemove0View ����

void Cmousemove0View::OnDraw(CDC* /*pDC*/)
{
	Cmousemove0Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmousemove0View ���

#ifdef _DEBUG
void Cmousemove0View::AssertValid() const
{
	CView::AssertValid();
}

void Cmousemove0View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmousemove0Doc* Cmousemove0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmousemove0Doc)));
	return (Cmousemove0Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmousemove0View ��Ϣ�������


void Cmousemove0View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CString s,ss;
	//point.x = 0;
	
	

	if (t == true)
	{
    count1++;
	count2 += point2.x - point1.x;
	s.Format(_T("����ƶ�������%d"), count1);
	ss.Format(_T("�����ƶ����ط���������%d"), count2);
	GetDC()->TextOutW(200, 150, s);
	GetDC()->TextOutW(200, 200, ss);
	}
    
	CView::OnMouseMove(nFlags, point);
}


void Cmousemove0View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	point1 = point;
	t = true;
}


void Cmousemove0View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point2 = point;
	t = false;
	CView::OnLButtonUp(nFlags, point);
}
