
// Q1View.h : CQ1View ��Ľӿ�
//

#pragma once


class CQ1View : public CView
{
protected: // �������л�����
	CQ1View();
	DECLARE_DYNCREATE(CQ1View)

// ����
public:
	CQ1Doc* GetDocument() const;

// ����
public:
	CString filename;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CQ1View();
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
	afx_msg void OnOpen();
};

#ifndef _DEBUG  // Q1View.cpp �еĵ��԰汾
inline CQ1Doc* CQ1View::GetDocument() const
   { return reinterpret_cast<CQ1Doc*>(m_pDocument); }
#endif

