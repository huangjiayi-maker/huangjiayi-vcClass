
// ecllipse1View.h : Cecllipse1View ��Ľӿ�
//

#pragma once


class Cecllipse1View : public CView
{
protected: // �������л�����
	Cecllipse1View();
	DECLARE_DYNCREATE(Cecllipse1View)

// ����
public:
	Cecllipse1Doc* GetDocument() const;

// ����
public:
	
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cecllipse1View();
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
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ecllipse1View.cpp �еĵ��԰汾
inline Cecllipse1Doc* Cecllipse1View::GetDocument() const
   { return reinterpret_cast<Cecllipse1Doc*>(m_pDocument); }
#endif

