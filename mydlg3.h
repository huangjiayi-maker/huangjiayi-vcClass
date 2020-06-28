#pragma once


// mydlg3 对话框

class mydlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg3)

public:
	mydlg3(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydlg3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
};
