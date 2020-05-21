
// showpicture1View.cpp : Cshowpicture1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Cshowpicture1View 构造/析构

Cshowpicture1View::Cshowpicture1View()
	: CRecordView(IDD_SHOWPICTURE1_FORM)
	, id(0)
	, name(_T(""))
	, path(_T(""))
	, truepath(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	set = false;
}

Cshowpicture1View::~Cshowpicture1View()
{
}

void Cshowpicture1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	//DDX_Text(pDX, IDC_EDIT5, m_pSet->column3);
}

BOOL Cshowpicture1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cshowpicture1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_showpicture1Set;
	CRecordView::OnInitialUpdate();

}


// Cshowpicture1View 诊断

#ifdef _DEBUG
void Cshowpicture1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cshowpicture1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cshowpicture1Doc* Cshowpicture1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cshowpicture1Doc)));
	return (Cshowpicture1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cshowpicture1View 数据库支持
CRecordset* Cshowpicture1View::OnGetRecordset()
{
	return m_pSet;
}



// Cshowpicture1View 消息处理程序


void Cshowpicture1View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Cshowpicture1View::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Cshowpicture1View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//set = true;
	CString filename;
	m_pSet->GetFieldValue(short(3), filename);
	UpdateData(false);
		draw_pic(filename);
}


void Cshowpicture1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
	
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
	pDC->SetStretchBltMode(HALFTONE);//保证图片不失真
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}