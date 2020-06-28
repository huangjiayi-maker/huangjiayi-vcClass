
// ZHView.cpp : CZHView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CZHView 构造/析构

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
	// TODO: 在此处添加构造代码
	s = _T("E:\\图片\\");
}

CZHView::~CZHView()
{
}

void CZHView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CZHView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_ZHSet;
	CRecordView::OnInitialUpdate();

}


// CZHView 诊断

#ifdef _DEBUG
void CZHView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CZHView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CZHDoc* CZHView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZHDoc)));
	return (CZHDoc*)m_pDocument;
}
#endif //_DEBUG


// CZHView 数据库支持
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
	pDC->SetStretchBltMode(HALFTONE);//保证图片不失真
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}


// CZHView 消息处理程序



void CZHView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	CString filename;
	GetDlgItemText(IDC_EDIT9, filename);
	draw_pic(s+filename);
	UpdateData(false);
}


void CZHView::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();

}


void CZHView::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	UpdateData(false);
	if(m_pSet->IsBOF())
	m_pSet->MoveFirst();
		Invalidate();
}


void CZHView::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	UpdateData(false);
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
		Invalidate();
}


void CZHView::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
}


void CZHView::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加命令处理程序代码
}


void CZHView::Ondelete()
{
	// TODO: 在此添加命令处理程序代码
}


void CZHView::Onchange()
{
	// TODO: 在此添加命令处理程序代码
}
