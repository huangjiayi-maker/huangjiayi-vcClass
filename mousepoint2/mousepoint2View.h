
// mousepoint2View.h : Cmousepoint2View ��Ľӿ�
//

#pragma once


class Cmousepoint2View : public CView
{
protected: // �������л�����
	Cmousepoint2View();
	DECLARE_DYNCREATE(Cmousepoint2View)

// ����
public:
	Cmousepoint2Doc* GetDocument() const;

// ����
public:
	CRect rect;
	CArray<CRect, CRect&>ca;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmousepoint2View();
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

#ifndef _DEBUG  // mousepoint2View.cpp �еĵ��԰汾
inline Cmousepoint2Doc* Cmousepoint2View::GetDocument() const
   { return reinterpret_cast<Cmousepoint2Doc*>(m_pDocument); }
#endif

