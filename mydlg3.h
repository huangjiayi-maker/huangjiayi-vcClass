#pragma once


// mydlg3 �Ի���

class mydlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg3)

public:
	mydlg3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydlg3();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
};
