#pragma once


// mydlg0 �Ի���

class mydlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg0)

public:
	mydlg0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydlg0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg
		void draw_pic(CString file);
	void OnPaint();
	CString filename;
};