
// q4View.h : Cq4View ��Ľӿ�
//

#pragma once


class Cq4View : public CView
{
protected: // �������л�����
	Cq4View();
	DECLARE_DYNCREATE(Cq4View)

// ����
public:
	Cq4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cq4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onshow();
};

#ifndef _DEBUG  // q4View.cpp �еĵ��԰汾
inline Cq4Doc* Cq4View::GetDocument() const
   { return reinterpret_cast<Cq4Doc*>(m_pDocument); }
#endif

