
// mouseleft2View.h : Cmouseleft2View 类的接口
//

#pragma once


class Cmouseleft2View : public CView
{
protected: // 仅从序列化创建
	Cmouseleft2View();
	DECLARE_DYNCREATE(Cmouseleft2View)

// 特性
public:
	Cmouseleft2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmouseleft2View();
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

#ifndef _DEBUG  // mouseleft2View.cpp 中的调试版本
inline Cmouseleft2Doc* Cmouseleft2View::GetDocument() const
   { return reinterpret_cast<Cmouseleft2Doc*>(m_pDocument); }
#endif

