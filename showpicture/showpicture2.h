
// showpicture2.h : showpicture2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cshowpicture2App:
// �йش����ʵ�֣������ showpicture2.cpp
//

class Cshowpicture2App : public CWinApp
{
public:
	Cshowpicture2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cshowpicture2App theApp;
