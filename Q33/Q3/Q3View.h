
// Q3View.h : CQ3View 类的接口
//

#pragma once


class CQ3View : public CView
{
protected: // 仅从序列化创建
	CQ3View();
	DECLARE_DYNCREATE(CQ3View)

// 特性
public:
	CQ3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CQ3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Q3View.cpp 中的调试版本
inline CQ3Doc* CQ3View::GetDocument() const
   { return reinterpret_cast<CQ3Doc*>(m_pDocument); }
#endif

