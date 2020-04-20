
// suanshuView.h : CsuanshuView 类的接口
//

#pragma once


class CsuanshuView : public CView
{
protected: // 仅从序列化创建
	CsuanshuView();
	DECLARE_DYNCREATE(CsuanshuView)

// 特性
public:
	CsuanshuDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CsuanshuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPutsum();
	afx_msg void OnPutsubtraction();
	afx_msg void OnPutmul();
	afx_msg void OnPutdivision();
	afx_msg void OnPutsqrt();
	afx_msg void OnPutdaoshu();
};

#ifndef _DEBUG  // suanshuView.cpp 中的调试版本
inline CsuanshuDoc* CsuanshuView::GetDocument() const
   { return reinterpret_cast<CsuanshuDoc*>(m_pDocument); }
#endif

