
// Q4View.h : CQ4View ��Ľӿ�
//

#pragma once


class CQ4View : public CView
{
protected: // �������л�����
	CQ4View();
	DECLARE_DYNCREATE(CQ4View)

// ����
public:
	CQ4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CQ4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Q4View.cpp �еĵ��԰汾
inline CQ4Doc* CQ4View::GetDocument() const
   { return reinterpret_cast<CQ4Doc*>(m_pDocument); }
#endif

