
// exchangeView.h : CexchangeView ��Ľӿ�
//

#pragma once


class CexchangeView : public CView
{
protected: // �������л�����
	CexchangeView();
	DECLARE_DYNCREATE(CexchangeView)

// ����
public:
	CexchangeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CexchangeView();
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

#ifndef _DEBUG  // exchangeView.cpp �еĵ��԰汾
inline CexchangeDoc* CexchangeView::GetDocument() const
   { return reinterpret_cast<CexchangeDoc*>(m_pDocument); }
#endif

