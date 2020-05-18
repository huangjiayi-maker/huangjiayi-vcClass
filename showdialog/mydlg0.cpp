// mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "showdialog.h"
#include "mydlg0.h"
#include "afxdialogex.h"


// mydlg0 对话框

IMPLEMENT_DYNAMIC(mydlg0, CDialogEx)

mydlg0::mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mydlg0::~mydlg0()
{
}

void mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mydlg0, CDialogEx)
END_MESSAGE_MAP()


// mydlg0 消息处理程序
