
// mousemove2View.h : Cmousemove2View 类的接口
//

#pragma once


class Cmousemove2View : public CView
{
protected: // 仅从序列化创建
	Cmousemove2View();
	DECLARE_DYNCREATE(Cmousemove2View)

// 特性
public:
	Cmousemove2Doc* GetDocument() const;

// 操作
public:
	CRect rect;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmousemove2View();
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
};

#ifndef _DEBUG  // mousemove2View.cpp 中的调试版本
inline Cmousemove2Doc* Cmousemove2View::GetDocument() const
   { return reinterpret_cast<Cmousemove2Doc*>(m_pDocument); }
#endif

