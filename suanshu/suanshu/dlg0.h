#pragma once


// dlg0 �Ի���

class dlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg0)

public:
	dlg0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~dlg0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x1;
	int y1;
	int z1;
	afx_msg void OnBnClickedButton1();
};
