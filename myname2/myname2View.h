
// myname2View.h : Cmyname2View ��Ľӿ�
//

#pragma once


class Cmyname2View : public CView
{
protected: // �������л�����
	Cmyname2View();
	DECLARE_DYNCREATE(Cmyname2View)

// ����
public:
	Cmyname2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cmyname2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // myname2View.cpp �еĵ��԰汾
inline Cmyname2Doc* Cmyname2View::GetDocument() const
   { return reinterpret_cast<Cmyname2Doc*>(m_pDocument); }
#endif

