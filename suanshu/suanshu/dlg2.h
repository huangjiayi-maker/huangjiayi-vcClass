#pragma once


// dlg2 �Ի���

class dlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg2)

public:
	dlg2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~dlg2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x3;
	int y3;
	int z3;
	afx_msg void OnBnClickedButton1();
};
