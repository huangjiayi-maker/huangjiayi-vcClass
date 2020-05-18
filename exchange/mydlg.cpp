// mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "exchange.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg 对话框

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, ss(_T(""))
{

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDX_Text(pDX, IDC_EDIT2, ss);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg 消息处理程序


void mydlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CString r;
	r = s;
	s = ss;
	ss = r;
	UpdateData(false);
}
