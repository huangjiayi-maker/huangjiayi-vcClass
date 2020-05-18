
// mousepoint1View.h : Cmousepoint1View 类的接口
//

#pragma once


class Cmousepoint1View : public CView
{
protected: // 仅从序列化创建
	Cmousepoint1View();
	DECLARE_DYNCREATE(Cmousepoint1View)

// 特性
public:
	Cmousepoint1Doc* GetDocument() const;

// 操作
public:
	CRect clientDC;
	CRect rect;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmousepoint1View();
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

#ifndef _DEBUG  // mousepoint1View.cpp 中的调试版本
inline Cmousepoint1Doc* Cmousepoint1View::GetDocument() const
   { return reinterpret_cast<Cmousepoint1Doc*>(m_pDocument); }
#endif

