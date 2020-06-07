
// Z3View.cpp : CZ3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CZ3View 构造/析构

CZ3View::CZ3View()
	: CRecordView(IDD_Z3_FORM)
	, ID(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CZ3View::~CZ3View()
{
}

void CZ3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_math);
}

BOOL CZ3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CZ3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Z3Set;
	CRecordView::OnInitialUpdate();

}


// CZ3View 诊断

#ifdef _DEBUG
void CZ3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CZ3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CZ3Doc* CZ3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZ3Doc)));
	return (CZ3Doc*)m_pDocument;
}
#endif //_DEBUG


// CZ3View 数据库支持
CRecordset* CZ3View::OnGetRecordset()
{
	return m_pSet;
}



// CZ3View 消息处理程序


void CZ3View::OnBnClickedAddnew()
{
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
		UpdateData(false);
}
