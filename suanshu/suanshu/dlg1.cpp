// dlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg1.h"
#include "afxdialogex.h"


// dlg1 对话框

IMPLEMENT_DYNAMIC(dlg1, CDialogEx)

dlg1::dlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, x2(0)
	, y2(0)
	, z2(0)
{

}

dlg1::~dlg1()
{
}

void dlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x2);
	DDX_Text(pDX, IDC_EDIT2, y2);
	DDX_Text(pDX, IDC_EDIT3, z2);
}


BEGIN_MESSAGE_MAP(dlg1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &dlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// dlg1 消息处理程序


void dlg1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z2 = x2 - y2;
	UpdateData(false);
}
