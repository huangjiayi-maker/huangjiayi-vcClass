
// qu4View.h : Cqu4View 类的接口
//

#pragma once


class Cqu4View : public CView
{
protected: // 仅从序列化创建
	Cqu4View();
	DECLARE_DYNCREATE(Cqu4View)

// 特性
public:
	Cqu4Doc* GetDocument() const;

// 操作
public:
	CString s, ss;
	int a;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cqu4View();
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

#ifndef _DEBUG  // qu4View.cpp 中的调试版本
inline Cqu4Doc* Cqu4View::GetDocument() const
   { return reinterpret_cast<Cqu4Doc*>(m_pDocument); }
#endif

