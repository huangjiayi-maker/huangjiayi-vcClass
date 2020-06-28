// mydlg2.cpp : 实现文件
//

#include "stdafx.h"
#include "ZH.h"
#include "mydlg2.h"
#include "afxdialogex.h"


// mydlg2 对话框

IMPLEMENT_DYNAMIC(mydlg2, CDialogEx)

mydlg2::mydlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, dlgg2(_T(""))
{

}

mydlg2::~mydlg2()
{
}

void mydlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, dlgg2);
}


BEGIN_MESSAGE_MAP(mydlg2, CDialogEx)
END_MESSAGE_MAP()


// mydlg2 消息处理程序
