
// ZHView.h : CZHView ��Ľӿ�
//

#pragma once

class CZHSet;

class CZHView : public CRecordView
{
protected: // �������л�����
	CZHView();
	DECLARE_DYNCREATE(CZHView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_ZH_FORM };
#endif
	CZHSet* m_pSet;

// ����
public:
	CZHDoc* GetDocument() const;

// ����
public:
	CString s;
	CString filename1;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	void draw_pic(CString filename);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CZHView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	long sno;
	CString object;
	CString sex;
	long birthday;
	long phone;
	CString address;
	CString path;
	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void Onzengjia();
	afx_msg void Ondelete();
	afx_msg void Onchange();
	afx_msg void Onsearch();
	afx_msg void Onsort();
	afx_msg void Onremenber();
};

#ifndef _DEBUG  // ZHView.cpp �еĵ��԰汾
inline CZHDoc* CZHView::GetDocument() const
   { return reinterpret_cast<CZHDoc*>(m_pDocument); }
#endif

