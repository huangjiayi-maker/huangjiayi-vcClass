
// myname2View.h : Cmyname2View 类的接口
//

#pragma once


class Cmyname2View : public CView
{
protected: // 仅从序列化创建
	Cmyname2View();
	DECLARE_DYNCREATE(Cmyname2View)

// 特性
public:
	Cmyname2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cmyname2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // myname2View.cpp 中的调试版本
inline Cmyname2Doc* Cmyname2View::GetDocument() const
   { return reinterpret_cast<Cmyname2Doc*>(m_pDocument); }
#endif

