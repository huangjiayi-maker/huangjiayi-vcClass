// mydlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Q1.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg �Ի���

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
{

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// mydlg ��Ϣ�������


void mydlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
     //r = filename;

	this->UpdateData(true);
	mydlg dlg;
	int t = dlg.DoModal();
	CString filename;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		filename = cfd.GetPathName();
	}


	dlg.s = filename;
	UpdateData(false);
}
