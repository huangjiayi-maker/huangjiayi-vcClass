
// Q2View.h : CQ2View ��Ľӿ�
//

#pragma once


class CQ2View : public CView
{
protected: // �������л�����
	CQ2View();
	DECLARE_DYNCREATE(CQ2View)

// ����
public:
	CQ2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CQ2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpoout();
};

#ifndef _DEBUG  // Q2View.cpp �еĵ��԰汾
inline CQ2Doc* CQ2View::GetDocument() const
   { return reinterpret_cast<CQ2Doc*>(m_pDocument); }
#endif

