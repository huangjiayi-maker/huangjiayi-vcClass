
// mouseleft0View.h : Cmouseleft0View ��Ľӿ�
//

#pragma once


class Cmouseleft0View : public CView
{
protected: // �������л�����
	Cmouseleft0View();
	DECLARE_DYNCREATE(Cmouseleft0View)

// ����
public:
	Cmouseleft0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmouseleft0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // mouseleft0View.cpp �еĵ��԰汾
inline Cmouseleft0Doc* Cmouseleft0View::GetDocument() const
   { return reinterpret_cast<Cmouseleft0Doc*>(m_pDocument); }
#endif

