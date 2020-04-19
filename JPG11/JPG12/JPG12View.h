
// JPG12View.h : CJPG12View 类的接口
//

#pragma once


class CJPG12View : public CView
{
protected: // 仅从序列化创建
	CJPG12View();
	DECLARE_DYNCREATE(CJPG12View)

// 特性
public:
	CJPG12Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CJPG12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // JPG12View.cpp 中的调试版本
inline CJPG12Doc* CJPG12View::GetDocument() const
   { return reinterpret_cast<CJPG12Doc*>(m_pDocument); }
#endif

