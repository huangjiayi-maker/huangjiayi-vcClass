
// docshow0View.h : Cdocshow0View 类的接口
//

#pragma once


class Cdocshow0View : public CView
{
protected: // 仅从序列化创建
	Cdocshow0View();
	DECLARE_DYNCREATE(Cdocshow0View)

// 特性
public:
	Cdocshow0Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdocshow0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // docshow0View.cpp 中的调试版本
inline Cdocshow0Doc* Cdocshow0View::GetDocument() const
   { return reinterpret_cast<Cdocshow0Doc*>(m_pDocument); }
#endif

