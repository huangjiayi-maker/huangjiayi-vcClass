
// ellips00View.h : Cellips00View 类的接口
//

#pragma once


class Cellips00View : public CView
{
protected: // 仅从序列化创建
	Cellips00View();
	DECLARE_DYNCREATE(Cellips00View)

// 特性
public:
	Cellips00Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cellips00View();
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

#ifndef _DEBUG  // ellips00View.cpp 中的调试版本
inline Cellips00Doc* Cellips00View::GetDocument() const
   { return reinterpret_cast<Cellips00Doc*>(m_pDocument); }
#endif

