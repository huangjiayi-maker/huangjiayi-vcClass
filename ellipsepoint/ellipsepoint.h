
// ellipsepoint.h : ellipsepoint Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CellipsepointApp:
// �йش����ʵ�֣������ ellipsepoint.cpp
//

class CellipsepointApp : public CWinApp
{
public:
	CellipsepointApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CellipsepointApp theApp;