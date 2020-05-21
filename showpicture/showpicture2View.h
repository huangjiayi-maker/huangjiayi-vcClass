
// showpicture2View.h : Cshowpicture2View 类的接口
//

#pragma once

class Cshowpicture2Set;

class Cshowpicture2View : public CRecordView
{
protected: // 仅从序列化创建
	Cshowpicture2View();
	DECLARE_DYNCREATE(Cshowpicture2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SHOWPICTURE2_FORM };
#endif
	Cshowpicture2Set* m_pSet;
	void draw_pic(CString file);

// 特性
public:
	Cshowpicture2Doc* GetDocument() const;

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
	virtual ~Cshowpicture2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString id;
	CString name;
	CString sex;
	afx_msg void OnRecordNext();
};

#ifndef _DEBUG  // showpicture2View.cpp 中的调试版本
inline Cshowpicture2Doc* Cshowpicture2View::GetDocument() const
   { return reinterpret_cast<Cshowpicture2Doc*>(m_pDocument); }
#endif

