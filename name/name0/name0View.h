
// name0View.h : Cname0View 类的接口
//

#pragma once


class Cname0View : public CView
{
protected: // 仅从序列化创建
	Cname0View();
	DECLARE_DYNCREATE(Cname0View)

// 特性
public:
	Cname0Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cname0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // name0View.cpp 中的调试版本
inline Cname0Doc* Cname0View::GetDocument() const
   { return reinterpret_cast<Cname0Doc*>(m_pDocument); }
#endif

