
// USingDll.h : USingDll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUSingDllApp:
// �йش����ʵ�֣������ USingDll.cpp
//

class CUSingDllApp : public CWinApp
{
public:
	CUSingDllApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUSingDllApp theApp;
