#pragma once


// mydlg0 对话框

class mydlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg0)

public:
	mydlg0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mydlg0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg
		void draw_pic(CString file);
	void OnPaint();
	CString filename;
};
