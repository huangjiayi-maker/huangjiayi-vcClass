
// nameView.h : CnameView ��Ľӿ�
//

#pragma once


class CnameView : public CView
{
protected: // �������л�����
	CnameView();
	DECLARE_DYNCREATE(CnameView)

// ����
public:
	CnameDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CnameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnshownumber();
};

#ifndef _DEBUG  // nameView.cpp �еĵ��԰汾
inline CnameDoc* CnameView::GetDocument() const
   { return reinterpret_cast<CnameDoc*>(m_pDocument); }
#endif

