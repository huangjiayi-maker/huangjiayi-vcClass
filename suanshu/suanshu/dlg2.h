#pragma once


// dlg2 对话框

class dlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg2)

public:
	dlg2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dlg2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x3;
	int y3;
	int z3;
	afx_msg void OnBnClickedButton1();
};
