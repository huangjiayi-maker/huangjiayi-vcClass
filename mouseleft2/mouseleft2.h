
// mouseleft2.h : mouseleft2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cmouseleft2App:
// �йش����ʵ�֣������ mouseleft2.cpp
//

class Cmouseleft2App : public CWinApp
{
public:
	Cmouseleft2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmouseleft2App theApp;