
// showjpg.h : showjpg Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CshowjpgApp:
// �йش����ʵ�֣������ showjpg.cpp
//

class CshowjpgApp : public CWinApp
{
public:
	CshowjpgApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CshowjpgApp theApp;
