
// showjpgView.h : CshowjpgView 类的接口
//

#pragma once


class CshowjpgView : public CView
{
protected: // 仅从序列化创建
	CshowjpgView();
	DECLARE_DYNCREATE(CshowjpgView)

// 特性
public:
	CshowjpgDoc* GetDocument() const;

// 操作
public:
	CImage img;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CshowjpgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnJpgopen();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // showjpgView.cpp 中的调试版本
inline CshowjpgDoc* CshowjpgView::GetDocument() const
   { return reinterpret_cast<CshowjpgDoc*>(m_pDocument); }
#endif

