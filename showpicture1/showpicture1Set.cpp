
// showpicture1Set.cpp : Cshowpicture1Set ���ʵ��
//

#include "stdafx.h"
#include "showpicture1.h"
#include "showpicture1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cshowpicture1Set ʵ��

// ���������� 2020��5��21��, 21:29

IMPLEMENT_DYNAMIC(Cshowpicture1Set, CRecordset)

Cshowpicture1Set::Cshowpicture1Set(CDatabase* pdb)
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
CString Cshowpicture1Set::GetDefaultConnect()
{
	return _T("DSN=\x5341\x4e00\x5468\x5b9e\x9a8c\x8868;DBQ=D:\\Documents\\11.1ti.picture.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString Cshowpicture1Set::GetDefaultSQL()
{
	return _T("[pictruebiao]");
}

void Cshowpicture1Set::DoFieldExchange(CFieldExchange* pFX)
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
// Cshowpicture1Set ���

#ifdef _DEBUG
void Cshowpicture1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cshowpicture1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

