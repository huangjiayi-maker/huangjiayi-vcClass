
// showpicture1.h : showpicture1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cshowpicture1App:
// �йش����ʵ�֣������ showpicture1.cpp
//

class Cshowpicture1App : public CWinApp
{
public:
	Cshowpicture1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cshowpicture1App theApp;
