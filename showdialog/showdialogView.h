
// showdialogView.h : CshowdialogView ��Ľӿ�
//

#pragma once


class CshowdialogView : public CView
{
protected: // �������л�����
	CshowdialogView();
	DECLARE_DYNCREATE(CshowdialogView)

// ����
public:
	CshowdialogDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CshowdialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onoutput();
};

#ifndef _DEBUG  // showdialogView.cpp �еĵ��԰汾
inline CshowdialogDoc* CshowdialogView::GetDocument() const
   { return reinterpret_cast<CshowdialogDoc*>(m_pDocument); }
#endif

