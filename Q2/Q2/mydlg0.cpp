// mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "Q2.h"
#include "mydlg0.h"
#include "afxdialogex.h"


// mydlg0 对话框

IMPLEMENT_DYNAMIC(mydlg0, CDialogEx)

mydlg0::mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, sum(0)
{

}

mydlg0::~mydlg0()
{
}

void mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(mydlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg0 消息处理程序


void mydlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);//把前台数据送到后台
	sum = x + y;
	UpdateData(false);//把数从后台送到前台

}
