
// ontimer2View.h : Contimer2View 类的接口
//

#pragma once


class Contimer2View : public CView
{
protected: // 仅从序列化创建
	Contimer2View();
	DECLARE_DYNCREATE(Contimer2View)

// 特性
public:
	Contimer2Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect>cr;
	bool set,b;
	int red , green, blue ;
	int color;
//	CBrush*oldbrush, *brush;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Contimer2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void Onbigellipse();
};

#ifndef _DEBUG  // ontimer2View.cpp 中的调试版本
inline Contimer2Doc* Contimer2View::GetDocument() const
   { return reinterpret_cast<Contimer2Doc*>(m_pDocument); }
#endif

