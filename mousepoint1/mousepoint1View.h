
// mousepoint1View.h : Cmousepoint1View ��Ľӿ�
//

#pragma once


class Cmousepoint1View : public CView
{
protected: // �������л�����
	Cmousepoint1View();
	DECLARE_DYNCREATE(Cmousepoint1View)

// ����
public:
	Cmousepoint1Doc* GetDocument() const;

// ����
public:
	CRect clientDC;
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmousepoint1View();
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

#ifndef _DEBUG  // mousepoint1View.cpp �еĵ��԰汾
inline Cmousepoint1Doc* Cmousepoint1View::GetDocument() const
   { return reinterpret_cast<Cmousepoint1Doc*>(m_pDocument); }
#endif

