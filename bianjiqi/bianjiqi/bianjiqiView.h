
// bianjiqiView.h : CbianjiqiView 类的接口
//

#pragma once


class CbianjiqiView : public CView
{
protected: // 仅从序列化创建
	CbianjiqiView();
	DECLARE_DYNCREATE(CbianjiqiView)

// 特性
public:
	CbianjiqiDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CbianjiqiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // bianjiqiView.cpp 中的调试版本
inline CbianjiqiDoc* CbianjiqiView::GetDocument() const
   { return reinterpret_cast<CbianjiqiDoc*>(m_pDocument); }
#endif

