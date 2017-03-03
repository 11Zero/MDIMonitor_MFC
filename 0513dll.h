// 0513dll.h : main header file for the 0513DLL DLL
//

#if !defined(AFX_0513DLL_H__D264888B_804A_448E_AC5F_7FAB0D24E5C0__INCLUDED_)
#define AFX_0513DLL_H__D264888B_804A_448E_AC5F_7FAB0D24E5C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#define DLLExport __declspec(dllexport)
//设置配置文件目录位置
extern "C" DLLExport int TestDllDlg();
/////////////////////////////////////////////////////////////////////////////
// CMy0513dllApp
// See 0513dll.cpp for the implementation of this class
//

class CMy0513dllApp : public CWinApp
{
public:
	void ShowDlg();
	CMy0513dllApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy0513dllApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CMy0513dllApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_0513DLL_H__D264888B_804A_448E_AC5F_7FAB0D24E5C0__INCLUDED_)
