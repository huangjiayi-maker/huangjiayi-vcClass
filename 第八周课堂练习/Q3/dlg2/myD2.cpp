// myD2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "dlg2.h"
#include "myD2.h"
#include "afxdialogex.h"


// myD2 �Ի���

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
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(myD2, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &myD2::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &myD2::OnBnClickedButton1)
END_MESSAGE_MAP()


// myD2 ��Ϣ�������


void myD2::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


BOOL myD2::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	//s = "2018";
	//Lbox.AddString(_T("yichangyesyeseyes"));
	//Lbox.AddString(_T("yichangyesyeseyes"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void myD2::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		 filename = cfd.GetPathName();
	}
	Lbox.AddString(filename);
	//int n = Lbox.GetCurSel();
	//Lbox.GetText(n, filename);
}
