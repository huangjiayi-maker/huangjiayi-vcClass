// dlg3.cpp : 实现文件
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg3.h"
#include "afxdialogex.h"


// dlg3 对话框

IMPLEMENT_DYNAMIC(dlg3, CDialogEx)

dlg3::dlg3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG4, pParent)
	, x4(0)
	, y4(0)
	, z4(0)
{

}

dlg3::~dlg3()
{
}

void dlg3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x4);
	DDX_Text(pDX, IDC_EDIT3, y4);
	DDX_Text(pDX, IDC_EDIT2, z4);
}


BEGIN_MESSAGE_MAP(dlg3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &dlg3::OnBnClickedButton1)
END_MESSAGE_MAP()


// dlg3 消息处理程序


void dlg3::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z4 = x4 / y4;
	UpdateData(false);
}
