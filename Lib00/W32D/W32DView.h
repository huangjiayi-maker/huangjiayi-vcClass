
// W32DView.h : CW32DView ��Ľӿ�
//

#pragma once


class CW32DView : public CView
{
protected: // �������л�����
	CW32DView();
	DECLARE_DYNCREATE(CW32DView)

// ����
public:
	CW32DDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CW32DView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // W32DView.cpp �еĵ��԰汾
inline CW32DDoc* CW32DView::GetDocument() const
   { return reinterpret_cast<CW32DDoc*>(m_pDocument); }
#endif

