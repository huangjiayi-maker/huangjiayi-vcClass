#pragma once


// dlg5 �Ի���

class dlg5 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg5)

public:
	dlg5(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~dlg5();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	int x51;
	int y51;
	int x52;
	int y52;
	afx_msg void OnBnClickedButton1();
};
