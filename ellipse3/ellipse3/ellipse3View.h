
// ellipse3View.h : Cellipse3View ��Ľӿ�
//

#pragma once


class Cellipse3View : public CView
{
protected: // �������л�����
	Cellipse3View();
	DECLARE_DYNCREATE(Cellipse3View)

// ����
public:
	Cellipse3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cellipse3View();
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

#ifndef _DEBUG  // ellipse3View.cpp �еĵ��԰汾
inline Cellipse3Doc* Cellipse3View::GetDocument() const
   { return reinterpret_cast<Cellipse3Doc*>(m_pDocument); }
#endif

