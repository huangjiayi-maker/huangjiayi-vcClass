// dlg2.cpp : 实现文件
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg2.h"
#include "afxdialogex.h"


// dlg2 对话框

IMPLEMENT_DYNAMIC(dlg2, CDialogEx)

dlg2::dlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, x3(0)
	, y3(0)
	, z3(0)
{

}

dlg2::~dlg2()
{
}

void dlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, x3);
	DDX_Text(pDX, IDC_EDIT1, y3);
	DDX_Text(pDX, IDC_EDIT3, z3);
}


BEGIN_MESSAGE_MAP(dlg2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &dlg2::OnBnClickedButton1)
END_MESSAGE_MAP()


// dlg2 消息处理程序


void dlg2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z3 = x3*y3;
	UpdateData(false);
}
