
// showpicture1Doc.h : Cshowpicture1Doc ��Ľӿ�
//


#pragma once
#include "showpicture1Set.h"


class Cshowpicture1Doc : public CDocument
{
protected: // �������л�����
	Cshowpicture1Doc();
	DECLARE_DYNCREATE(Cshowpicture1Doc)

// ����
public:
	Cshowpicture1Set m_showpicture1Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cshowpicture1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
