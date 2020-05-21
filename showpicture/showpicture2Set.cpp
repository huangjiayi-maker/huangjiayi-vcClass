
// showpicture2Set.cpp : Cshowpicture2Set ���ʵ��
//

#include "stdafx.h"
#include "showpicture2.h"
#include "showpicture2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cshowpicture2Set ʵ��

// ���������� 2020��5��21��, 22:25

IMPLEMENT_DYNAMIC(Cshowpicture2Set, CRecordset)

Cshowpicture2Set::Cshowpicture2Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cshowpicture2Set::GetDefaultConnect()
{
	return _T("DSN=\x5341\x4e00\x5468\x5b9e\x9a8c\x8868;DBQ=D:\\Documents\\11.1ti.picture.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cshowpicture2Set::GetDefaultSQL()
{
	return _T("[pictruebiao]");
}

void Cshowpicture2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[�Ա�]"), column2);
	RFX_Text(pFX, _T("[·��]"), column3);

}
/////////////////////////////////////////////////////////////////////////////
// Cshowpicture2Set ���

#ifdef _DEBUG
void Cshowpicture2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cshowpicture2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

