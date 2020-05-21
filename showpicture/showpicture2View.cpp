
// showpicture2View.cpp : Cshowpicture2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "showpicture2.h"
#endif

#include "showpicture2Set.h"
#include "showpicture2Doc.h"
#include "showpicture2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cshowpicture2View

IMPLEMENT_DYNCREATE(Cshowpicture2View, CRecordView)

BEGIN_MESSAGE_MAP(Cshowpicture2View, CRecordView)
	ON_COMMAND(ID_RECORD_NEXT, &Cshowpicture2View::OnRecordNext)
END_MESSAGE_MAP()

// Cshowpicture2View ����/����

Cshowpicture2View::Cshowpicture2View()
	: CRecordView(IDD_SHOWPICTURE2_FORM)
	, id(_T(""))
	, name(_T(""))
	, sex(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cshowpicture2View::~Cshowpicture2View()
{
}

void Cshowpicture2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
}

BOOL Cshowpicture2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cshowpicture2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_showpicture2Set;
	CRecordView::OnInitialUpdate();

}


// Cshowpicture2View ���

#ifdef _DEBUG
void Cshowpicture2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cshowpicture2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cshowpicture2Doc* Cshowpicture2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cshowpicture2Doc)));
	return (Cshowpicture2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cshowpicture2View ���ݿ�֧��
CRecordset* Cshowpicture2View::OnGetRecordset()
{
	return m_pSet;
}



// Cshowpicture2View ��Ϣ�������


void Cshowpicture2View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	CString filename;
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
		draw_pic(filename);
}

void Cshowpicture2View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC*pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);//��֤ͼƬ��ʧ��
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
