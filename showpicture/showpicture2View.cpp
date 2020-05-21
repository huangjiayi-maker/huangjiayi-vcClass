
// showpicture2View.cpp : Cshowpicture2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Cshowpicture2View 构造/析构

Cshowpicture2View::Cshowpicture2View()
	: CRecordView(IDD_SHOWPICTURE2_FORM)
	, id(_T(""))
	, name(_T(""))
	, sex(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

Cshowpicture2View::~Cshowpicture2View()
{
}

void Cshowpicture2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
}

BOOL Cshowpicture2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void Cshowpicture2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_showpicture2Set;
	CRecordView::OnInitialUpdate();

}


// Cshowpicture2View 诊断

#ifdef _DEBUG
void Cshowpicture2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cshowpicture2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cshowpicture2Doc* Cshowpicture2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cshowpicture2Doc)));
	return (Cshowpicture2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cshowpicture2View 数据库支持
CRecordset* Cshowpicture2View::OnGetRecordset()
{
	return m_pSet;
}



// Cshowpicture2View 消息处理程序


void Cshowpicture2View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
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
	pDC->SetStretchBltMode(HALFTONE);//保证图片不失真
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
