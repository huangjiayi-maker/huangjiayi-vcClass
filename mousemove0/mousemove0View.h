
// mousemove0View.h : Cmousemove0View 类的接口
//

#pragma once


class Cmousemove0View : public CView
{
protected: // 仅从序列化创建
	Cmousemove0View();
	DECLARE_DYNCREATE(Cmousemove0View)

// 特性
public:
	Cmousemove0Doc* GetDocument() const;

// 操作
public:
	bool t;
	int count1,count2;
	CPoint point1, point2;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmousemove0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // mousemove0View.cpp 中的调试版本
inline Cmousemove0Doc* Cmousemove0View::GetDocument() const
   { return reinterpret_cast<Cmousemove0Doc*>(m_pDocument); }
#endif

