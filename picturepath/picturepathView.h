
// picturepathView.h : CpicturepathView 类的接口
//

#pragma once

class CpicturepathSet;

class CpicturepathView : public CRecordView
{
protected: // 仅从序列化创建
	CpicturepathView();
	DECLARE_DYNCREATE(CpicturepathView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_PICTUREPATH_FORM };
#endif
	CpicturepathSet* m_pSet;
	CString Ppath;
// 特性
public:
	CpicturepathDoc* GetDocument() const;
	void draw_pic(CString file);
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
	virtual ~CpicturepathView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString path;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // picturepathView.cpp 中的调试版本
inline CpicturepathDoc* CpicturepathView::GetDocument() const
   { return reinterpret_cast<CpicturepathDoc*>(m_pDocument); }
#endif

