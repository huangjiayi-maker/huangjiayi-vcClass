
// ecllipse1.h : ecllipse1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cecllipse1App:
// �йش����ʵ�֣������ ecllipse1.cpp
//

class Cecllipse1App : public CWinApp
{
public:
	Cecllipse1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cecllipse1App theApp;
