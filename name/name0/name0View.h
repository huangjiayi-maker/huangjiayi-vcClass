
// name0View.h : Cname0View ��Ľӿ�
//

#pragma once


class Cname0View : public CView
{
protected: // �������л�����
	Cname0View();
	DECLARE_DYNCREATE(Cname0View)

// ����
public:
	Cname0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cname0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // name0View.cpp �еĵ��԰汾
inline Cname0Doc* Cname0View::GetDocument() const
   { return reinterpret_cast<Cname0Doc*>(m_pDocument); }
#endif

