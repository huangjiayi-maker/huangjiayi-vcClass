#pragma once


// mydlg �Ի���

class mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg)

public:
	mydlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	int a ;
	CString ss;
	//dlg.a = 2018;
	//dlg.s = _T("heugv");
	//dlg.ss = _T("oe3mf");
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
};
