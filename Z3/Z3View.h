
// Z3View.h : CZ3View ��Ľӿ�
//

#pragma once

class CZ3Set;

class CZ3View : public CRecordView
{
protected: // �������л�����
	CZ3View();
	DECLARE_DYNCREATE(CZ3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_Z3_FORM };
#endif
	CZ3Set* m_pSet;

// ����
public:
	CZ3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CZ3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	afx_msg void OnBnClickedAddnew();
	afx_msg void OnBnClickedUpdate();
	afx_msg void OnBnClickedDelete();
};

#ifndef _DEBUG  // Z3View.cpp �еĵ��԰汾
inline CZ3Doc* CZ3View::GetDocument() const
   { return reinterpret_cast<CZ3Doc*>(m_pDocument); }
#endif

