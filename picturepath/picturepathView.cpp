
// picturepathView.cpp : CpicturepathView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CpicturepathView 构造/析构

CpicturepathView::CpicturepathView()
	: CRecordView(IDD_PICTUREPATH_FORM)
	, path(_T(""))
{
	m_pSet = NULL;
	Ppath = _T("E:\\图片\\");
	// TODO: 在此处添加构造代码

}

CpicturepathView::~CpicturepathView()
{
}

void CpicturepathView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_3);
}

BOOL CpicturepathView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CpicturepathView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_picturepathSet;
	CRecordView::OnInitialUpdate();

}


// CpicturepathView 诊断

#ifdef _DEBUG
void CpicturepathView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CpicturepathView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CpicturepathDoc* CpicturepathView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CpicturepathDoc)));
	return (CpicturepathDoc*)m_pDocument;
}
#endif //_DEBUG


// CpicturepathView 数据库支持
CRecordset* CpicturepathView::OnGetRecordset()
{
	return m_pSet;
}



// CpicturepathView 消息处理程序


void CpicturepathView::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);
	filename = Ppath + s;
	draw_pic(filename);
}


void CpicturepathView::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT1, s);//获取编辑框内容
	filename = Ppath + s;
	draw_pic(filename);//调用函数
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
	pDC->SetStretchBltMode(HALFTONE);//保证图片不失真
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}