
// Z3Set.cpp : CZ3Set ���ʵ��
//

#include "stdafx.h"
#include "Z3.h"
#include "Z3Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZ3Set ʵ��

// ���������� 2020��6��7��, 16:56

IMPLEMENT_DYNAMIC(CZ3Set, CRecordset)

CZ3Set::CZ3Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_math = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CZ3Set::GetDefaultConnect()
{
	return _T("DSN=Z3;DBQ=D:\\Documents\\z3.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CZ3Set::GetDefaultSQL()
{
	return _T("[z3]");
}

void CZ3Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[math]"), m_math);

}
/////////////////////////////////////////////////////////////////////////////
// CZ3Set ���

#ifdef _DEBUG
void CZ3Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CZ3Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

