#pragma once


// dlg1 对话框

class dlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg1)

public:
	dlg1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dlg1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x2;
	int y2;
	int z2;
	afx_msg void OnBnClickedButton1();
};
