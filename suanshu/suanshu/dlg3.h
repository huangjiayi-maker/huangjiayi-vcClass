#pragma once


// dlg3 �Ի���

class dlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg3)

public:
	dlg3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~dlg3();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x4;
	int y4;
	int z4;
	afx_msg void OnBnClickedButton1();
};
