// myDlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Q4.h"
#include "myDlg0.h"
#include "afxdialogex.h"


// myDlg0 �Ի���

IMPLEMENT_DYNAMIC(myDlg0, CDialogEx)

myDlg0::myDlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, y(0)
	, sum(_T(""))
{

}

myDlg0::~myDlg0()
{
}

void myDlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(myDlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &myDlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// myDlg0 ��Ϣ�������


void myDlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	//CString t;
	//itoa(s,)
	sum = s;	
	UpdateData(false);
}
