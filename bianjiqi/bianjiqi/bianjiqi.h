
// bianjiqi.h : bianjiqi Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CbianjiqiApp:
// �йش����ʵ�֣������ bianjiqi.cpp
//

class CbianjiqiApp : public CWinApp
{
public:
	CbianjiqiApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CbianjiqiApp theApp;
