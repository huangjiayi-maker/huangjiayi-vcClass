
// ZHSet.cpp : CZHSet ���ʵ��
//

#include "stdafx.h"
#include "ZH.h"
#include "ZHSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZHSet ʵ��

// ���������� 2020��6��7��, 22:15

IMPLEMENT_DYNAMIC(CZHSet, CRecordset)

CZHSet::CZHSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = 0;
	column3 = L"";
	column4 = L"";
	column5 = 0;
	column6 = 0;
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CZHSet::GetDefaultConnect()
{
	return _T("DSN=ZH;DBQ=D:\\Documents\\ZH.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CZHSet::GetDefaultSQL()
{
	return _T("[ZH]");
}

void CZHSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Long(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Long(pFX, _T("[��������]"), column5);
	RFX_Long(pFX, _T("[�ֻ���]"), column6);
	RFX_Text(pFX, _T("[סַ]"), column7);
	RFX_Text(pFX, _T("[�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CZHSet ���

#ifdef _DEBUG
void CZHSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CZHSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

