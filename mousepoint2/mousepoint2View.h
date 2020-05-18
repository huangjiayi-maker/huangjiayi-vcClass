
// mousepoint2View.h : Cmousepoint2View 类的接口
//

#pragma once


class Cmousepoint2View : public CView
{
protected: // 仅从序列化创建
	Cmousepoint2View();
	DECLARE_DYNCREATE(Cmousepoint2View)

// 特性
public:
	Cmousepoint2Doc* GetDocument() const;

// 操作
public:
	CRect rect;
	CArray<CRect, CRect&>ca;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmousepoint2View();
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

#ifndef _DEBUG  // mousepoint2View.cpp 中的调试版本
inline Cmousepoint2Doc* Cmousepoint2View::GetDocument() const
   { return reinterpret_cast<Cmousepoint2Doc*>(m_pDocument); }
#endif

