
// picturepath.h : picturepath Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CpicturepathApp:
// �йش����ʵ�֣������ picturepath.cpp
//

class CpicturepathApp : public CWinApp
{
public:
	CpicturepathApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CpicturepathApp theApp;
