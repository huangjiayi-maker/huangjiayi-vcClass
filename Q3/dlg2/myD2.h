#pragma once
#include "afxwin.h"


// myD2 �Ի���

class myD2 : public CDialogEx
{
	DECLARE_DYNAMIC(myD2)

public:
	myD2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~myD2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	CListBox Lbox;
	CString filename;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
