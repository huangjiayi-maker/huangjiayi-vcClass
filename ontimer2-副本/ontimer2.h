
// ontimer2.h : ontimer2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Contimer2App:
// �йش����ʵ�֣������ ontimer2.cpp
//

class Contimer2App : public CWinApp
{
public:
	Contimer2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Contimer2App theApp;
