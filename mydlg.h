#pragma once


// mydlg �Ի���

class mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg)

public:
	mydlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydlg();
	CString filename1;
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	void draw_pic(CString filename1);
};
