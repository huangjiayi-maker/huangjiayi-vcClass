
// docshow0View.h : Cdocshow0View ��Ľӿ�
//

#pragma once


class Cdocshow0View : public CView
{
protected: // �������л�����
	Cdocshow0View();
	DECLARE_DYNCREATE(Cdocshow0View)

// ����
public:
	Cdocshow0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cdocshow0View();
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

#ifndef _DEBUG  // docshow0View.cpp �еĵ��԰汾
inline Cdocshow0Doc* Cdocshow0View::GetDocument() const
   { return reinterpret_cast<Cdocshow0Doc*>(m_pDocument); }
#endif

