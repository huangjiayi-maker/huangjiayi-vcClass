
// ecllipse1View.h : Cecllipse1View 类的接口
//

#pragma once


class Cecllipse1View : public CView
{
protected: // 仅从序列化创建
	Cecllipse1View();
	DECLARE_DYNCREATE(Cecllipse1View)

// 特性
public:
	Cecllipse1Doc* GetDocument() const;

// 操作
public:
	
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cecllipse1View();
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
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ecllipse1View.cpp 中的调试版本
inline Cecllipse1Doc* Cecllipse1View::GetDocument() const
   { return reinterpret_cast<Cecllipse1Doc*>(m_pDocument); }
#endif

