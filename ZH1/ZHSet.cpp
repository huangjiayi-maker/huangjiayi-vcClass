
// ZHSet.cpp : CZHSet 类的实现
//

#include "stdafx.h"
#include "ZH.h"
#include "ZHSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZHSet 实现

// 代码生成在 2020年6月7日, 22:15

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
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
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Long(pFX, _T("[学号]"), column2);
	RFX_Text(pFX, _T("[专业]"), column3);
	RFX_Text(pFX, _T("[性别]"), column4);
	RFX_Long(pFX, _T("[出生年月]"), column5);
	RFX_Long(pFX, _T("[手机号]"), column6);
	RFX_Text(pFX, _T("[住址]"), column7);
	RFX_Text(pFX, _T("[文件名]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CZHSet 诊断

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

