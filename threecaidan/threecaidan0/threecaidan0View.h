
// threecaidan0View.h : Cthreecaidan0View ��Ľӿ�
//

#pragma once


class Cthreecaidan0View : public CView
{
protected: // �������л�����
	Cthreecaidan0View();
	DECLARE_DYNCREATE(Cthreecaidan0View)

// ����
public:
	Cthreecaidan0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cthreecaidan0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // threecaidan0View.cpp �еĵ��԰汾
inline Cthreecaidan0Doc* Cthreecaidan0View::GetDocument() const
   { return reinterpret_cast<Cthreecaidan0Doc*>(m_pDocument); }
#endif

