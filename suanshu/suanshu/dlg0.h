#pragma once


// dlg0 对话框

class dlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(dlg0)

public:
	dlg0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~dlg0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x1;
	int y1;
	int z1;
	afx_msg void OnBnClickedButton1();
};
