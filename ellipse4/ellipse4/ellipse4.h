
// ellipse4.h : ellipse4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cellipse4App:
// �йش����ʵ�֣������ ellipse4.cpp
//

class Cellipse4App : public CWinApp
{
public:
	Cellipse4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cellipse4App theApp;
