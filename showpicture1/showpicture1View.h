
// showpicture1View.h : Cshowpicture1View 类的接口
//

#pragma once

class Cshowpicture1Set;

class Cshowpicture1View : public CRecordView
{
protected: // 仅从序列化创建
	Cshowpicture1View();
	DECLARE_DYNCREATE(Cshowpicture1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SHOWPICTURE1_FORM };
#endif
	Cshowpicture1Set* m_pSet;
	void draw_pic(CString file);
// 特性
public:
	Cshowpicture1Doc* GetDocument() const;

// 操作
public:
	bool set;
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~Cshowpicture1View();
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

#ifndef _DEBUG  // showpicture1View.cpp 中的调试版本
inline Cshowpicture1Doc* Cshowpicture1View::GetDocument() const
   { return reinterpret_cast<Cshowpicture1Doc*>(m_pDocument); }
#endif

