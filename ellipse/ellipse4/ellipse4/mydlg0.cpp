// mydlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ellipse4.h"
#include "mydlg0.h"
#include "afxdialogex.h"


// mydlg0 �Ի���

IMPLEMENT_DYNAMIC(mydlg0, CDialogEx)

mydlg0::mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, red(0)
	, green(0)
	, blue(0)
{

}

mydlg0::~mydlg0()
{
}

void mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, red);
	DDX_Text(pDX, IDC_EDIT1, green);
	DDV_MinMaxInt(pDX, green, 0, 256);
	DDX_Text(pDX, IDC_EDIT3, blue);
	DDV_MinMaxInt(pDX, blue, 0, 256);
}


BEGIN_MESSAGE_MAP(mydlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg0 ��Ϣ�������


void mydlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������


	
	

	
}
