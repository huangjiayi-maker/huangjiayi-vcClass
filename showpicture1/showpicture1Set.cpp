
// showpicture1Set.cpp : Cshowpicture1Set 类的实现
//

#include "stdafx.h"
#include "showpicture1.h"
#include "showpicture1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cshowpicture1Set 实现

// 代码生成在 2020年5月21日, 21:29

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
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
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
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Text(pFX, _T("[性别]"), column2);
	RFX_Text(pFX, _T("[路径]"), column3);

}
/////////////////////////////////////////////////////////////////////////////
// Cshowpicture1Set 诊断

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

