
// picturepathSet.cpp : CpicturepathSet ���ʵ��
//

#include "stdafx.h"
#include "picturepath.h"
#include "picturepathSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CpicturepathSet ʵ��

// ���������� 2020��5��19��, 20:49

IMPLEMENT_DYNAMIC(CpicturepathSet, CRecordset)

CpicturepathSet::CpicturepathSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CpicturepathSet::GetDefaultConnect()
{
	return _T("DSN=picturepath\x8868;DBQ=D:\\Documents\\picturebiao.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CpicturepathSet::GetDefaultSQL()
{
	return _T("[picturepath]");
}

void CpicturepathSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// CpicturepathSet ���

#ifdef _DEBUG
void CpicturepathSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CpicturepathSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

