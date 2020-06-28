
// ZHView.cpp : CZHView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ZH.h"
#endif

#include "ZHSet.h"
#include "ZHDoc.h"
#include "ZHView.h"
#include "mydlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZHView

IMPLEMENT_DYNCREATE(CZHView, CRecordView)

BEGIN_MESSAGE_MAP(CZHView, CRecordView)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &CZHView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CZHView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CZHView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CZHView::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CZHView::OnBnClickedButton1)
	ON_COMMAND(ID_zengjia, &CZHView::Onzengjia)
	ON_COMMAND(ID_delete, &CZHView::Ondelete)
	ON_COMMAND(ID_change, &CZHView::Onchange)
END_MESSAGE_MAP()

// CZHView ����/����

CZHView::CZHView()
	: CRecordView(IDD_ZH_FORM)
	, name(_T(""))
	, sno(0)
	, object(_T(""))
	, sex(_T(""))
	, birthday(0)
	, phone(0)
	, address(_T(""))
	, path(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	s = _T("E:\\ͼƬ\\");
}

CZHView::~CZHView()
{
}

void CZHView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->column8);
}

BOOL CZHView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CZHView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_ZHSet;
	CRecordView::OnInitialUpdate();

}


// CZHView ���

#ifdef _DEBUG
void CZHView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CZHView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CZHDoc* CZHView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZHDoc)));
	return (CZHDoc*)m_pDocument;
}
#endif //_DEBUG


// CZHView ���ݿ�֧��
CRecordset* CZHView::OnGetRecordset()
{
	return m_pSet;
}
void CZHView::draw_pic(CString filename)
{
	CImage img;
	img.Load(filename);
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


// CZHView ��Ϣ�������



void CZHView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	GetDlgItemText(IDC_EDIT9, filename);
	draw_pic(s+filename);
	UpdateData(false);
}


void CZHView::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();

}


void CZHView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	UpdateData(false);
	if(m_pSet->IsBOF())
	m_pSet->MoveFirst();
		Invalidate();
}


void CZHView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	UpdateData(false);
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
		Invalidate();
}


void CZHView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
}


void CZHView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydlg dlg;
	CString file;
	GetDlgItemText(IDC_EDIT9, file);
	CString ss = s + file;
	UpdateData(false);
	dlg.filename1 = ss;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}


void CZHView::Onzengjia()
{
	// TODO: �ڴ���������������
}


void CZHView::Ondelete()
{
	// TODO: �ڴ���������������
}


void CZHView::Onchange()
{
	// TODO: �ڴ���������������
}
