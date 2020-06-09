#pragma once


// mydlg 对话框

class mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg)

public:
	mydlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
