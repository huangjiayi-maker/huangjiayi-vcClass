
// JPG12.h : JPG12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CJPG12App:
// �йش����ʵ�֣������ JPG12.cpp
//

class CJPG12App : public CWinApp
{
public:
	CJPG12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CJPG12App theApp;
