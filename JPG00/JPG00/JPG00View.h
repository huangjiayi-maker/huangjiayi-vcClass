
// JPG00View.h : CJPG00View 类的接口
//

#pragma once


class CJPG00View : public CView
{
protected: // 仅从序列化创建
	CJPG00View();
	DECLARE_DYNCREATE(CJPG00View)

// 特性
public:
	CJPG00Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CJPG00View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // JPG00View.cpp 中的调试版本
inline CJPG00Doc* CJPG00View::GetDocument() const
   { return reinterpret_cast<CJPG00Doc*>(m_pDocument); }
#endif

