
// USingDllView.h : CUSingDllView ��Ľӿ�
//

#pragma once


class CUSingDllView : public CView
{
protected: // �������л�����
	CUSingDllView();
	DECLARE_DYNCREATE(CUSingDllView)

// ����
public:
	CUSingDllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUSingDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // USingDllView.cpp �еĵ��԰汾
inline CUSingDllDoc* CUSingDllView::GetDocument() const
   { return reinterpret_cast<CUSingDllDoc*>(m_pDocument); }
#endif

