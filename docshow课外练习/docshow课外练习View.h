
// docshow������ϰView.h : Cdocshow������ϰView ��Ľӿ�
//

#pragma once


class Cdocshow������ϰView : public CView
{
protected: // �������л�����
	Cdocshow������ϰView();
	DECLARE_DYNCREATE(Cdocshow������ϰView)

// ����
public:
	Cdocshow������ϰDoc* GetDocument() const;

// ����
public:
	CString s;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cdocshow������ϰView();
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

#ifndef _DEBUG  // docshow������ϰView.cpp �еĵ��԰汾
inline Cdocshow������ϰDoc* Cdocshow������ϰView::GetDocument() const
   { return reinterpret_cast<Cdocshow������ϰDoc*>(m_pDocument); }
#endif

