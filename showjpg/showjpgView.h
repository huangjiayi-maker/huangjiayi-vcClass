
// showjpgView.h : CshowjpgView ��Ľӿ�
//

#pragma once


class CshowjpgView : public CView
{
protected: // �������л�����
	CshowjpgView();
	DECLARE_DYNCREATE(CshowjpgView)

// ����
public:
	CshowjpgDoc* GetDocument() const;

// ����
public:
	CImage img;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CshowjpgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnJpgopen();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // showjpgView.cpp �еĵ��԰汾
inline CshowjpgDoc* CshowjpgView::GetDocument() const
   { return reinterpret_cast<CshowjpgDoc*>(m_pDocument); }
#endif

