
// dlg1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cdlg1App: 
// �йش����ʵ�֣������ dlg1.cpp
//

class Cdlg1App : public CWinApp
{
public:
	Cdlg1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cdlg1App theApp;