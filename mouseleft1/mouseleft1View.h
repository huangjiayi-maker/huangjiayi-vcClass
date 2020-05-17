
// mouseleft1View.h : Cmouseleft1View 类的接口
//

#pragma once


class Cmouseleft1View : public CView
{
protected: // 仅从序列化创建
	Cmouseleft1View();
	DECLARE_DYNCREATE(Cmouseleft1View)

// 特性
public:
	Cmouseleft1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmouseleft1View();
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

#ifndef _DEBUG  // mouseleft1View.cpp 中的调试版本
inline Cmouseleft1Doc* Cmouseleft1View::GetDocument() const
   { return reinterpret_cast<Cmouseleft1Doc*>(m_pDocument); }
#endif

