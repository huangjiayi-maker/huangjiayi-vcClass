
// showdialogView.cpp : CshowdialogView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "showdialog.h"
#endif

#include "showdialogDoc.h"
#include "showdialogView.h"
#include"mydlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CshowdialogView

IMPLEMENT_DYNCREATE(CshowdialogView, CView)

BEGIN_MESSAGE_MAP(CshowdialogView, CView)
	ON_COMMAND(ID_output, &CshowdialogView::Onoutput)
END_MESSAGE_MAP()

// CshowdialogView ����/����

CshowdialogView::CshowdialogView()
{
	// TODO: �ڴ˴���ӹ������

}

CshowdialogView::~CshowdialogView()
{
}

BOOL CshowdialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CshowdialogView ����

void CshowdialogView::OnDraw(CDC* /*pDC*/)
{
	CshowdialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CshowdialogView ���

#ifdef _DEBUG
void CshowdialogView::AssertValid() const
{
	CView::AssertValid();
}

void CshowdialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CshowdialogDoc* CshowdialogView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CshowdialogDoc)));
	return (CshowdialogDoc*)m_pDocument;
}
#endif //_DEBUG


// CshowdialogView ��Ϣ�������


void CshowdialogView::Onoutput()
{
	// TODO: �ڴ���������������
	mydlg0 dlg0;
	//CFileDialog cfd(true);
	int  t = dlg0.DoModal();
	if (t != IDOK)
	{
		CClientDC dc(this);
		CString s = _T("�����˳��Ի���");
		dc.TextOutW(200, 200, s);
	}
}
