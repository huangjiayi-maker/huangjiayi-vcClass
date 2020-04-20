#pragma once


// dlg 对话框

class dlg : public CDialogEx
{
	DECLARE_DYNAMIC(dlg)

public:
	dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x5;
	double z5;
	afx_msg void OnBnClickedButton1();
};
