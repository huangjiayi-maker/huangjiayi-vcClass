
// Q11View.h : CQ11View 类的接口
//

#pragma once


class CQ11View : public CView
{
protected: // 仅从序列化创建
	CQ11View();
	DECLARE_DYNCREATE(CQ11View)

// 特性
public:
	CQ11Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CQ11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Q11View.cpp 中的调试版本
inline CQ11Doc* CQ11View::GetDocument() const
   { return reinterpret_cast<CQ11Doc*>(m_pDocument); }
#endif

