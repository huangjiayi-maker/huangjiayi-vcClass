// dlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg0.h"
#include "afxdialogex.h"


// dlg0 对话框

IMPLEMENT_DYNAMIC(dlg0, CDialogEx)

dlg0::dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x1(0)
	, y1(0)
	, z1(0)
{

}

dlg0::~dlg0()
{
}

void dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x1);
	DDX_Text(pDX, IDC_EDIT2, y1);
	DDX_Text(pDX, IDC_EDIT3, z1);
}


BEGIN_MESSAGE_MAP(dlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &dlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// dlg0 消息处理程序


void dlg0::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z1 = x1 + y1;
	UpdateData(false);
}
