
// photo21.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cphoto21App: 
// �йش����ʵ�֣������ photo21.cpp
//

class Cphoto21App : public CWinApp
{
public:
	Cphoto21App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cphoto21App theApp;