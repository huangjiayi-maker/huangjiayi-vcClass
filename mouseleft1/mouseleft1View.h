
// mouseleft1View.h : Cmouseleft1View ��Ľӿ�
//

#pragma once


class Cmouseleft1View : public CView
{
protected: // �������л�����
	Cmouseleft1View();
	DECLARE_DYNCREATE(Cmouseleft1View)

// ����
public:
	Cmouseleft1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmouseleft1View();
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
};

#ifndef _DEBUG  // mouseleft1View.cpp �еĵ��԰汾
inline Cmouseleft1Doc* Cmouseleft1View::GetDocument() const
   { return reinterpret_cast<Cmouseleft1Doc*>(m_pDocument); }
#endif

