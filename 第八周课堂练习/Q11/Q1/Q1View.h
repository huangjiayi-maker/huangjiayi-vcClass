
// Q1View.h : CQ1View 类的接口
//

#pragma once


class CQ1View : public CView
{
protected: // 仅从序列化创建
	CQ1View();
	DECLARE_DYNCREATE(CQ1View)

// 特性
public:
	CQ1Doc* GetDocument() const;

// 操作
public:
	CString filename;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CQ1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnOpen();
};

#ifndef _DEBUG  // Q1View.cpp 中的调试版本
inline CQ1Doc* CQ1View::GetDocument() const
   { return reinterpret_cast<CQ1Doc*>(m_pDocument); }
#endif

