
// BDlg0.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBDlg0App: 
// �йش����ʵ�֣������ BDlg0.cpp
//

class CBDlg0App : public CWinApp
{
public:
	CBDlg0App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBDlg0App theApp;