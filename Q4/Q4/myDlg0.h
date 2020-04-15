#pragma once


// myDlg0 对话框

class myDlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(myDlg0)

public:
	myDlg0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~myDlg0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString s;
	int y;
	CString sum;
	afx_msg void OnBnClickedButton1();
};
