
// ellipse2View.h : Cellipse2View ��Ľӿ�
//

#pragma once


class Cellipse2View : public CView
{
protected: // �������л�����
	Cellipse2View();
	DECLARE_DYNCREATE(Cellipse2View)

// ����
public:
	Cellipse2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cellipse2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOutput();
};

#ifndef _DEBUG  // ellipse2View.cpp �еĵ��԰汾
inline Cellipse2Doc* Cellipse2View::GetDocument() const
   { return reinterpret_cast<Cellipse2Doc*>(m_pDocument); }
#endif

