
// showpicture2Doc.h : Cshowpicture2Doc ��Ľӿ�
//


#pragma once
#include "showpicture2Set.h"


class Cshowpicture2Doc : public CDocument
{
protected: // �������л�����
	Cshowpicture2Doc();
	DECLARE_DYNCREATE(Cshowpicture2Doc)

// ����
public:
	Cshowpicture2Set m_showpicture2Set;

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
	virtual ~Cshowpicture2Doc();
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
