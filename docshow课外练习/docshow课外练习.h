
// docshow������ϰ.h : docshow������ϰ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cdocshow������ϰApp:
// �йش����ʵ�֣������ docshow������ϰ.cpp
//

class Cdocshow������ϰApp : public CWinApp
{
public:
	Cdocshow������ϰApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdocshow������ϰApp theApp;
