// myD2.cpp : 实现文件
//

#include "stdafx.h"
#include "dlg2.h"
#include "myD2.h"
#include "afxdialogex.h"


// myD2 对话框

IMPLEMENT_DYNAMIC(myD2, CDialogEx)

myD2::myD2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

myD2::~myD2()
{
}

void myD2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, LBOX);
	DDX_Control(pDX, IDC_BUTTON1, 选择);
}


BEGIN_MESSAGE_MAP(myD2, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &myD2::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &myD2::OnBnClickedButton1)
END_MESSAGE_MAP()


// myD2 消息处理程序


void myD2::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
}


BOOL myD2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
//	s = "2018" ;
       LBOX.AddString(_T("2018"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void myD2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//int n = LBOX.GetCurSel();




		
}
