
// threecaidanView.h : CthreecaidanView ��Ľӿ�
//

#pragma once


class CthreecaidanView : public CView
{
protected: // �������л�����
	CthreecaidanView();
	DECLARE_DYNCREATE(CthreecaidanView)

// ����
public:
	CthreecaidanDoc* GetDocument() const;

// ����
public:
	CRect m_ratangle;
	int flag0,flag1;
	CPoint pointt;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CthreecaidanView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRatangle();
	afx_msg void OnEcllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // threecaidanView.cpp �еĵ��԰汾
inline CthreecaidanDoc* CthreecaidanView::GetDocument() const
   { return reinterpret_cast<CthreecaidanDoc*>(m_pDocument); }
#endif

