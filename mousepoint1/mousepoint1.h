
// mousepoint1.h : mousepoint1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cmousepoint1App:
// �йش����ʵ�֣������ mousepoint1.cpp
//

class Cmousepoint1App : public CWinApp
{
public:
	Cmousepoint1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmousepoint1App theApp;
