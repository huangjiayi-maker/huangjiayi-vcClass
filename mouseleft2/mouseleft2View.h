
// mouseleft2View.h : Cmouseleft2View ��Ľӿ�
//

#pragma once


class Cmouseleft2View : public CView
{
protected: // �������л�����
	Cmouseleft2View();
	DECLARE_DYNCREATE(Cmouseleft2View)

// ����
public:
	Cmouseleft2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmouseleft2View();
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

#ifndef _DEBUG  // mouseleft2View.cpp �еĵ��԰汾
inline Cmouseleft2Doc* Cmouseleft2View::GetDocument() const
   { return reinterpret_cast<Cmouseleft2Doc*>(m_pDocument); }
#endif

