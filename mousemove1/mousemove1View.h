
// mousemove1View.h : Cmousemove1View 类的接口
//

#pragma once


class Cmousemove1View : public CView
{
protected: // 仅从序列化创建
	Cmousemove1View();
	DECLARE_DYNCREATE(Cmousemove1View)

// 特性
public:
	Cmousemove1Doc* GetDocument() const;
	
// 操作
public:


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmousemove1View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // mousemove1View.cpp 中的调试版本
inline Cmousemove1Doc* Cmousemove1View::GetDocument() const
   { return reinterpret_cast<Cmousemove1Doc*>(m_pDocument); }
#endif

