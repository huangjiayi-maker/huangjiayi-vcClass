
// nameView.cpp : CnameView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "name.h"
#endif

#include "nameDoc.h"
#include "nameView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CnameView

IMPLEMENT_DYNCREATE(CnameView, CView)

BEGIN_MESSAGE_MAP(CnameView, CView)
	ON_COMMAND(ID_ONSHOWNUMBER, &CnameView::OnOnshownumber)
END_MESSAGE_MAP()

// CnameView ����/����

CnameView::CnameView()
{
	// TODO: �ڴ˴���ӹ������

}

CnameView::~CnameView()
{
}

BOOL CnameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CnameView ����

void CnameView::OnDraw(CDC* /*pDC*/)
{
	CnameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CnameView ���

#ifdef _DEBUG
void CnameView::AssertValid() const
{
	CView::AssertValid();
}

void CnameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CnameDoc* CnameView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CnameDoc)));
	return (CnameDoc*)m_pDocument;
}
#endif //_DEBUG


// CnameView ��Ϣ�������


void CnameView::OnOnshownumber()
{
	// TODO: �ڴ���������������
	CString s = _T("�ҵ������ǻƼ���");
	CClientDC dc(this);
	dc.TextOutW(200, 300,s);

}
