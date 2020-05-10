
// W32DView.h : CW32DView 类的接口
//

#pragma once


class CW32DView : public CView
{
protected: // 仅从序列化创建
	CW32DView();
	DECLARE_DYNCREATE(CW32DView)

// 特性
public:
	CW32DDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CW32DView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // W32DView.cpp 中的调试版本
inline CW32DDoc* CW32DView::GetDocument() const
   { return reinterpret_cast<CW32DDoc*>(m_pDocument); }
#endif

