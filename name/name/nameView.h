
// nameView.h : CnameView 类的接口
//

#pragma once


class CnameView : public CView
{
protected: // 仅从序列化创建
	CnameView();
	DECLARE_DYNCREATE(CnameView)

// 特性
public:
	CnameDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CnameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnshownumber();
};

#ifndef _DEBUG  // nameView.cpp 中的调试版本
inline CnameDoc* CnameView::GetDocument() const
   { return reinterpret_cast<CnameDoc*>(m_pDocument); }
#endif

