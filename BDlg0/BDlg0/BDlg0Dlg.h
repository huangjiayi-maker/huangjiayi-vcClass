
// BDlg0Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CBDlg0Dlg 对话框
class CBDlg0Dlg : public CDialogEx
{
// 构造
public:
	CBDlg0Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BDLG0_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	CString ss;

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox LBox;
	afx_msg void OnBnClickedButton1();
	CString show;
	afx_msg void OnBnClickedButton2();
};
