
// bianjiqiView.h : CbianjiqiView ��Ľӿ�
//

#pragma once


class CbianjiqiView : public CView
{
protected: // �������л�����
	CbianjiqiView();
	DECLARE_DYNCREATE(CbianjiqiView)

// ����
public:
	CbianjiqiDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CbianjiqiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // bianjiqiView.cpp �еĵ��԰汾
inline CbianjiqiDoc* CbianjiqiView::GetDocument() const
   { return reinterpret_cast<CbianjiqiDoc*>(m_pDocument); }
#endif

