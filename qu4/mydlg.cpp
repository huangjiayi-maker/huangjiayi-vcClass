// mydlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "qu4.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg �Ի���

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
	, a(0)
	, ss(_T(""))
{

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
	DDX_Text(pDX, IDC_EDIT2, a);
	DDX_Text(pDX, IDC_EDIT3, ss);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg ��Ϣ�������


void mydlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//mydlg dlg;
	//this->
		UpdateData(true);
	CString aa  ;
		aa.Format(_T("%d"), a);
		ss = s + aa;
		UpdateData(false);
}


BOOL mydlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	a = 2018;
	s = _T("heugv");
	ss = _T("oe3mf");
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
