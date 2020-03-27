
// weituView.h : CweituView ��Ľӿ�
//

#pragma once


class CweituView : public CView
{
protected: // �������л�����
	CweituView();
	DECLARE_DYNCREATE(CweituView)

// ����
public:
	CweituDoc* GetDocument() const;

// ����
public:

	CBitmap  m_bitmap;
	int m_nwidth;
	int m_nheight;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CweituView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // weituView.cpp �еĵ��԰汾
inline CweituDoc* CweituView::GetDocument() const
   { return reinterpret_cast<CweituDoc*>(m_pDocument); }
#endif

