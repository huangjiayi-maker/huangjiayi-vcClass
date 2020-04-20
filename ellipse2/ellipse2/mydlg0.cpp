// mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "ellipse2.h"
#include "mydlg0.h"
#include "afxdialogex.h"


// mydlg0 对话框

IMPLEMENT_DYNAMIC(mydlg0, CDialogEx)

mydlg0::mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, left(0)
	, top(0)
	, right(0)
	, bouttom(0)
{

}

mydlg0::~mydlg0()
{
}

void mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, left);
	DDX_Text(pDX, IDC_EDIT2, top);
	DDX_Text(pDX, IDC_EDIT3, right);
	DDX_Text(pDX, IDC_EDIT4, bouttom);
}


BEGIN_MESSAGE_MAP(mydlg0, CDialogEx)
END_MESSAGE_MAP()


// mydlg0 消息处理程序
