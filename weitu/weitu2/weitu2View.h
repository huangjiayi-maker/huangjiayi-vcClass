
// weitu2View.h : Cweitu2View ��Ľӿ�
//

#pragma once


class Cweitu2View : public CView
{
protected: // �������л�����
	Cweitu2View();
	DECLARE_DYNCREATE(Cweitu2View)

// ����
public:
	Cweitu2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweitu2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // weitu2View.cpp �еĵ��԰汾
inline Cweitu2Doc* Cweitu2View::GetDocument() const
   { return reinterpret_cast<Cweitu2Doc*>(m_pDocument); }
#endif

