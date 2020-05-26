
// z1View.cpp : Cz1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "z1.h"
#endif

#include "z1Set.h"
#include "z1Doc.h"
#include "z1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cz1View

IMPLEMENT_DYNCREATE(Cz1View, CRecordView)

BEGIN_MESSAGE_MAP(Cz1View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &Cz1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cz1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cz1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cz1View::OnRecordLast)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// Cz1View ����/����

Cz1View::Cz1View()
	: CRecordView(IDD_Z1_FORM)
	, path(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	s = _T("E:\\ͼƬ\\");
}

Cz1View::~Cz1View()
{
}

void Cz1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL Cz1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cz1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_z1Set;
	CRecordView::OnInitialUpdate();

}


// Cz1View ���

#ifdef _DEBUG
void Cz1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cz1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cz1Doc* Cz1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cz1Doc)));
	return (Cz1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cz1View ���ݿ�֧��
CRecordset* Cz1View::OnGetRecordset()
{
	return m_pSet;
}



// Cz1View ��Ϣ�������


void Cz1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	InvalidateRect(NULL, true);
}


void Cz1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	UpdateData(false);
	if(m_pSet->IsBOF())
	m_pSet->MoveFirst();
	InvalidateRect(NULL, true);
	/*	CString filename;
	m_pSet->GetFieldValue(short(1), filename);
	draw_pic(s + filename);*/
}


void Cz1View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	UpdateData(false);
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	InvalidateRect(NULL, true);
	/*	CString filename;
	m_pSet->GetFieldValue(short(1), filename);
	draw_pic(s + filename);*/
}


void Cz1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	InvalidateRect(NULL, true);
/*	CString filename;
	m_pSet->GetFieldValue(short(1), filename);
	draw_pic(s + filename);*/
}
void Cz1View::draw_pic(CString file)
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


void Cz1View::OnPrint(CDC* pDC, CPrintInfo* pInfo)
{
	// TODO: �ڴ����ר�ô����/����û���

	CRecordView::OnPrint(pDC, pInfo);
}


void Cz1View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString filename;
	GetDlgItemText(IDC_EDIT1, filename);
	//m_pSet->GetFieldValue(short(1), filename);
	draw_pic(s + filename);
	//UpdateData(false);
	//InvalidateRect(NULL, true);
}
