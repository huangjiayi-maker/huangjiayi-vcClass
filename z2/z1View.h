
// z1View.h : Cz1View 类的接口
//

#pragma once

class Cz1Set;

class Cz1View : public CRecordView
{
protected: // 仅从序列化创建
	Cz1View();
	DECLARE_DYNCREATE(Cz1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_Z1_FORM };
#endif
	Cz1Set* m_pSet;
	void draw_pic(CString file);

// 特性
public:
	Cz1Doc* GetDocument() const;

// 操作
public:
	CString s;
	CString filename1;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Cz1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // z1View.cpp 中的调试版本
inline Cz1Doc* Cz1View::GetDocument() const
   { return reinterpret_cast<Cz1Doc*>(m_pDocument); }
#endif

