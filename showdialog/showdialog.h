
// showdialog.h : showdialog Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CshowdialogApp:
// �йش����ʵ�֣������ showdialog.cpp
//

class CshowdialogApp : public CWinApp
{
public:
	CshowdialogApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CshowdialogApp theApp;
