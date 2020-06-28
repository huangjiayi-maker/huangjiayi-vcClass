
// ZHView.h : CZHView 类的接口
//

#pragma once

class CZHSet;

class CZHView : public CRecordView
{
protected: // 仅从序列化创建
	CZHView();
	DECLARE_DYNCREATE(CZHView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_ZH_FORM };
#endif
	CZHSet* m_pSet;

// 特性
public:
	CZHDoc* GetDocument() const;

// 操作
public:
	CString s;
	CString filename1;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	void draw_pic(CString filename);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CZHView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // ZHView.cpp 中的调试版本
inline CZHDoc* CZHView::GetDocument() const
   { return reinterpret_cast<CZHDoc*>(m_pDocument); }
#endif

