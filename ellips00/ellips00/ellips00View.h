
// ellips00View.h : Cellips00View ��Ľӿ�
//

#pragma once


class Cellips00View : public CView
{
protected: // �������л�����
	Cellips00View();
	DECLARE_DYNCREATE(Cellips00View)

// ����
public:
	Cellips00Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cellips00View();
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

#ifndef _DEBUG  // ellips00View.cpp �еĵ��԰汾
inline Cellips00Doc* Cellips00View::GetDocument() const
   { return reinterpret_cast<Cellips00Doc*>(m_pDocument); }
#endif

