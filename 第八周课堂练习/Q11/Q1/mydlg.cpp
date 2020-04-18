// mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Q1.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg 对话框

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
{

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg 消息处理程序


void mydlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
     //r = filename;

	this->UpdateData(true);
	mydlg dlg;
	int t = dlg.DoModal();
	CString filename;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		filename = cfd.GetPathName();
	}


	dlg.s = filename;
	UpdateData(false);
}
