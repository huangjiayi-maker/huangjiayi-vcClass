// dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg.h"
#include "afxdialogex.h"
#include "cmath"

// dlg �Ի���

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


// dlg ��Ϣ�������


void dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	//double  t;
	//if (t*t == x5)
	//	z5 = t;
	z5 = sqrt(x5);
	UpdateData(false);
}
