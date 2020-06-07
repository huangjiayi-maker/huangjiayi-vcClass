
// z1View.h : Cz1View ��Ľӿ�
//

#pragma once

class Cz1Set;

class Cz1View : public CRecordView
{
protected: // �������л�����
	Cz1View();
	DECLARE_DYNCREATE(Cz1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_Z1_FORM };
#endif
	Cz1Set* m_pSet;
	void draw_pic(CString file);

// ����
public:
	Cz1Doc* GetDocument() const;

// ����
public:
	CString s;
	CString filename1;
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~Cz1View();
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
	CString path;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
//	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButtonbig();
};

#ifndef _DEBUG  // z1View.cpp �еĵ��԰汾
inline Cz1Doc* Cz1View::GetDocument() const
   { return reinterpret_cast<Cz1Doc*>(m_pDocument); }
#endif

