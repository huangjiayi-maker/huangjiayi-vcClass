
// myname3View.h : Cmyname3View ��Ľӿ�
//

#pragma once


class Cmyname3View : public CView
{
protected: // �������л�����
	Cmyname3View();
	DECLARE_DYNCREATE(Cmyname3View)

// ����
public:
	Cmyname3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmyname3View();
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

#ifndef _DEBUG  // myname3View.cpp �еĵ��԰汾
inline Cmyname3Doc* Cmyname3View::GetDocument() const
   { return reinterpret_cast<Cmyname3Doc*>(m_pDocument); }
#endif

