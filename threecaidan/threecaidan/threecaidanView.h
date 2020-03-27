
// threecaidanView.h : CthreecaidanView 类的接口
//

#pragma once


class CthreecaidanView : public CView
{
protected: // 仅从序列化创建
	CthreecaidanView();
	DECLARE_DYNCREATE(CthreecaidanView)

// 特性
public:
	CthreecaidanDoc* GetDocument() const;

// 操作
public:
	CRect m_ratangle;
	int flag0,flag1;
	CPoint pointt;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CthreecaidanView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRatangle();
	afx_msg void OnEcllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // threecaidanView.cpp 中的调试版本
inline CthreecaidanDoc* CthreecaidanView::GetDocument() const
   { return reinterpret_cast<CthreecaidanDoc*>(m_pDocument); }
#endif

