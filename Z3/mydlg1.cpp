// mydlg1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Z3.h"
#include "mydlg1.h"
#include "afxdialogex.h"


// mydlg1 �Ի���

IMPLEMENT_DYNAMIC(mydlg1, CDialogEx)

mydlg1::mydlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(0)
{

}

mydlg1::~mydlg1()
{
}

void mydlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s1);
}


BEGIN_MESSAGE_MAP(mydlg1, CDialogEx)
END_MESSAGE_MAP()


// mydlg1 ��Ϣ�������
