
// ellipse2.h : ellipse2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cellipse2App:
// �йش����ʵ�֣������ ellipse2.cpp
//

class Cellipse2App : public CWinApp
{
public:
	Cellipse2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cellipse2App theApp;
