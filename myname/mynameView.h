
// mynameView.h : CmynameView ��Ľӿ�
//

#pragma once


class CmynameView : public CView
{
protected: // �������л�����
	CmynameView();
	DECLARE_DYNCREATE(CmynameView)

// ����
public:
	CmynameDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CmynameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mynameView.cpp �еĵ��԰汾
inline CmynameDoc* CmynameView::GetDocument() const
   { return reinterpret_cast<CmynameDoc*>(m_pDocument); }
#endif

