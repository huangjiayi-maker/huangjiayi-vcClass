// mydlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Q2.h"
#include "mydlg0.h"
#include "afxdialogex.h"


// mydlg0 �Ի���

IMPLEMENT_DYNAMIC(mydlg0, CDialogEx)

mydlg0::mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, sum(0)
{

}

mydlg0::~mydlg0()
{
}

void mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(mydlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg0 ��Ϣ�������


void mydlg0::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);//��ǰ̨�����͵���̨
	sum = x + y;
	UpdateData(false);//�����Ӻ�̨�͵�ǰ̨

}
