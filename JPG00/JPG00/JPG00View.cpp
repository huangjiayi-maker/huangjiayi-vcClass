
// JPG00View.cpp : CJPG00View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "JPG00.h"
#endif

#include "JPG00Doc.h"
#include "JPG00View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CJPG00View

IMPLEMENT_DYNCREATE(CJPG00View, CView)

BEGIN_MESSAGE_MAP(CJPG00View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CJPG00View::OnFileOpen)
END_MESSAGE_MAP()

// CJPG00View ����/����

CJPG00View::CJPG00View()
{
	// TODO: �ڴ˴���ӹ������

}

CJPG00View::~CJPG00View()
{
}

BOOL CJPG00View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CJPG00View ����

void CJPG00View::OnDraw(CDC* /*pDC*/)
{
	CJPG00Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CJPG00View ���

#ifdef _DEBUG
void CJPG00View::AssertValid() const
{
	CView::AssertValid();
}

void CJPG00View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJPG00Doc* CJPG00View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJPG00Doc)));
	return (CJPG00Doc*)m_pDocument;
}
#endif //_DEBUG


// CJPG00View ��Ϣ�������


void CJPG00View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal();  //�����Ի���//����˳��Ի���ʱѡ��ΪOK�Ļ�
		CClientDC dc(this);
	if (r == IDOK)

	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(300, 200, filename);
	}

}
