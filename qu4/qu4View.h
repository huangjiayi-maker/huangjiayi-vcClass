
// qu4View.h : Cqu4View ��Ľӿ�
//

#pragma once


class Cqu4View : public CView
{
protected: // �������л�����
	Cqu4View();
	DECLARE_DYNCREATE(Cqu4View)

// ����
public:
	Cqu4Doc* GetDocument() const;

// ����
public:
	CString s, ss;
	int a;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cqu4View();
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

#ifndef _DEBUG  // qu4View.cpp �еĵ��԰汾
inline Cqu4Doc* Cqu4View::GetDocument() const
   { return reinterpret_cast<Cqu4Doc*>(m_pDocument); }
#endif

