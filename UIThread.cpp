// UIThread.cpp : implementation file
//

#include "stdafx.h"
#include "Set.h"
#include "UIThread.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUIThread

IMPLEMENT_DYNCREATE(CUIThread, CWinThread)

CUIThread::CUIThread()
{
}

CUIThread::~CUIThread()
{
}

BOOL CUIThread::InitInstance()
{
/*      m_dlg.Create(IDD_DIALOG2);
      m_dlg.ShowWindow(SW_SHOW);*/
      //m_pMainWnd=&m_dlg;
	TestDllDlg();
      return TRUE;
}

int CUIThread::ExitInstance()
{
	//m_dlg.DestroyWindow();
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CUIThread, CWinThread)
	//{{AFX_MSG_MAP(CUIThread)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUIThread message handlers
