// dlg5.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "suanshu.h"
#include "dlg5.h"
#include "afxdialogex.h"


// dlg5 �Ի���

IMPLEMENT_DYNAMIC(dlg5, CDialogEx)

dlg5::dlg5(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG6, pParent)
	, x51(0)
	, y51(0)
	, x52(0)
	, y52(0)
{

}

dlg5::~dlg5()
{
}

void dlg5::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, x51);
	DDX_Text(pDX, IDC_EDIT4, y51);
	DDX_Text(pDX, IDC_EDIT5, x52);
	DDX_Text(pDX, IDC_EDIT6, y52);
}


BEGIN_MESSAGE_MAP(dlg5, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &dlg5::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &dlg5::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &dlg5::OnEnChangeEdit4)
	ON_BN_CLICKED(IDC_BUTTON1, &dlg5::OnBnClickedButton1)
END_MESSAGE_MAP()


// dlg5 ��Ϣ�������


void dlg5::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void dlg5::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void dlg5::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void dlg5::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	x52 = y51;
	y52 = x51;
	UpdateData(false);
}
