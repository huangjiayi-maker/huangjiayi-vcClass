
// W32D.h : W32D 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CW32DApp:
// 有关此类的实现，请参阅 W32D.cpp
//

class CW32DApp : public CWinApp
{
public:
	CW32DApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CW32DApp theApp;
