// ImageGod.h : ImageGod Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CImageGodApp:
// �йش����ʵ�֣������ ImageGod.cpp
//

class CImageGodApp : public CWinApp
{
public:
	CImageGodApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CImageGodApp theApp;