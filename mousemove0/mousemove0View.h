
// mousemove0View.h : Cmousemove0View ��Ľӿ�
//

#pragma once


class Cmousemove0View : public CView
{
protected: // �������л�����
	Cmousemove0View();
	DECLARE_DYNCREATE(Cmousemove0View)

// ����
public:
	Cmousemove0Doc* GetDocument() const;

// ����
public:
	bool t;
	int count1,count2;
	CPoint point1, point2;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmousemove0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // mousemove0View.cpp �еĵ��԰汾
inline Cmousemove0Doc* Cmousemove0View::GetDocument() const
   { return reinterpret_cast<Cmousemove0Doc*>(m_pDocument); }
#endif

