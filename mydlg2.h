#pragma once


// mydlg2 �Ի���

class mydlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(mydlg2)

public:
	mydlg2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mydlg2();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString dlgg2;
};
