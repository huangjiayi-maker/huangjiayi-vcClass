
// docshow课外练习.h : docshow课外练习 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cdocshow课外练习App:
// 有关此类的实现，请参阅 docshow课外练习.cpp
//

class Cdocshow课外练习App : public CWinApp
{
public:
	Cdocshow课外练习App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdocshow课外练习App theApp;
