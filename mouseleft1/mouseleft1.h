
// mouseleft1.h : mouseleft1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cmouseleft1App:
// �йش����ʵ�֣������ mouseleft1.cpp
//

class Cmouseleft1App : public CWinApp
{
public:
	Cmouseleft1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmouseleft1App theApp;
