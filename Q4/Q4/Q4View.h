
// Q4View.h : CQ4View 类的接口
//

#pragma once


class CQ4View : public CView
{
protected: // 仅从序列化创建
	CQ4View();
	DECLARE_DYNCREATE(CQ4View)

// 特性
public:
	CQ4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CQ4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Q4View.cpp 中的调试版本
inline CQ4Doc* CQ4View::GetDocument() const
   { return reinterpret_cast<CQ4Doc*>(m_pDocument); }
#endif

