// dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg.h"
#include "afxdialogex.h"
#include "cmath"

// dlg 对话框

IMPLEMENT_DYNAMIC(dlg, CDialogEx)

dlg::dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
	, x5(0)
	, z5(0)
{

}

dlg::~dlg()
{
}

void dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x5);
	DDX_Text(pDX, IDC_EDIT2, z5);
}


BEGIN_MESSAGE_MAP(dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// dlg 消息处理程序


void dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	//double  t;
	//if (t*t == x5)
	//	z5 = t;
	z5 = sqrt(x5);
	UpdateData(false);
}
