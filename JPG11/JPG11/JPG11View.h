
// JPG11View.h : CJPG11View ��Ľӿ�
//

#pragma once


class CJPG11View : public CView
{
protected: // �������л�����
	CJPG11View();
	DECLARE_DYNCREATE(CJPG11View)

// ����
public:
	CJPG11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CJPG11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // JPG11View.cpp �еĵ��԰汾
inline CJPG11Doc* CJPG11View::GetDocument() const
   { return reinterpret_cast<CJPG11Doc*>(m_pDocument); }
#endif

