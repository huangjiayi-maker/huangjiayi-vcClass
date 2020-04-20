#pragma once


// dlg3 对话框

class dlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg3)

public:
	dlg3(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dlg3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x4;
	int y4;
	int z4;
	afx_msg void OnBnClickedButton1();
};
