
// ellipsepointView.h : CellipsepointView 类的接口
//

#pragma once


class CellipsepointView : public CView
{
protected: // 仅从序列化创建
	CellipsepointView();
	DECLARE_DYNCREATE(CellipsepointView)

// 特性
public:
	CellipsepointDoc* GetDocument() const;

// 操作
public:
	CPoint point1, point2;
	bool t;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CellipsepointView();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ellipsepointView.cpp 中的调试版本
inline CellipsepointDoc* CellipsepointView::GetDocument() const
   { return reinterpret_cast<CellipsepointDoc*>(m_pDocument); }
#endif

