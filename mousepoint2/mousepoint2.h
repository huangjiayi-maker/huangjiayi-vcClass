
// mousepoint2.h : mousepoint2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cmousepoint2App:
// �йش����ʵ�֣������ mousepoint2.cpp
//

class Cmousepoint2App : public CWinApp
{
public:
	Cmousepoint2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmousepoint2App theApp;
