
// docshow������ϰDoc.h : Cdocshow������ϰDoc ��Ľӿ�
//


#pragma once


class Cdocshow������ϰDoc : public CDocument
{
protected: // �������л�����
	Cdocshow������ϰDoc();
	DECLARE_DYNCREATE(Cdocshow������ϰDoc)

// ����
public:

// ����
public:
	CString ss;

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cdocshow������ϰDoc();
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
