
// suanshu.h : suanshu Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CsuanshuApp:
// �йش����ʵ�֣������ suanshu.cpp
//

class CsuanshuApp : public CWinApp
{
public:
	CsuanshuApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CsuanshuApp theApp;
