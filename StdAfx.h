// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__76EB26D6_8264_4A05_B0FC_794F84B9A75D__INCLUDED_)
#define AFX_STDAFX_H__76EB26D6_8264_4A05_B0FC_794F84B9A75D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//123456
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT
#pragma comment(lib, "0513dll.lib")
#include "0513dll.h"
#pragma comment(lib, "glut.lib")
#pragma comment(lib, "glut32.lib")
#include "glut.h"

//#pragma comment(lib, "WinGsl.lib")
//#include "WinGsl.h"

//#pragma comment(lib, "BCGCBPRO1610.lib")
//#include "BCG\BCGCBProInc.h"
//#define CFrameWnd CBCGPFrameWnd
//#define CMDIFrameWnd CBCGPMDIFrameWnd
//#define CMDIChildWnd CBCGPMDIChildWnd
//#define CToolBar CBCGPToolBar
//#define CStatusBar CBCGPStatusBar
//#define CDialog CBCGPDialog
//#define CWinApp CBCGPWinApp
//#define CProgressCtrl CBCGPProgressCtrl
//#define CScrollBar CBCGPScrollBar
//#define CButton CBCGPButton	
//#define CEdit CBCGPEdit
//#define CListBox CBCGPListBox
//#define CComboBox CBCGPComboBox
//#define CListCtrl CBCGPListCtrl
//#define CScrollView CBCGPChartView
//#define CTreeCtrl CBCGPShellTree
//#define CToolTipCtrl CBCGPToolTipCtrl
//#define CSpinButtonCtrl CBCGPSpinButtonCtrl
//#define CPropertyPage CBCGPPropertyPage
//#define CHeaderCtrl CBCGPHeaderCtrl
////#define CFileDialog CBCGPFileDialog
//#define CFormView CBCGPFormView
////#define CBitmap CBCGPPngImage
//#define CPropertySheet CBCGPPropertySheet

extern float ZhuJu_X;
extern float BuJu_Z;
extern float DingCengXuanBiChangDu;
extern float SaoDiGanGaoDu;
extern float GangJinHunNingTu;
extern float MoBanFangLeng;
extern float FuJiaGouJian;
extern float RenChaiJi;
extern float JiaoZhuZhenDao;
extern float FengHeZai;
extern float DiYiCiYuYa;
extern float DiErCiYuYa;
extern float DiSanCiYuYa;
extern float DiYiCiJiaoZhu;
extern float DiErCiJiaoZhu;
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__76EB26D6_8264_4A05_B0FC_794F84B9A75D__INCLUDED_)
