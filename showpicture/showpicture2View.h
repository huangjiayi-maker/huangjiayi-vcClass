
// showpicture2View.h : Cshowpicture2View ��Ľӿ�
//

#pragma once

class Cshowpicture2Set;

class Cshowpicture2View : public CRecordView
{
protected: // �������л�����
	Cshowpicture2View();
	DECLARE_DYNCREATE(Cshowpicture2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SHOWPICTURE2_FORM };
#endif
	Cshowpicture2Set* m_pSet;
	void draw_pic(CString file);

// ����
public:
	Cshowpicture2Doc* GetDocument() const;

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
	virtual ~Cshowpicture2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString id;
	CString name;
	CString sex;
	afx_msg void OnRecordNext();
};

#ifndef _DEBUG  // showpicture2View.cpp �еĵ��԰汾
inline Cshowpicture2Doc* Cshowpicture2View::GetDocument() const
   { return reinterpret_cast<Cshowpicture2Doc*>(m_pDocument); }
#endif

