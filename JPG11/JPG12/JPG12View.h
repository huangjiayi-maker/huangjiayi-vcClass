
// JPG12View.h : CJPG12View ��Ľӿ�
//

#pragma once


class CJPG12View : public CView
{
protected: // �������л�����
	CJPG12View();
	DECLARE_DYNCREATE(CJPG12View)

// ����
public:
	CJPG12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CJPG12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // JPG12View.cpp �еĵ��԰汾
inline CJPG12Doc* CJPG12View::GetDocument() const
   { return reinterpret_cast<CJPG12Doc*>(m_pDocument); }
#endif

