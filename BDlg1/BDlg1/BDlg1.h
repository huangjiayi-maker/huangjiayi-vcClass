
// BDlg1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBDlg1App: 
// �йش����ʵ�֣������ BDlg1.cpp
//

class CBDlg1App : public CWinApp
{
public:
	CBDlg1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBDlg1App theApp;