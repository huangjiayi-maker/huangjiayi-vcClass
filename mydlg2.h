#pragma once


// mydlg2 对话框

class mydlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg2)

public:
	mydlg2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydlg2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString dlgg2;
};
