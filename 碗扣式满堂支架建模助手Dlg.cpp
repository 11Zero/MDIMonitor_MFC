// 碗扣式满堂支架建模助手Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "碗扣式满堂支架建模助手.h"
#include "碗扣式满堂支架建模助手Dlg.h"
#include "Set.h"
#include "xSkinButton.h"


CxSkinButton m_button1;
CxSkinButton m_button2;    //介绍
CxSkinButton m_button3;    //退出

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//EnableVisualManagerStyle(TRUE, TRUE);
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg dialog

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	//EnableVisualManagerStyle(TRUE, TRUE);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	DDX_Control(pDX,IDB_Start,m_button1);
	DDX_Control(pDX,IDB_Intro,m_button2);
	DDX_Control(pDX,IDB_Exit,m_button3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDB_Start, OnStart)
	ON_BN_CLICKED(IDB_Intro, OnIntro)
	ON_BN_CLICKED(IDB_Exit, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg message handlers

BOOL CMyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
		m_button1.SetSkin(IDB_PUTONG_WAICENG,IDB_PUTONG_WAICENG,IDB_PUTONG_WAICENG,IDB_MASK_WAICENG,0,IDB_MASK_WAICENG,1,0,0);
		m_button2.SetSkin(IDB_PUTONG_WAICENG,IDB_PUTONG_WAICENG,IDB_PUTONG_WAICENG,IDB_MASK_WAICENG,0,IDB_MASK_WAICENG,1,0,0);
	    m_button3.SetSkin(IDB_PUTONG_WAICENG,IDB_PUTONG_WAICENG,IDB_PUTONG_WAICENG,IDB_MASK_WAICENG,0,IDB_MASK_WAICENG,1,0,0);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{

		CPaintDC   dc(this);   
		CRect   rect;   
		GetClientRect(&rect);   
		CDC   dcMem;   
		dcMem.CreateCompatibleDC(&dc);   
		CBitmap   bmpBackground;   
		bmpBackground.LoadBitmap(IDB_BG_WAI);   
		BITMAP   bitmap;   
		bmpBackground.GetBitmap(&bitmap);   
		CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
		dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
          bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
		CDialog::OnPaint();

       dc.SetTextColor(RGB(255,255,255));
	   dc.SetBkMode(TRANSPARENT);
       dc.TextOut(620,545,"软件版本号:1.0.0");

	   dc.SetTextColor(RGB(255,255,255));
	   dc.SetBkMode(TRANSPARENT);
	   dc.TextOut(260,545,"版权所有:安徽省合肥市合肥工业大学");
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyDlg::OnStart() 
{
  CSet Set1;
  Set1.DoModal();
}

void CMyDlg::OnIntro() 
{
	// TODO: Add your control notification handler code here
	ShellExecute(NULL,_T("open"),_T("帮助文件.docx"),NULL,NULL,SW_SHOWNORMAL);
}

void CMyDlg::OnExit() 
{
	// TODO: Add your control notification handler code here
	if(MessageBox("是否要退出程序?","提示:", MB_YESNO)==IDYES)
	{
		CDialog::OnOK();
	}
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnOK();
}
