#pragma once


// dlg5 对话框

class dlg5 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg5)

public:
	dlg5(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dlg5();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
