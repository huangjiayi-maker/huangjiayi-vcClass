
// Q3View.h : CQ3View ��Ľӿ�
//

#pragma once


class CQ3View : public CView
{
protected: // �������л�����
	CQ3View();
	DECLARE_DYNCREATE(CQ3View)

// ����
public:
	CQ3Doc* GetDocument() const;

// ����
public:
	int set;
	CRect rect;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CQ3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Q3View.cpp �еĵ��԰汾
inline CQ3Doc* CQ3View::GetDocument() const
   { return reinterpret_cast<CQ3Doc*>(m_pDocument); }
#endif

