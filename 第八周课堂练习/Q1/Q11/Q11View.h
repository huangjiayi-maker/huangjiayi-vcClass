
// Q11View.h : CQ11View ��Ľӿ�
//

#pragma once


class CQ11View : public CView
{
protected: // �������л�����
	CQ11View();
	DECLARE_DYNCREATE(CQ11View)

// ����
public:
	CQ11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CQ11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Q11View.cpp �еĵ��԰汾
inline CQ11Doc* CQ11View::GetDocument() const
   { return reinterpret_cast<CQ11Doc*>(m_pDocument); }
#endif

