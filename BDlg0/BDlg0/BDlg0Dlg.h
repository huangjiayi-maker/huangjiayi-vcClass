
// BDlg0Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CBDlg0Dlg �Ի���
class CBDlg0Dlg : public CDialogEx
{
// ����
public:
	CBDlg0Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BDLG0_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��
	CString ss;

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
