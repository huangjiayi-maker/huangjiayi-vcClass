
// Z3View.h : CZ3View 类的接口
//

#pragma once

class CZ3Set;

class CZ3View : public CRecordView
{
protected: // 仅从序列化创建
	CZ3View();
	DECLARE_DYNCREATE(CZ3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_Z3_FORM };
#endif
	CZ3Set* m_pSet;

// 特性
public:
	CZ3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CZ3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	afx_msg void OnBnClickedAddnew();
	afx_msg void OnBnClickedUpdate();
	afx_msg void OnBnClickedDelete();
};

#ifndef _DEBUG  // Z3View.cpp 中的调试版本
inline CZ3Doc* CZ3View::GetDocument() const
   { return reinterpret_cast<CZ3Doc*>(m_pDocument); }
#endif

