// mydlg2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Z3.h"
#include "mydlg2.h"
#include "afxdialogex.h"


// mydlg2 �Ի���

IMPLEMENT_DYNAMIC(mydlg2, CDialogEx)

mydlg2::mydlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, s2(0)
{

}

mydlg2::~mydlg2()
{
}

void mydlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s2);
}


BEGIN_MESSAGE_MAP(mydlg2, CDialogEx)
END_MESSAGE_MAP()


// mydlg2 ��Ϣ�������
