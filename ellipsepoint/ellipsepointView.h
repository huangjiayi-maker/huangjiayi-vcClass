
// ellipsepointView.h : CellipsepointView ��Ľӿ�
//

#pragma once


class CellipsepointView : public CView
{
protected: // �������л�����
	CellipsepointView();
	DECLARE_DYNCREATE(CellipsepointView)

// ����
public:
	CellipsepointDoc* GetDocument() const;

// ����
public:
	CPoint point1, point2;
	bool t;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CellipsepointView();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ellipsepointView.cpp �еĵ��԰汾
inline CellipsepointDoc* CellipsepointView::GetDocument() const
   { return reinterpret_cast<CellipsepointDoc*>(m_pDocument); }
#endif

