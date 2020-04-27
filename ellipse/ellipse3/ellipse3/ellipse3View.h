
// ellipse3View.h : Cellipse3View 类的接口
//

#pragma once


class Cellipse3View : public CView
{
protected: // 仅从序列化创建
	Cellipse3View();
	DECLARE_DYNCREATE(Cellipse3View)

// 特性
public:
	Cellipse3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cellipse3View();
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

#ifndef _DEBUG  // ellipse3View.cpp 中的调试版本
inline Cellipse3Doc* Cellipse3View::GetDocument() const
   { return reinterpret_cast<Cellipse3Doc*>(m_pDocument); }
#endif

