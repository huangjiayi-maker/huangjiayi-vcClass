
// bianjiqiView.cpp : CbianjiqiView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "bianjiqi.h"
#endif

#include "bianjiqiDoc.h"
#include "bianjiqiView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CbianjiqiView

IMPLEMENT_DYNCREATE(CbianjiqiView, CView)

BEGIN_MESSAGE_MAP(CbianjiqiView, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CbianjiqiView ����/����

CbianjiqiView::CbianjiqiView()
{
	// TODO: �ڴ˴���ӹ������

}

CbianjiqiView::~CbianjiqiView()
{
}

BOOL CbianjiqiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CbianjiqiView ����

void CbianjiqiView::OnDraw(CDC* pDC)
{
	CbianjiqiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(100,100, 400, 400);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CbianjiqiView ���

#ifdef _DEBUG
void CbianjiqiView::AssertValid() const
{
	CView::AssertValid();
}

void CbianjiqiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CbianjiqiDoc* CbianjiqiView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CbianjiqiDoc)));
	return (CbianjiqiDoc*)m_pDocument;
}
#endif //_DEBUG


// CbianjiqiView ��Ϣ�������

int x, y;
CString cs;
void CbianjiqiView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CClientDC dc(this);
	int flag;
	int a;
	CRect rect(300, 300, 600, 600);
	s.Format(_T("%c"), nChar);
	if (x >= 200 && y >=200)
	{
		a = (x - 200) / 10 + (y - 200) / 20 * 30;
		cs.Insert(a, nChar);
	}
	else
	{
		s.Append(s);
	}
	dc.DrawText(cs, rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CbianjiqiView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	//CRect cr;
	
}
