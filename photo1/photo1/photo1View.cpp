
// photo1View.cpp : Cphoto1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "photo1.h"
#endif

#include "photo1Doc.h"
#include "photo1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cphoto1View

IMPLEMENT_DYNCREATE(Cphoto1View, CView)

BEGIN_MESSAGE_MAP(Cphoto1View, CView)
	ON_COMMAND(ID_getfile, &Cphoto1View::Ongetfile)
END_MESSAGE_MAP()

// Cphoto1View ����/����

Cphoto1View::Cphoto1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cphoto1View::~Cphoto1View()
{
}

BOOL Cphoto1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cphoto1View ����

void Cphoto1View::OnDraw(CDC* pDC)
{
	Cphoto1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200, pDoc->filename);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cphoto1View ���

#ifdef _DEBUG
void Cphoto1View::AssertValid() const
{
	CView::AssertValid();
}

void Cphoto1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cphoto1Doc* Cphoto1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cphoto1Doc)));
	return (Cphoto1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cphoto1View ��Ϣ�������


void Cphoto1View::Ongetfile()
{
	// TODO: �ڴ���������������
	Cphoto1Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t = IDOK)
	{
		pDoc->filename = cfd.GetPathName();
		GetDC()->TextOutW(200, 200, pDoc->filename);
		Invalidate();
	}
}
