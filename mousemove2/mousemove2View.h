
// mousemove2View.h : Cmousemove2View ��Ľӿ�
//

#pragma once


class Cmousemove2View : public CView
{
protected: // �������л�����
	Cmousemove2View();
	DECLARE_DYNCREATE(Cmousemove2View)

// ����
public:
	Cmousemove2Doc* GetDocument() const;

// ����
public:
	CRect rect;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmousemove2View();
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
};

#ifndef _DEBUG  // mousemove2View.cpp �еĵ��԰汾
inline Cmousemove2Doc* Cmousemove2View::GetDocument() const
   { return reinterpret_cast<Cmousemove2Doc*>(m_pDocument); }
#endif

