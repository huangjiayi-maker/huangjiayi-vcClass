
// picturepathView.h : CpicturepathView ��Ľӿ�
//

#pragma once

class CpicturepathSet;

class CpicturepathView : public CRecordView
{
protected: // �������л�����
	CpicturepathView();
	DECLARE_DYNCREATE(CpicturepathView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_PICTUREPATH_FORM };
#endif
	CpicturepathSet* m_pSet;
	CString Ppath;
// ����
public:
	CpicturepathDoc* GetDocument() const;
	void draw_pic(CString file);
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
	virtual ~CpicturepathView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString path;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // picturepathView.cpp �еĵ��԰汾
inline CpicturepathDoc* CpicturepathView::GetDocument() const
   { return reinterpret_cast<CpicturepathDoc*>(m_pDocument); }
#endif

