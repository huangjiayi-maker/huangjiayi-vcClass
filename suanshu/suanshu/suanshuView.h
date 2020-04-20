
// suanshuView.h : CsuanshuView ��Ľӿ�
//

#pragma once


class CsuanshuView : public CView
{
protected: // �������л�����
	CsuanshuView();
	DECLARE_DYNCREATE(CsuanshuView)

// ����
public:
	CsuanshuDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CsuanshuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPutsum();
	afx_msg void OnPutsubtraction();
	afx_msg void OnPutmul();
	afx_msg void OnPutdivision();
	afx_msg void OnPutsqrt();
	afx_msg void OnPutdaoshu();
};

#ifndef _DEBUG  // suanshuView.cpp �еĵ��԰汾
inline CsuanshuDoc* CsuanshuView::GetDocument() const
   { return reinterpret_cast<CsuanshuDoc*>(m_pDocument); }
#endif

