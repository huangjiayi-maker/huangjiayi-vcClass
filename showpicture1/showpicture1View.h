
// showpicture1View.h : Cshowpicture1View ��Ľӿ�
//

#pragma once

class Cshowpicture1Set;

class Cshowpicture1View : public CRecordView
{
protected: // �������л�����
	Cshowpicture1View();
	DECLARE_DYNCREATE(Cshowpicture1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SHOWPICTURE1_FORM };
#endif
	Cshowpicture1Set* m_pSet;
	void draw_pic(CString file);
// ����
public:
	Cshowpicture1Doc* GetDocument() const;

// ����
public:
	bool set;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Cshowpicture1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	int id;
	CString name;
	CString path;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	CString truepath;
};

#ifndef _DEBUG  // showpicture1View.cpp �еĵ��԰汾
inline Cshowpicture1Doc* Cshowpicture1View::GetDocument() const
   { return reinterpret_cast<Cshowpicture1Doc*>(m_pDocument); }
#endif

