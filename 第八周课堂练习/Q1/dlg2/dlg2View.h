
// dlg2View.h : Cdlg2View ��Ľӿ�
//

#pragma once


class Cdlg2View : public CView
{
protected: // �������л�����
	Cdlg2View();
	DECLARE_DYNCREATE(Cdlg2View)

// ����
public:
	Cdlg2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cdlg2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // dlg2View.cpp �еĵ��԰汾
inline Cdlg2Doc* Cdlg2View::GetDocument() const
   { return reinterpret_cast<Cdlg2Doc*>(m_pDocument); }
#endif

