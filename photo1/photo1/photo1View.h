
// photo1View.h : Cphoto1View ��Ľӿ�
//

#pragma once


class Cphoto1View : public CView
{
protected: // �������л�����
	Cphoto1View();
	DECLARE_DYNCREATE(Cphoto1View)

// ����
public:
	Cphoto1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cphoto1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Ongetfile();
};

#ifndef _DEBUG  // photo1View.cpp �еĵ��԰汾
inline Cphoto1Doc* Cphoto1View::GetDocument() const
   { return reinterpret_cast<Cphoto1Doc*>(m_pDocument); }
#endif

