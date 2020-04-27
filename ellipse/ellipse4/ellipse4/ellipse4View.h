
// ellipse4View.h : Cellipse4View 类的接口
//

#pragma once


class Cellipse4View : public CView
{
protected: // 仅从序列化创建
	Cellipse4View();
	DECLARE_DYNCREATE(Cellipse4View)

// 特性
public:
	Cellipse4Doc* GetDocument() const;
	int red1, green1, blue1, color, width;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cellipse4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColor();
};

#ifndef _DEBUG  // ellipse4View.cpp 中的调试版本
inline Cellipse4Doc* Cellipse4View::GetDocument() const
   { return reinterpret_cast<Cellipse4Doc*>(m_pDocument); }
#endif

