
// JPG01.h : JPG01 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CJPG01App:
// �йش����ʵ�֣������ JPG01.cpp
//

class CJPG01App : public CWinApp
{
public:
	CJPG01App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CJPG01App theApp;
