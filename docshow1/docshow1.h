
// docshow1.h : docshow1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cdocshow1App:
// �йش����ʵ�֣������ docshow1.cpp
//

class Cdocshow1App : public CWinApp
{
public:
	Cdocshow1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdocshow1App theApp;
