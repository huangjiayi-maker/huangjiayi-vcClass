
// threecaidan.h : threecaidan Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CthreecaidanApp:
// �йش����ʵ�֣������ threecaidan.cpp
//

class CthreecaidanApp : public CWinApp
{
public:
	CthreecaidanApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CthreecaidanApp theApp;
