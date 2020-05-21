
// showpicture1View.cpp : Cshowpicture1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "showpicture1.h"
#endif

#include "showpicture1Set.h"
#include "showpicture1Doc.h"
#include "showpicture1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cshowpicture1View

IMPLEMENT_DYNCREATE(Cshowpicture1View, CRecordView)

BEGIN_MESSAGE_MAP(Cshowpicture1View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT1, &Cshowpicture1View::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &Cshowpicture1View::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Cshowpicture1View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &Cshowpicture1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &Cshowpicture1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &Cshowpicture1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &Cshowpicture1View::OnRecordLast)
END_MESSAGE_MAP()

// Cshowpicture1View ����/����

Cshowpicture1View::Cshowpicture1View()
	: CRecordView(IDD_SHOWPICTURE1_FORM)
	, id(0)
	, name(_T(""))
	, path(_T(""))
	, truepath(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	set = false;
}

Cshowpicture1View::~Cshowpicture1View()
{
}

void Cshowpicture1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	//DDX_Text(pDX, IDC_EDIT5, m_pSet->column3);
}

BOOL Cshowpicture1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cshowpicture1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_showpicture1Set;
	CRecordView::OnInitialUpdate();

}


// Cshowpicture1View ���

#ifdef _DEBUG
void Cshowpicture1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cshowpicture1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cshowpicture1Doc* Cshowpicture1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cshowpicture1Doc)));
	return (Cshowpicture1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cshowpicture1View ���ݿ�֧��
CRecordset* Cshowpicture1View::OnGetRecordset()
{
	return m_pSet;
}



// Cshowpicture1View ��Ϣ�������


void Cshowpicture1View::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Cshowpicture1View::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Cshowpicture1View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//set = true;
	CString filename;
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
		draw_pic(filename);
}


void Cshowpicture1View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	/*CString filename;
	//GetDlgItemText(IDC_EDIT5, filename);
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
	if (set)
	draw_pic(filename);*/
}


void Cshowpicture1View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if(m_pSet->IsBOF())
	m_pSet->MoveFirst();
	UpdateData(false);
	/*CString filename;
	//GetDlgItemText(IDC_EDIT5, filename);
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
	if (set)
	draw_pic(filename);*/
}


void Cshowpicture1View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	m_pSet->MoveLast();
	/*CString filename;
	//GetDlgItemText(IDC_EDIT5, filename);
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
	if (set)
		draw_pic(filename);*/
}


void Cshowpicture1View::OnRecordLast()
{
	// TODO: �ڴ���������������
	
	m_pSet->MoveLast();
	UpdateData(false);
	/*CString filename;
	//GetDlgItemText(IDC_EDIT5, filename);
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
	if (set)
	draw_pic(filename);*/
}
void Cshowpicture1View::draw_pic(CString file)
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