
// JPG11View.cpp : CJPG11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "JPG11.h"
#endif

#include "JPG11Doc.h"
#include "JPG11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJPG11View

IMPLEMENT_DYNCREATE(CJPG11View, CView)

BEGIN_MESSAGE_MAP(CJPG11View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CJPG11View::OnFileOpen)
END_MESSAGE_MAP()

// CJPG11View ����/����

CJPG11View::CJPG11View()
{
	// TODO: �ڴ˴���ӹ������

}

CJPG11View::~CJPG11View()
{
}

BOOL CJPG11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CJPG11View ����

void CJPG11View::OnDraw(CDC* pDC)
{
	CJPG11Doc* pDoc = GetDocument();
	//m_hDC
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CJPG11View ���

#ifdef _DEBUG
void CJPG11View::AssertValid() const
{
	CView::AssertValid();
}

void CJPG11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJPG11Doc* CJPG11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJPG11Doc)));
	return (CJPG11Doc*)m_pDocument;
}
#endif //_DEBUG


// CJPG11View ��Ϣ�������


void CJPG11View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CDC*pDC = GetDC();
	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal();  //�����Ի���//����˳��Ի���ʱѡ��ΪOK�Ļ�
	CClientDC dc(this);
	if (r == IDOK)

	{
		CString filename = cfd.GetPathName();
		CImage img;
	img.Load(filename);

	img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	//dc.TextOutW(300, 200, filename);
	}

}
