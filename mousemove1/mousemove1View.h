
// mousemove1View.h : Cmousemove1View ��Ľӿ�
//

#pragma once


class Cmousemove1View : public CView
{
protected: // �������л�����
	Cmousemove1View();
	DECLARE_DYNCREATE(Cmousemove1View)

// ����
public:
	Cmousemove1Doc* GetDocument() const;
	
// ����
public:


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmousemove1View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // mousemove1View.cpp �еĵ��԰汾
inline Cmousemove1Doc* Cmousemove1View::GetDocument() const
   { return reinterpret_cast<Cmousemove1Doc*>(m_pDocument); }
#endif

