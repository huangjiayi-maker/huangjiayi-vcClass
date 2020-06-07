
// Z3View.cpp : CZ3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Z3.h"
#endif

#include "Z3Set.h"
#include "Z3Doc.h"
#include "Z3View.h"
#include "mydlg1.h"
#include "mydlg2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZ3View

IMPLEMENT_DYNCREATE(CZ3View, CRecordView)

BEGIN_MESSAGE_MAP(CZ3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CZ3View::OnBnClickedAddnew)
	ON_BN_CLICKED(IDC_BUTTON2, &CZ3View::OnBnClickedUpdate)
	ON_BN_CLICKED(IDC_BUTTON3, &CZ3View::OnBnClickedDelete)
END_MESSAGE_MAP()

// CZ3View ����/����

CZ3View::CZ3View()
	: CRecordView(IDD_Z3_FORM)
	, ID(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CZ3View::~CZ3View()
{
}

void CZ3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_math);
}

BOOL CZ3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CZ3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Z3Set;
	CRecordView::OnInitialUpdate();

}


// CZ3View ���

#ifdef _DEBUG
void CZ3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CZ3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CZ3Doc* CZ3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZ3Doc)));
	return (CZ3Doc*)m_pDocument;
}
#endif //_DEBUG


// CZ3View ���ݿ�֧��
CRecordset* CZ3View::OnGetRecordset()
{
	return m_pSet;
}



// CZ3View ��Ϣ�������


void CZ3View::OnBnClickedAddnew()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydlg1 dlg1;
	int r=dlg1.DoModal();
	if (r == IDOK)
	{
		m_pSet->AddNew();
		long i = dlg1.s1;
		m_pSet->m_math = i;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CZ3View::OnBnClickedUpdate()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	mydlg2 dlg2;
	int r = dlg2.DoModal();
	if (r == IDOK)
	{		
		long i = dlg2.s2;
		m_pSet->Edit();	
		m_pSet->m_math=i;
		m_pSet->Update();

		UpdateData(false);
	}

	
}


void CZ3View::OnBnClickedDelete()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
		UpdateData(false);
}
