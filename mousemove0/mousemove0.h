
// mousemove0.h : mousemove0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cmousemove0App:
// �йش����ʵ�֣������ mousemove0.cpp
//

class Cmousemove0App : public CWinApp
{
public:
	Cmousemove0App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmousemove0App theApp;
