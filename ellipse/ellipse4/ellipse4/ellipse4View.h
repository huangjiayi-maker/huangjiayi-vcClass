
// ellipse4View.h : Cellipse4View ��Ľӿ�
//

#pragma once


class Cellipse4View : public CView
{
protected: // �������л�����
	Cellipse4View();
	DECLARE_DYNCREATE(Cellipse4View)

// ����
public:
	Cellipse4Doc* GetDocument() const;
	int red1, green1, blue1, color, width;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cellipse4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColor();
};

#ifndef _DEBUG  // ellipse4View.cpp �еĵ��԰汾
inline Cellipse4Doc* Cellipse4View::GetDocument() const
   { return reinterpret_cast<Cellipse4Doc*>(m_pDocument); }
#endif

