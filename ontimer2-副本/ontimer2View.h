
// ontimer2View.h : Contimer2View ��Ľӿ�
//

#pragma once


class Contimer2View : public CView
{
protected: // �������л�����
	Contimer2View();
	DECLARE_DYNCREATE(Contimer2View)

// ����
public:
	Contimer2Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect>cr;
	bool set,b;
	int red , green, blue ;
	int color;
//	CBrush*oldbrush, *brush;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Contimer2View();
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
	afx_msg void Onbigellipse();
};

#ifndef _DEBUG  // ontimer2View.cpp �еĵ��԰汾
inline Contimer2Doc* Contimer2View::GetDocument() const
   { return reinterpret_cast<Contimer2Doc*>(m_pDocument); }
#endif

