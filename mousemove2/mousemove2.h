
// mousemove2.h : mousemove2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cmousemove2App:
// �йش����ʵ�֣������ mousemove2.cpp
//

class Cmousemove2App : public CWinApp
{
public:
	Cmousemove2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmousemove2App theApp;
