
// JPG00View.h : CJPG00View ��Ľӿ�
//

#pragma once


class CJPG00View : public CView
{
protected: // �������л�����
	CJPG00View();
	DECLARE_DYNCREATE(CJPG00View)

// ����
public:
	CJPG00Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CJPG00View();
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

#ifndef _DEBUG  // JPG00View.cpp �еĵ��԰汾
inline CJPG00Doc* CJPG00View::GetDocument() const
   { return reinterpret_cast<CJPG00Doc*>(m_pDocument); }
#endif

