
// photo1View.h : Cphoto1View 类的接口
//

#pragma once


class Cphoto1View : public CView
{
protected: // 仅从序列化创建
	Cphoto1View();
	DECLARE_DYNCREATE(Cphoto1View)

// 特性
public:
	Cphoto1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cphoto1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Ongetfile();
};

#ifndef _DEBUG  // photo1View.cpp 中的调试版本
inline Cphoto1Doc* Cphoto1View::GetDocument() const
   { return reinterpret_cast<Cphoto1Doc*>(m_pDocument); }
#endif

