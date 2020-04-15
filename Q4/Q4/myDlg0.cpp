// myDlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "Q4.h"
#include "myDlg0.h"
#include "afxdialogex.h"


// myDlg0 对话框

IMPLEMENT_DYNAMIC(myDlg0, CDialogEx)

myDlg0::myDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, y(0)
	, sum(_T(""))
{

}

myDlg0::~myDlg0()
{
}

void myDlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(myDlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &myDlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// myDlg0 消息处理程序


void myDlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	//CString t;
	//itoa(s,)
	sum = s;	
	UpdateData(false);
}
