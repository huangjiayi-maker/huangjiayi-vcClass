#pragma once


// dlg �Ի���

class dlg : public CDialogEx
{
	DECLARE_DYNAMIC(dlg)

public:
	dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x5;
	double z5;
	afx_msg void OnBnClickedButton1();
};
