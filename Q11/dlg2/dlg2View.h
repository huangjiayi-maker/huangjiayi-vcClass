
// dlg2View.h : Cdlg2View 类的接口
//

#pragma once


class Cdlg2View : public CView
{
protected: // 仅从序列化创建
	Cdlg2View();
	DECLARE_DYNCREATE(Cdlg2View)

// 特性
public:
	Cdlg2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdlg2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // dlg2View.cpp 中的调试版本
inline Cdlg2Doc* Cdlg2View::GetDocument() const
   { return reinterpret_cast<Cdlg2Doc*>(m_pDocument); }
#endif

