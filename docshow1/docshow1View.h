
// docshow1View.h : Cdocshow1View ��Ľӿ�
//

#pragma once


class Cdocshow1View : public CView
{
protected: // �������л�����
	Cdocshow1View();
	DECLARE_DYNCREATE(Cdocshow1View)

// ����
public:
	Cdocshow1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cdocshow1View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // docshow1View.cpp �еĵ��԰汾
inline Cdocshow1Doc* Cdocshow1View::GetDocument() const
   { return reinterpret_cast<Cdocshow1Doc*>(m_pDocument); }
#endif

