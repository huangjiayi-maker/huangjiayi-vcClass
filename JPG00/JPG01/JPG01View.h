
// JPG01View.h : CJPG01View ��Ľӿ�
//

#pragma once


class CJPG01View : public CView
{
protected: // �������л�����
	CJPG01View();
	DECLARE_DYNCREATE(CJPG01View)

// ����
public:
	CJPG01Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CJPG01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // JPG01View.cpp �еĵ��԰汾
inline CJPG01Doc* CJPG01View::GetDocument() const
   { return reinterpret_cast<CJPG01Doc*>(m_pDocument); }
#endif

