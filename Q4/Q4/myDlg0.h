#pragma once


// myDlg0 �Ի���

class myDlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(myDlg0)

public:
	myDlg0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~myDlg0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	int y;
	CString sum;
	afx_msg void OnBnClickedButton1();
};
