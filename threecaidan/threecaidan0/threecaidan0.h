
// threecaidan0.h : threecaidan0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cthreecaidan0App:
// �йش����ʵ�֣������ threecaidan0.cpp
//

class Cthreecaidan0App : public CWinApp
{
public:
	Cthreecaidan0App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cthreecaidan0App theApp;
