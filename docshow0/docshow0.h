
// docshow0.h : docshow0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cdocshow0App:
// �йش����ʵ�֣������ docshow0.cpp
//

class Cdocshow0App : public CWinApp
{
public:
	Cdocshow0App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdocshow0App theApp;
