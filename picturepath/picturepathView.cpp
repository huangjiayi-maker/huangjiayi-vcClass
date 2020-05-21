
// picturepathView.cpp : CpicturepathView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "picturepath.h"
#endif

#include "picturepathSet.h"
#include "picturepathDoc.h"
#include "picturepathView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CpicturepathView

IMPLEMENT_DYNCREATE(CpicturepathView, CRecordView)

BEGIN_MESSAGE_MAP(CpicturepathView, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CpicturepathView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CpicturepathView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CpicturepathView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CpicturepathView::OnRecordLast)
END_MESSAGE_MAP()

// CpicturepathView ����/����

CpicturepathView::CpicturepathView()
	: CRecordView(IDD_PICTUREPATH_FORM)
	, path(_T(""))
{
	m_pSet = NULL;
	Ppath = _T("E:\\ͼƬ\\");
	// TODO: �ڴ˴���ӹ������

}

CpicturepathView::~CpicturepathView()
{
}

void CpicturepathView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_3);
}

BOOL CpicturepathView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CpicturepathView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_picturepathSet;
	CRecordView::OnInitialUpdate();

}


// CpicturepathView ���

#ifdef _DEBUG
void CpicturepathView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CpicturepathView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CpicturepathDoc* CpicturepathView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CpicturepathDoc)));
	return (CpicturepathDoc*)m_pDocument;
}
#endif //_DEBUG


// CpicturepathView ���ݿ�֧��
CRecordset* CpicturepathView::OnGetRecordset()
{
	return m_pSet;
}



// CpicturepathView ��Ϣ�������


void CpicturepathView::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = Ppath + s;
	draw_pic(filename);
}


void CpicturepathView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = Ppath + s;
	draw_pic(filename);
}


void CpicturepathView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = Ppath + s;
	draw_pic(filename);
}


void CpicturepathView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);//��ȡ�༭������
	filename = Ppath + s;
	draw_pic(filename);//���ú���
}
void CpicturepathView::draw_pic(CString file)
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