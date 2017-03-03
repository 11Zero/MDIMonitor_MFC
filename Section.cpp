// Section.cpp : implementation file
//

#include "stdafx.h"
#include "碗扣式满堂支架建模助手.h"
#include "Section.h"
#include <windows.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSection dialog

CSection::CSection(CWnd* pParent /*=NULL*/)
: CDialog(CSection::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSection)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	//EnableVisualManagerStyle(TRUE, TRUE);
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}
	/*m_HO1 = _T("");
	m_HO2 = _T("");
	m_HO3 = _T("");
	m_BO1 = _T("");
	m_BO2 = _T("");
	m_BO3 = _T("");
	m_BO4 = _T("");
	m_BO5 = _T("");
	m_BO6 = _T("");*/
	/*DDX_Text(pDX, IDC_EDIT_HO1, m_HO1);
	DDX_Text(pDX, IDC_EDIT_HO2, m_HO2);
	DDX_Text(pDX, IDC_EDIT_HO3, m_HO3);
	DDX_Text(pDX, IDC_EDIT_BO1, m_BO1);
	DDX_Text(pDX, IDC_EDIT_BO2, m_BO2);
	DDX_Text(pDX, IDC_EDIT_BO3, m_BO3);
	DDX_Text(pDX, IDC_EDIT_BO4, m_BO4);
	DDX_Text(pDX, IDC_EDIT_BO5, m_BO5);
	DDX_Text(pDX, IDC_EDIT_BO6, m_BO6);*/

void CSection::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSection)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSection, CDialog)
//{{AFX_MSG_MAP(CSection)
ON_WM_PAINT()
ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	ON_BN_CLICKED(ID_BTN_AUTORUN, OnBtnAutorun)
	ON_BN_CLICKED(ID_BTN_STOP, OnBtnStop)
	ON_EN_CHANGE(IDC_EDIT_H01, OnChangeEditH01)
	ON_EN_CHANGE(IDC_EDIT_H02, OnChangeEditH02)
	ON_EN_CHANGE(IDC_EDIT_H03, OnChangeEditH03)
	ON_EN_CHANGE(IDC_EDIT_B01, OnChangeEditB01)
	ON_EN_CHANGE(IDC_EDIT_B02, OnChangeEditB02)
	ON_EN_CHANGE(IDC_EDIT_B03, OnChangeEditB03)
	ON_EN_CHANGE(IDC_EDIT_B04, OnChangeEditB04)
	ON_EN_CHANGE(IDC_EDIT_B05, OnChangeEditB05)
	ON_EN_CHANGE(IDC_EDIT_B06, OnChangeEditB06)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_MOUSEWHEEL()
	ON_CBN_SELCHANGE(IDC_SECTION_CATEGORY, OnSelchangeSectionCategory)
	ON_EN_CHANGE(IDC_EDIT_H11, OnChangeEditH11)
	ON_EN_CHANGE(IDC_EDIT_H12, OnChangeEditH12)
	ON_EN_CHANGE(IDC_EDIT_H21, OnChangeEditH21)
	ON_EN_CHANGE(IDC_EDIT_H22, OnChangeEditH22)
	ON_EN_CHANGE(IDC_EDIT_0H11, OnChangeEdit0h11)
	ON_EN_CHANGE(IDC_EDIT_0B11, OnChangeEdit0b11)
	ON_EN_CHANGE(IDC_EDIT_0H12, OnChangeEdit0h12)
	ON_EN_CHANGE(IDC_EDIT_0B12, OnChangeEdit0b12)
	ON_EN_CHANGE(IDC_EDIT_0H21, OnChangeEdit0h21)
	ON_EN_CHANGE(IDC_EDIT_0B21, OnChangeEdit0b21)
	ON_EN_CHANGE(IDC_EDIT_0H22, OnChangeEdit0h22)
	ON_EN_CHANGE(IDC_EDIT_0B22, OnChangeEdit0b22)
	ON_EN_CHANGE(IDC_EDIT_0H31, OnChangeEdit0h31)
	ON_EN_CHANGE(IDC_EDIT_0B31, OnChangeEdit0b31)
	ON_EN_CHANGE(IDC_EDIT_0H32, OnChangeEdit0h32)
	ON_EN_CHANGE(IDC_EDIT_0B32, OnChangeEdit0b32)
	ON_EN_CHANGE(IDC_EDIT_0H41, OnChangeEdit0h41)
	ON_EN_CHANGE(IDC_EDIT_0B41, OnChangeEdit0b41)
	ON_EN_CHANGE(IDC_EDIT_0H42, OnChangeEdit0h42)
	ON_EN_CHANGE(IDC_EDIT_0B42, OnChangeEdit0b42)
	ON_BN_CLICKED(IDC_CHECK_TXT, OnCheckTxt)
	ON_EN_CHANGE(IDC_EDIT_LENGTH, OnChangeEditLength)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSection message handlers

BOOL CSection::OnInitDialog()
{
	CDialog::OnInitDialog();
	InitDate();

	if(FALSE == InitPic())
		return 0;
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSection::OnPaint() 
{
	//RenderScene();
	//RenderScene(0,0);
	RenderScene(CurX,CurY);
	//SwapBuffers(hrenderDC);
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
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSection::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


BOOL CSection::SetWindowPixelFormat(HDC hDC) 
{ 
	PIXELFORMATDESCRIPTOR pixelDesc; 
	
	pixelDesc.nSize = sizeof(PIXELFORMATDESCRIPTOR); 
	pixelDesc.nVersion = 1; 
	
	pixelDesc.dwFlags = PFD_DRAW_TO_WINDOW |  
		PFD_SUPPORT_OPENGL | 
		PFD_DOUBLEBUFFER | 
		PFD_TYPE_RGBA; 
	
	pixelDesc.iPixelType = PFD_TYPE_RGBA; 
	pixelDesc.cColorBits = 32; 
	pixelDesc.cRedBits = 0; 
	pixelDesc.cRedShift = 0; 
	pixelDesc.cGreenBits = 0; 
	pixelDesc.cGreenShift = 0; 
	pixelDesc.cBlueBits = 0; 
	pixelDesc.cBlueShift = 0; 
	pixelDesc.cAlphaBits = 0; 
	pixelDesc.cAlphaShift = 0; 
	pixelDesc.cAccumBits = 0; 
	pixelDesc.cAccumRedBits = 0; 
	pixelDesc.cAccumGreenBits = 0; 
	pixelDesc.cAccumBlueBits = 0; 
	pixelDesc.cAccumAlphaBits = 0; 
	pixelDesc.cDepthBits = 0; 
	pixelDesc.cStencilBits = 1; 
	pixelDesc.cAuxBuffers = 0; 
	pixelDesc.iLayerType = PFD_MAIN_PLANE; 
	pixelDesc.bReserved = 0; 
	pixelDesc.dwLayerMask = 0; 
	pixelDesc.dwVisibleMask = 0; 
	pixelDesc.dwDamageMask = 0; 
	
	PixelFormat = ChoosePixelFormat(hDC,&pixelDesc); 
	if(PixelFormat==0) // Choose default 
	{ 
		PixelFormat = 1; 
		if(DescribePixelFormat(hDC,PixelFormat, 
			sizeof(PIXELFORMATDESCRIPTOR),&pixelDesc)==0) 
		{ 
			return FALSE; 
		} 
	} 
	
	if(SetPixelFormat(hDC,PixelFormat,&pixelDesc)==FALSE) 
		
	{  
		return FALSE; 
	} 
	
	return TRUE; 
}


BOOL CSection::CreateViewGLContext(HDC hDC) 
{ 
	hrenderRC = wglCreateContext(hDC); 
	
	if(hrenderRC==NULL) 
		return FALSE; 	
	if(wglMakeCurrent(hDC,hrenderRC)==FALSE) 
		return FALSE; 
	return TRUE; 
}

void CSection::RenderScene(double x,double y)    
{ 
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	
	
	glLoadIdentity(); 
	glScalef(ScralSize,ScralSize,0.0);
	xTimes = 1.4;
	yTimes = 0.9;
	switch(SelectFlag)
	{
	case 0:
		{
			xLength = 2*B01+2*B02+B03;
		}break;
	case 1:
		{
			xLength = 2*B01+2*B02+2*B03+B04;
		}break;
	case 2:
		{
			xLength = 2*B01+2*B02+2*B03+2*B04+B05;
		}break;
	case 3:
		{
			xLength = 2*B01+2*B02+2*B03+2*B04+2*B05+B06;
		}break;
	}

	yLength = H01+H02+H03;
	xRange = xTimes/xLength;
	yRange = yTimes/yLength;
	glTranslatef(x*1.0f,y*1.0f,0.0f);
	
	
	glTranslatef(-xTimes/2,yTimes/2,0);
	glColor3f(1.0f,1.0f,1.0f);//设置当前色为白色
	float tempX=0.0,tempY=0.0;
	switch(SelectFlag)
	{
	case 0:
		{		
			glBegin(GL_LINE_LOOP);
			tempX=0.0,tempY=0.0;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY-H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H03;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B02+B03+B02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H03;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY+H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();//此后添加截面中部轮廓
			
			
			glBegin(GL_LINE_LOOP);
			tempX=B01+B02,tempY=-h11-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h12-h11-H11-H12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY-h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b12-b12;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY+h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h11-h12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b11,tempY=tempY+h11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b11-b11);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();
			
			tempX=0-50*xTimes/ScralSize,tempY=0;
			DrawLine(tempX,tempY,H01,1);
			DrawCNString("H01",tempX-50*xTimes/yTimes/ScralSize,tempY-H01*1/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H01;
			DrawLine(tempX,tempY,H02,1);
			DrawCNString("H02",tempX-50*xTimes/yTimes/ScralSize,tempY-H02/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H02;
			DrawLine(tempX,tempY,H03,1);
			DrawCNString("H03",tempX-50*xTimes/yTimes/ScralSize,tempY-H03/2-4*yTimes/xTimes/ScralSize);
			tempX=0,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B01,0);
			DrawCNString("B01",tempX+B01/2-20*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B01,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B02,0);
			DrawCNString("B02",tempX+B02/2-20*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B02,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B03,0);
			DrawCNString("B03",tempX+B03/2-32*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);


			tempX=B01+B02+b11+(B03-b11-b21)/2,tempY=0;
			DrawLine(tempX,tempY,H11,1);
			DrawCNString("H11",tempX-50*xTimes/yTimes/ScralSize,tempY-H11/2-4*yTimes/xTimes/ScralSize);
			tempX=B01+B02+b12+(B03-b12-b22)/2,tempY=-(H01+H02+H03-H12);
			DrawLine(tempX,tempY,H12,1);
			DrawCNString("H12",tempX-50*xTimes/yTimes/ScralSize,tempY-H12/2-4*yTimes/xTimes/ScralSize);

			tempX=B01+B02+b11*2/3,tempY=-(H11+h11/2);
			DrawCNString("(1,1)",tempX,tempY);
			tempX=B01+B02+b12*2/3,tempY=-(H01+H02+H03-H12-h12/2);
			DrawCNString("(1,2)",tempX,tempY);

		}break;
	case 1:
		{
			glBegin(GL_LINE_LOOP);
			tempX=0.0,tempY=0.0;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY-H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H03;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+2*B02+2*B03+B04;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H03;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY+H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();//此后添加截面中部轮廓
			
			
			glBegin(GL_LINE_LOOP);
			tempX=B01+B02,tempY=-h11-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h12-h11-H11-H12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY-h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b12-b22;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b22,tempY=tempY+h22;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h21-h22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b21,tempY=tempY+h21;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b11-b21);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();

			glBegin(GL_LINE_LOOP);
			tempX=B01+B02+B03+B04,tempY=-h21-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-H12-H11-h21-h22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b22,tempY=tempY-h22;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b22-b12;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY+h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h11-h12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b11,tempY=tempY+h11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b21-b11);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();


			tempX=0-50*xTimes/ScralSize,tempY=0;
			DrawLine(tempX,tempY,H01,1);
			DrawCNString("H01",tempX-70*xTimes/yTimes/ScralSize,tempY-H01*1/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H01;
			DrawLine(tempX,tempY,H02,1);
			DrawCNString("H02",tempX-70*xTimes/yTimes/ScralSize,tempY-H02/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H02;
			DrawLine(tempX,tempY,H03,1);
			DrawCNString("H03",tempX-70*xTimes/yTimes/ScralSize,tempY-H03/2-4*yTimes/xTimes/ScralSize);
			tempX=0,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B01,0);
			DrawCNString("B01",tempX+B01/2-32*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B01,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B02,0);
			DrawCNString("B02",tempX+B02/2-32*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B02,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B03,0);
			DrawCNString("B03",tempX+B03/2-32*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B03,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B04,0);
			DrawCNString("B04",tempX+B04/2-32*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);


			tempX=B01+B02+b11+(B03-b11-b21)/2,tempY=0;
			DrawLine(tempX,tempY,H11,1);
			DrawCNString("H11",tempX-70*xTimes/yTimes/ScralSize,tempY-H11/2-4*yTimes/xTimes/ScralSize);
			tempX=B01+B02+b12+(B03-b12-b22)/2,tempY=-(H01+H02+H03-H12);
			DrawLine(tempX,tempY,H12,1);
			DrawCNString("H12",tempX-70*xTimes/yTimes/ScralSize,tempY-H12/2-4*yTimes/xTimes/ScralSize);
			
			tempX=B01+B02+b11*2/3,tempY=-(H11+h11/2);
			DrawCNString("(1,1)",tempX,tempY);
			tempX=B01+B02+b12*2/3,tempY=-(H01+H02+H03-H12-h12/2);
			DrawCNString("(1,2)",tempX,tempY);
			tempX=B01+B02+B03+b21*2/3-80*xTimes,tempY=-(H11+h21/2);
			DrawCNString("(2,1)",tempX,tempY);
			tempX=B01+B02+B03+b22*2/3-80*xTimes,tempY=-(H01+H02+H03-H12-h22/2);
			DrawCNString("(2,2)",tempX,tempY);
		}break;
	case 2:
		{
			glBegin(GL_LINE_LOOP);
			tempX=0.0,tempY=0.0;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY-H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H03;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+2*B02+2*B03+2*B04+B05;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H03;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY+H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();//此后添加截面中部轮廓
			
			
			glBegin(GL_LINE_LOOP);
			tempX=B01+B02,tempY=-h11-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h12-h11-H11-H12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY-h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b12-b22;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b22,tempY=tempY+h22;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h21-h22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b21,tempY=tempY+h21;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b11-b21);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();
		
			glBegin(GL_LINE_LOOP);
			tempX=B01+B02+B03+B04,tempY=-h31-H21;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h32-h31-H21-H22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b32,tempY=tempY-h32;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B05-b32-b32;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b32,tempY=tempY+h32;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H21-H22-h31-h32);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b31,tempY=tempY+h31;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B05-b31-b31);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();

			glBegin(GL_LINE_LOOP);
			tempX=B01+B02+B03+2*B04+B05,tempY=-h21-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-H12-H11-h21-h22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b22,tempY=tempY-h22;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b22-b12;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY+h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h11-h12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b11,tempY=tempY+h11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b21-b11);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();
			
			tempX=0-50*xTimes/ScralSize,tempY=0;
			DrawLine(tempX,tempY,H01,1);
			DrawCNString("H01",tempX-80*xTimes/yTimes/ScralSize,tempY-H01*1/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H01;
			DrawLine(tempX,tempY,H02,1);
			DrawCNString("H02",tempX-80*xTimes/yTimes/ScralSize,tempY-H02/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H02;
			DrawLine(tempX,tempY,H03,1);
			DrawCNString("H03",tempX-80*xTimes/yTimes/ScralSize,tempY-H03/2-4*yTimes/xTimes/ScralSize);
			tempX=0,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B01,0);
			DrawCNString("B01",tempX+B01/2-40*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B01,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B02,0);
			DrawCNString("B02",tempX+B02/2-40*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B02,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B03,0);
			DrawCNString("B03",tempX+B03/2-40*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B03,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B04,0);
			DrawCNString("B04",tempX+B04/2-40*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B04,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B05,0);
			DrawCNString("B05",tempX+B05/2-40*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);


			tempX=B01+B02+b11+(B03-b11-b21)/2,tempY=0;
			DrawLine(tempX,tempY,H11,1);
			DrawCNString("H11",tempX-80*xTimes/yTimes/ScralSize,tempY-H11/2-6*yTimes/xTimes/ScralSize);
			tempX=B01+B02+b12+(B03-b12-b22)/2,tempY=-(H01+H02+H03-H12);
			DrawLine(tempX,tempY,H12,1);
			DrawCNString("H12",tempX-80*xTimes/yTimes/ScralSize,tempY-H12/2-6*yTimes/xTimes/ScralSize);
			tempX=B01+B02+B03+B04+b31+(B03-b31-b21)/2,tempY=0;
			DrawLine(tempX,tempY,H21,1);
			DrawCNString("H21",tempX-80*xTimes/yTimes/ScralSize,tempY-H21/2-6*yTimes/xTimes/ScralSize);
			tempX=B01+B02+B03+B04+b32+(B03-b32-b22)/2,tempY=-(H01+H02+H03-H22);
			DrawLine(tempX,tempY,H22,1);
			DrawCNString("H22",tempX-80*xTimes/yTimes/ScralSize,tempY-H22/2-6*yTimes/xTimes/ScralSize);


			tempX=B01+B02+b11*2/3,tempY=-(H11+h11/2);
			DrawCNString("(1,1)",tempX,tempY);
			tempX=B01+B02+b12*2/3,tempY=-(H01+H02+H03-H12-h12/2);
			DrawCNString("(1,2)",tempX,tempY);
			tempX=B01+B02+B03+b21*2/3-80*xTimes,tempY=-(H11+h21/2);
			DrawCNString("(2,1)",tempX,tempY);
			tempX=B01+B02+B03+b22*2/3-80*xTimes,tempY=-(H01+H02+H03-H12-h22/2);
			DrawCNString("(2,2)",tempX,tempY);
			tempX=B01+B02+B03+B04+b31*2/3,tempY=-(H21+h31/2);
			DrawCNString("(3,1)",tempX,tempY);
			tempX=B01+B02+B03+B04+b32*2/3,tempY=-(H01+H02+H03-H22-h32/2);
			DrawCNString("(3,2)",tempX,tempY);
		}break;
	case 3:
		{
			glBegin(GL_LINE_LOOP);
			tempX=0.0,tempY=0.0;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY-H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-H03;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+2*B02+2*B03+2*B04+2*B05+B06;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H03;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B01,tempY=tempY+H02;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+H01;
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();//此后添加截面中部轮廓
			
			
			glBegin(GL_LINE_LOOP);
			tempX=B01+B02,tempY=-h11-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h12-h11-H11-H12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY-h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b12-b22;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b22,tempY=tempY+h22;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h21-h22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b21,tempY=tempY+h21;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b11-b21);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();

			glBegin(GL_LINE_LOOP);
			tempX=B01+B02+B03+B04,tempY=-h31-H21;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h32-h31-H21-H22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b32,tempY=tempY-h32;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B05-b32-b42;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b42,tempY=tempY+h42;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H21-H22-h41-h42);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b41,tempY=tempY+h41;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B05-b31-b41);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();

			glBegin(GL_LINE_LOOP);
			tempX=B01+B02+B03+B04+B05+B06,tempY=-h41-H21;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h42-h41-H21-H22);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b42,tempY=tempY-h42;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B05-b42-b32;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b32,tempY=tempY+h32;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H21-H22-h31-h32);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b31,tempY=tempY+h31;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B05-b41-b31);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();
		
			glBegin(GL_LINE_LOOP);
			tempX=B01+B02+B03+2*B04+2*B05+B06,tempY=-h21-H11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY-(H01+H02+H03-h22-h21-H11-H12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b22,tempY=tempY-h22;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+B03-b22-b12;			
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX+b12,tempY=tempY+h12;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempY=tempY+(H01+H02+H03-H11-H12-h11-h12);
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-b11,tempY=tempY+h11;
			glVertex2f(tempX*xRange,tempY*yRange);
			tempX=tempX-(B03-b21-b11);
			glVertex2f(tempX*xRange,tempY*yRange);
			glEnd();

			tempX=0-50*xTimes/ScralSize,tempY=0;
			DrawLine(tempX,tempY,H01,1);
			DrawCNString("H01",tempX-100*xTimes/yTimes/ScralSize,tempY-H01*1/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H01;
			DrawLine(tempX,tempY,H02,1);
			DrawCNString("H02",tempX-100*xTimes/yTimes/ScralSize,tempY-H02/2-4*yTimes/xTimes/ScralSize);
			tempY=tempY-H02;
			DrawLine(tempX,tempY,H03,1);
			DrawCNString("H03",tempX-100*xTimes/yTimes/ScralSize,tempY-H03/2-4*yTimes/xTimes/ScralSize);
			tempX=0,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B01,0);
			DrawCNString("B01",tempX+B01/2-50*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B01,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B02,0);
			DrawCNString("B02",tempX+B02/2-50*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B02,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B03,0);
			DrawCNString("B03",tempX+B03/2-50*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B03,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B04,0);
			DrawCNString("B04",tempX+B04/2-50*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B04,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B05,0);
			DrawCNString("B05",tempX+B05/2-50*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);
			tempX=tempX+B05,tempY=-(H01+H02+H03)-50*yTimes/xTimes/ScralSize;
			DrawLine(tempX,tempY,B06,0);
			DrawCNString("B06",tempX+B06/2-50*xTimes/yTimes/ScralSize,tempY-20*yTimes/xTimes/ScralSize);


			tempX=B01+B02+b11+(B03-b11-b21)/2,tempY=0;
			DrawLine(tempX,tempY,H11,1);
			DrawCNString("H11",tempX-100*xTimes/yTimes/ScralSize,tempY-H11/2-6*yTimes/xTimes/ScralSize);
			tempX=B01+B02+b12+(B03-b12-b22)/2,tempY=-(H01+H02+H03-H12);
			DrawLine(tempX,tempY,H12,1);
			DrawCNString("H12",tempX-100*xTimes/yTimes/ScralSize,tempY-H12/2-6*yTimes/xTimes/ScralSize);
			tempX=B01+B02+B03+B04+b31+(B03-b31-b21)/2,tempY=0;
			DrawLine(tempX,tempY,H21,1);
			DrawCNString("H21",tempX-100*xTimes/yTimes/ScralSize,tempY-H21/2-6*yTimes/xTimes/ScralSize);
			tempX=B01+B02+B03+B04+b32+(B03-b32-b22)/2,tempY=-(H01+H02+H03-H22);
			DrawLine(tempX,tempY,H22,1);
			DrawCNString("H22",tempX-100*xTimes/yTimes/ScralSize,tempY-H22/2-6*yTimes/xTimes/ScralSize);
			
			tempX=B01+B02+b11*2/3,tempY=-(H11+h11/2);
			DrawCNString("(1,1)",tempX,tempY);
			tempX=B01+B02+b12*2/3,tempY=-(H01+H02+H03-H12-h12/2);
			DrawCNString("(1,2)",tempX,tempY);
			tempX=B01+B02+B03+b21*2/3-80*xTimes,tempY=-(H11+h21/2);
			DrawCNString("(2,1)",tempX,tempY);
			tempX=B01+B02+B03+b22*2/3-80*xTimes,tempY=-(H01+H02+H03-H12-h22/2);
			DrawCNString("(2,2)",tempX,tempY);
			tempX=B01+B02+B03+B04+b31*2/3,tempY=-(H21+h31/2);
			DrawCNString("(3,1)",tempX,tempY);
			tempX=B01+B02+B03+B04+b32*2/3,tempY=-(H01+H02+H03-H22-h32/2);
			DrawCNString("(3,2)",tempX,tempY);
			tempX=B01+B02+B03+B04+B05+b41*2/3-80*xTimes,tempY=-(H21+h41/2);
			DrawCNString("(4,1)",tempX,tempY);
			tempX=B01+B02+B03+B04+B05+b42*2/3-80*xTimes,tempY=-(H01+H02+H03-H22-h42/2);
			DrawCNString("(4,2)",tempX,tempY);
		}break;
	}
	SwapBuffers(hrenderDC); 
}

BOOL CSection::InitPic()
{
	CWnd *wnd = GetDlgItem(IDC_RENDER);//IDC_RENDER为picture控件ID
    hrenderDC=::GetDC(wnd->m_hWnd); 
	if(SetWindowPixelFormat(hrenderDC)==FALSE) 
		return 0; 
	if(CreateViewGLContext(hrenderDC)==FALSE) 
		return 0; 
	CRect rc;
	wnd->GetClientRect(&rc);//rc为控件的大小。
	glViewport(0, 0, (GLsizei)(rc.Width()), (GLsizei)(rc.Height())); 
    glMatrixMode(GL_PROJECTION); 
    glEnableClientState(GL_VERTEX_ARRAY); 
    glEnableClientState(GL_TEXTURE_COORD_ARRAY); 
	return TRUE;

}

void CSection::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	if(nIDEvent==1)
	{
		m_yRotate +=3; 
		RenderScene((rand()%10)/5.0,(rand()%10)/5.0);
	}
	CDialog::OnTimer(nIDEvent);
}

void CSection::OnBtnAutorun() 
{
	//m_yRotate +=0.03f;
	//RenderScene();
	//Invalidate();
	RenderScene(-(rand()%10)/5.0+1.0,-(rand()%10)/5.0+1.0);
	//SetTimer(1,100,NULL);
}

void CSection::OnBtnStop() 
{
	KillTimer(1);	
}


void CSection::DrawString(const char* str)
{
    static int isFirstCall = 1;
    static GLuint lists;
	return;
    if( isFirstCall ) { // 如果是第一次调用，执行初始化
                        // 为每一个ASCII字符产生一个显示列表
        isFirstCall = 0;

        // 申请MAX_CHAR个连续的显示列表编号
        lists = glGenLists(128);

        // 把每个字符的绘制命令都装到对应的显示列表中
        wglUseFontBitmapsW(wglGetCurrentDC(), 0, 128, lists);
    }
    // 调用每个字符对应的显示列表，绘制每个字符
    for(; *str!='\0'; ++str)
        glCallList(lists + *str);
}


void CSection::DrawCNString(const char* str,int x,int y) 
{
	if(CharFlag==FALSE)
		return;
	glColor3f(0.0f, 1.0f, 0.0f);
    int len, i;
    wchar_t* wstring;
	HDC hDC = wglGetCurrentDC();
	GLuint list = glGenLists(1);
	glRasterPos2f(x*xRange,y*yRange);

	// 计算字符的个数
	// 如果是双字节字符的（比如中文字符），两个字节才算一个字符
	// 否则一个字节算一个字符
	len = 0;
    for(i=0; str[i]!='\0'; ++i)
	{
        if( IsDBCSLeadByte(str[i]) )
			++i;
		++len;
	}
	
	// 将混合字符转化为宽字符
    wstring = (wchar_t*)malloc((len+1) * sizeof(wchar_t));
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str, -1, wstring, len);
    wstring[len] = L'\0';
	
	// 逐个输出字符
    for(i=0; i<len; ++i)
	{
		wglUseFontBitmapsW(hDC, wstring[i], 1, list);
		glCallList(list);
	}
	
	// 回收所有临时资源
    free(wstring);
	glDeleteLists(list, 1);
	glColor3f(1.0f, 1.0f, 0.0f);
}


void CSection::SelectFont(int size, int charset, const char* face)
{
    HFONT hFont = CreateFontA(size, 0, 0, 0, FW_MEDIUM, 0, 0, 0,
        charset, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
        DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, face);
    HFONT hOldFont = (HFONT)SelectObject(wglGetCurrentDC(), hFont);
    DeleteObject(hOldFont);
}


//DEL CString CSection::GB2312ToUTF8(char* str)
//DEL {
//DEL 	CString result;
//DEL 	WCHAR *strSrc = NULL;
//DEL 	TCHAR *szRes = NULL;
//DEL 	int i;
//DEL 	i = MultiByteToWideChar(CP_ACP, 0, str, -1, NULL, 0);
//DEL 	strSrc = new WCHAR[i+1];
//DEL 	MultiByteToWideChar(CP_ACP, 0, str, -1, strSrc, i);
//DEL 	//获得临时变量的大小
//DEL 	i = WideCharToMultiByte(CP_UTF8, 0, strSrc, -1, NULL, 0, NULL, NULL);
//DEL 	szRes = new TCHAR[i+1];
//DEL 	WideCharToMultiByte(CP_UTF8, 0, strSrc, -1, szRes, i, NULL, NULL);
//DEL 	
//DEL 	result = szRes;   
//DEL 	if (strSrc != NULL)   
//DEL 	{    
//DEL 		delete []strSrc;
//DEL 		strSrc = NULL;   
//DEL 	}  
//DEL 	if (szRes != NULL)   
//DEL 	{    
//DEL 		delete []szRes;    
//DEL 		szRes = NULL;   
//DEL 	}    
//DEL 	return result;  
//DEL }


void CSection::DrawLine(int nX,int nY,int Length,BOOL Col,BOOL IsArrow,BOOL WithBorder)
{
	glColor3f(1.0f, 0.0f, 0.0f);
	float BorderLen=10.0/ScralSize;
	glBegin(GL_LINES);
	glVertex2f((nX)*xRange,(nY)*yRange);
	glVertex2f((nX+Length*!Col)*xRange,(nY-Length*Col)*yRange);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f((nX-BorderLen*yRange/xRange*Col)*xRange,(nY-BorderLen*!Col)*yRange);
	glVertex2f((nX+BorderLen*yRange/xRange*Col)*xRange,(nY+BorderLen*!Col)*yRange);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f((nX+Length*!Col-BorderLen*yRange/xRange*Col)*xRange,(nY-Length*Col-BorderLen*!Col)*yRange);
	glVertex2f((nX+Length*!Col+BorderLen*yRange/xRange*Col)*xRange,(nY-Length*Col+BorderLen*!Col)*yRange);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
}




//DEL void CSection::DrawLine(CPoint nS,CPoint nE, BOOL IsAt,BOOL IsArrow,BOOL WithBorder)
//DEL {
//DEL 	if(IsAt)
//DEL 	{
//DEL 		glBegin(GL_LINES);
//DEL 		glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 		glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 		glEnd();
//DEL 		if(WithBorder&&nE.x==0)
//DEL 		{
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nS.x-25)*xRange,(nS.y)*yRange);
//DEL 			glVertex2f((nS.x+25)*xRange,(nS.y)*yRange);
//DEL 			glEnd();
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nS.x+nE.x-25)*xRange,(nS.y+nE.y)*yRange);
//DEL 			glVertex2f((nS.x+nE.x+25)*xRange,(nS.y+nE.y)*yRange);
//DEL 			glEnd();
//DEL 		}
//DEL 		if(WithBorder&&nE.y==0)
//DEL 		{
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nS.x)*xRange,(nS.y-25)*yRange);
//DEL 			glVertex2f((nS.x)*xRange,(nS.y+25)*yRange);
//DEL 			glEnd();
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y-25)*yRange);
//DEL 			glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y+25)*yRange);
//DEL 			glEnd();
//DEL 		}
//DEL 		if(IsArrow&&(nE.x==0))
//DEL 		{
//DEL 			//glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 			if(nE.y<0)
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x-6)*xRange,(nS.y+nE.y+18)*yRange);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glVertex2f((nS.x+nE.x+6)*xRange,(nS.y+nE.y+18)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x-6)*xRange,(nS.y-18)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x+6)*xRange,(nS.y-18)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			else
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x-6)*xRange,(nS.y+nE.y-18)*yRange);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glVertex2f((nS.x+nE.x+6)*xRange,(nS.y+nE.y-18)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x-6)*xRange,(nS.y+18)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x+6)*xRange,(nS.y+18)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			
//DEL 		}
//DEL 		if(IsArrow&&(nE.y==0))
//DEL 		{
//DEL 			//glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 			if(nE.x<0)
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x+18)*xRange,(nS.y+nE.y+6)*yRange);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glVertex2f((nS.x+nE.x+18)*xRange,(nS.y+nE.y-6)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x-18)*xRange,(nS.y+6)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x-18)*xRange,(nS.y-6)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			else
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x-18)*xRange,(nS.y+nE.y+6)*yRange);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 				glVertex2f((nS.x+nE.x-18)*xRange,(nS.y+nE.y-6)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+18)*xRange,(nS.y+6)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x+18)*xRange,(nS.y-6)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			
//DEL 		}
//DEL 	}
//DEL 	else
//DEL 	{
//DEL 		//glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 		//glVertex2f((nS.x+nE.x)*xRange,(nS.y+nE.y)*yRange);
//DEL 		glBegin(GL_LINES);
//DEL 		glVertex2f(nS.x*xRange,nS.y*yRange);
//DEL 		glVertex2f(nE.x*xRange,nE.y*yRange);
//DEL 		glEnd();
//DEL 		if(WithBorder&&(nE.x-nS.x==0))
//DEL 		{
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nS.x-25)*xRange,(nS.y)*yRange);
//DEL 			glVertex2f((nS.x+25)*xRange,(nS.y)*yRange);
//DEL 			glEnd();
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nE.x-25)*xRange,(nE.y)*yRange);
//DEL 			glVertex2f((nE.x+25)*xRange,(nE.y)*yRange);
//DEL 			glEnd();
//DEL 		}
//DEL 		if(WithBorder&&(nE.y-nS.y==0))
//DEL 		{
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nS.x)*xRange,(nS.y-25)*yRange);
//DEL 			glVertex2f((nS.x)*xRange,(nS.y+25)*yRange);
//DEL 			glEnd();
//DEL 			glBegin(GL_LINES);
//DEL 			glVertex2f((nE.x)*xRange,(nE.y-25)*yRange);
//DEL 			glVertex2f((nE.x)*xRange,(nE.y+25)*yRange);
//DEL 			glEnd();
//DEL 		}
//DEL 		if(IsArrow&&(nE.x-nS.x==0))
//DEL 		{
//DEL 			//glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 			if(nE.y-nS.y<0)
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x-6)*xRange,(nE.y+18)*yRange);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glVertex2f((nE.x+6)*xRange,(nE.y+18)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x-6)*xRange,(nS.y-18)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x+6)*xRange,(nS.y-18)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			else
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x-6)*xRange,(nE.y-18)*yRange);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glVertex2f((nE.x+6)*xRange,(nE.y-18)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x-6)*xRange,(nS.y+18)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x+6)*xRange,(nS.y+18)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			
//DEL 		}
//DEL 		if(IsArrow&&(nE.y-nS.y==0))
//DEL 		{
//DEL 			//glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 			if(nE.x-nS.x<0)
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x+18)*xRange,(nE.y+6)*yRange);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glVertex2f((nE.x+18)*xRange,(nE.y-6)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x-18)*xRange,(nS.y+6)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x-18)*xRange,(nS.y-6)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			else
//DEL 			{
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x-18)*xRange,(nE.y+6)*yRange);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nE.x)*xRange,(nE.y)*yRange);
//DEL 				glVertex2f((nE.x-18)*xRange,(nE.y-6)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x+18)*xRange,(nS.y+6)*yRange);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glEnd();
//DEL 				glBegin(GL_LINES);
//DEL 				glVertex2f((nS.x)*xRange,(nS.y)*yRange);
//DEL 				glVertex2f((nS.x+18)*xRange,(nS.y-6)*yRange);
//DEL 				glEnd();
//DEL 			}
//DEL 			
//DEL 		}
//DEL 	}
//DEL 	//glEnd();
//DEL 	m_LastP=nE;
//DEL 	
//DEL }



void CSection::OnChangeEditH01() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H01))->GetWindowText(tempValue,10));
	H01 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditH02() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H02))->GetWindowText(tempValue,10));
	H02 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditH03() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H03))->GetWindowText(tempValue,10));
	H03 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditB01() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_B01))->GetWindowText(tempValue,10));
	B01 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditB02() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_B02))->GetWindowText(tempValue,10));
	B02 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditB03() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_B03))->GetWindowText(tempValue,10));
	B03 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditB04() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_B04))->GetWindowText(tempValue,10));
	B04 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditB05() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_B05))->GetWindowText(tempValue,10));
	B05 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnChangeEditB06() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_B06))->GetWindowText(tempValue,10));
	B06 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CSection::OnLButtonDown(UINT nFlags, CPoint point) 
{
	if((point.x>=rc.TopLeft().x)&&(point.x<=rc.BottomRight().x)&&
		(point.y>=rc.TopLeft().y)&&(point.y<=rc.BottomRight().y))
	{
		MouseLDStart = point;
		MouseLDFlag=TRUE;
	}

	CDialog::OnLButtonDown(nFlags, point);
}

void CSection::OnLButtonUp(UINT nFlags, CPoint point) 
{
	if(MouseLDFlag)
	{
		LastX=LastX+(point.x-MouseLDStart.x)/1.0/(PicRect.Width())*2.0/ScralSize;
		LastY=LastY+(MouseLDStart.y-point.y)/1.0/(PicRect.Height())*2.0/ScralSize;
	}
	MouseLDFlag=FALSE;
	CDialog::OnLButtonUp(nFlags, point);
}

void CSection::OnMouseMove(UINT nFlags, CPoint point) 
{
	if(MouseLDFlag==TRUE)
	{
		CurX=LastX+(point.x-MouseLDStart.x)/1.0/(PicRect.Width())*2.0/ScralSize;
		CurY=LastY+(MouseLDStart.y-point.y)/1.0/(PicRect.Height())*2.0/ScralSize;
		RenderScene(CurX,CurY);
	}
	CDialog::OnMouseMove(nFlags, point);
}

BOOL CSection::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt) 
{
	CPoint point = pt;
	ScreenToClient(&point);
	if((point.x>=rc.TopLeft().x)&&(point.x<=rc.BottomRight().x)&&
		(point.y>=rc.TopLeft().y)&&(point.y<=rc.BottomRight().y))
	{
		//double tempCurX=CurX;
		//double tempCurY=CurY;
		//CurX=0.0;
		//CurY=0.0;
		//double tempScralSize=0.0;
		if(zDelta>=0)
		{
			ScralSize=ScralSize+0.1*ScralSize;
			//CurX=LastX+(point.x-MouseLDStart.x)/1.0/(PicRect.Width())*2.0/ScralSize;
			//CurY=LastY+(MouseLDStart.y-point.y)/1.0/(PicRect.Height())*2.0/ScralSize;
			//RenderScene(0,0);
			RenderScene(CurX,CurY);
			/*CurX=tempCurX;
			CurY=tempCurY;
			ScralSize=tempScralSize;
			RenderScene(CurX,CurY);*/
		}
		else
		{
			ScralSize=ScralSize-0.1*ScralSize;
			//RenderScene(0,0);
			RenderScene(CurX,CurY);
			/*CurX=tempCurX;
			CurY=tempCurY;
			ScralSize=tempScralSize;
			RenderScene(CurX,CurY);*/
		}
	}
	return CDialog::OnMouseWheel(nFlags, zDelta, pt);
}


void CSection::OnSelchangeSectionCategory() 
{
	SelectFlag = ((CComboBox*)GetDlgItem(IDC_SECTION_CATEGORY))->GetCurSel();
	RenderScene(CurX,CurY);
	pParent->SectionFlag=SelectFlag;
	switch(SelectFlag)
	{
	case 0:
		{
			GetDlgItem(IDC_EDIT_B04)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_B05)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_B06)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_B04)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_B05)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_B06)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC1)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC2)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC3)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC4)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATICB04)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICB05)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICB06)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC12)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICH11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH21)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICH22)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H21)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_H22)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC01)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC02)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC03)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC04)->ShowWindow(SW_HIDE);

			
			
			GetDlgItem(IDC_STATIC011)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC012)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC021)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H21)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B21)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC022)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H22)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B22)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC031)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H31)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B31)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC032)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H32)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B32)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC041)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H41)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B41)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC042)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H42)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B42)->ShowWindow(SW_HIDE);

		}break;
	case 1:
		{
			GetDlgItem(IDC_EDIT_B04)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_B05)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_B06)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_B04)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_B05)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_B06)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC1)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC2)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC3)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC4)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATICB04)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICB05)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICB06)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC12)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICH11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH21)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATICH22)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H21)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_H22)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC01)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC02)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC03)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC04)->ShowWindow(SW_HIDE);

			
			
			GetDlgItem(IDC_STATIC011)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC012)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC021)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC022)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC031)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H31)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B31)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC032)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H32)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B32)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC041)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H41)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B41)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC042)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H42)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B42)->ShowWindow(SW_HIDE);		
		}break;
	case 2:
		{
			GetDlgItem(IDC_EDIT_B04)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_B05)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_B06)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_B04)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_B05)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_B06)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC1)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC2)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC3)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC4)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATICB04)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICB05)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICB06)->ShowWindow(SW_HIDE);

			GetDlgItem(IDC_STATIC11)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H22)->ShowWindow(SW_SHOW);

			GetDlgItem(IDC_STATIC01)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC02)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC03)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC04)->ShowWindow(SW_HIDE);

			
			
			GetDlgItem(IDC_STATIC011)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC012)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC021)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC022)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC031)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H31)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B31)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC032)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H32)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B32)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC041)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H41)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B41)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC042)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0H42)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_EDIT_0B42)->ShowWindow(SW_HIDE);			
		}break;
	case 3:
		{
			GetDlgItem(IDC_EDIT_B04)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_B05)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_B06)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_B04)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_B05)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_B06)->ShowWindow(SW_SHOW);

			GetDlgItem(IDC_STATIC1)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC2)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC3)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC4)->ShowWindow(SW_SHOW);

			GetDlgItem(IDC_STATICB04)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICB05)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICB06)->ShowWindow(SW_SHOW);

			GetDlgItem(IDC_STATIC11)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATICH22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_H22)->ShowWindow(SW_SHOW);

			GetDlgItem(IDC_STATIC01)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC02)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC03)->ShowWindow(SW_HIDE);
			GetDlgItem(IDC_STATIC04)->ShowWindow(SW_SHOW);

			
			
			GetDlgItem(IDC_STATIC011)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B11)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC012)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B12)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC021)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B21)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC022)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B22)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC031)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H31)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B31)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC032)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H32)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B32)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC041)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H41)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B41)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_STATIC042)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0H42)->ShowWindow(SW_SHOW);
			GetDlgItem(IDC_EDIT_0B42)->ShowWindow(SW_SHOW);			
		}break;
	default:break;
	}
	GetDlgItem(IDC_RENDER)->SetFocus();

}

void CSection::InitDate()
{
	pParent=(CSet*)GetParent();
	BirdgeLength=15.0;
	m_LastP.x=0;
	m_LastP.y=0;
////////////////////////////////////////////////////////////////////	
	///////////////////////OPENGL INIT///////////////////////// 

	
    ////////////////////////////////////////////////////////////////
	H01=pParent->SectionVal[0];
	H02=pParent->SectionVal[1];
	H03=pParent->SectionVal[2];

	B01=pParent->SectionVal[3];
	B02=pParent->SectionVal[4];
	B03=pParent->SectionVal[5];
	B04=pParent->SectionVal[6];
	B05=pParent->SectionVal[7];
	B06=pParent->SectionVal[8];

	H11=pParent->SectionVal[9];
	H12=pParent->SectionVal[10];
	H21=pParent->SectionVal[11];
	H22=pParent->SectionVal[12];
	H31=pParent->SectionVal[13];
	H32=pParent->SectionVal[14];
	H41=pParent->SectionVal[15];
	H42=pParent->SectionVal[16];

	b11=pParent->SectionVal[17];
	h11=pParent->SectionVal[18];
	b12=pParent->SectionVal[19];
	h12=pParent->SectionVal[20];
	b21=pParent->SectionVal[21];
	h21=pParent->SectionVal[22];
	b22=pParent->SectionVal[23];
	h22=pParent->SectionVal[24];
	b31=pParent->SectionVal[25];
	h31=pParent->SectionVal[26];
	b32=pParent->SectionVal[27];
	h32=pParent->SectionVal[28];
	b41=pParent->SectionVal[29];
	h41=pParent->SectionVal[30];
	b42=pParent->SectionVal[31];
	h42=pParent->SectionVal[32];


	HLineDist = 50;//竖向左线标注与实际点距离50
	BLineDist = 40;//横向下线标注与实际点距离40
	HTxtDist = 200;//竖向左文字标注与实际点距离200
	BTxtDist = 270;//横向下文字标注与实际点距离280
	MouseLDStart = (0,0);
	MouseLDEnd = (0,0);
	LastPoint = (0,0);
	MouseLDFlag=0;
	CharFlag=1;
	//CurPoint =  (0,0);
	CurX=0.0;
	CurY=0.0;
	LastX = 0.0;
	LastY = 0.0;
	ScralSize=1.0;
	//GetDlgItem(IDC_RENDER)->GetWindowRect(&PicRect); 
	GetDlgItem(IDC_RENDER)->GetWindowRect(&rc);
	PicRect=rc;
	ScreenToClient(&rc);
	SelectFlag=pParent->SectionFlag;
	((CComboBox*)GetDlgItem(IDC_SECTION_CATEGORY))->SetCurSel(SelectFlag);
	OnSelchangeSectionCategory();
	((CButton*)GetDlgItem(IDC_CHECK_TXT))->SetCheck(TRUE);

	char tempValue[10];
	//(GetDlgItem(IDC_EDIT_H11))->SetWindowText(tempValue,10);
	sprintf(tempValue,"%d",H01);
	GetDlgItem(IDC_EDIT_H01)->SetWindowText(tempValue);sprintf(tempValue,"%d",H02);
	GetDlgItem(IDC_EDIT_H02)->SetWindowText(tempValue);sprintf(tempValue,"%d",H03);
	GetDlgItem(IDC_EDIT_H03)->SetWindowText(tempValue);sprintf(tempValue,"%d",B01);

	GetDlgItem(IDC_EDIT_B01)->SetWindowText(tempValue);sprintf(tempValue,"%d",B02);
	GetDlgItem(IDC_EDIT_B02)->SetWindowText(tempValue);sprintf(tempValue,"%d",B03);
	GetDlgItem(IDC_EDIT_B03)->SetWindowText(tempValue);sprintf(tempValue,"%d",B04);
	GetDlgItem(IDC_EDIT_B04)->SetWindowText(tempValue);sprintf(tempValue,"%d",B05);
	GetDlgItem(IDC_EDIT_B05)->SetWindowText(tempValue);sprintf(tempValue,"%d",B06);
	GetDlgItem(IDC_EDIT_B06)->SetWindowText(tempValue);sprintf(tempValue,"%d",H11);
	
	GetDlgItem(IDC_EDIT_H11)->SetWindowText(tempValue);sprintf(tempValue,"%d",H12);
	GetDlgItem(IDC_EDIT_H12)->SetWindowText(tempValue);sprintf(tempValue,"%d",H21);
	GetDlgItem(IDC_EDIT_H21)->SetWindowText(tempValue);sprintf(tempValue,"%d",H22);
	GetDlgItem(IDC_EDIT_H22)->SetWindowText(tempValue);sprintf(tempValue,"%d",H31);
	
	GetDlgItem(IDC_EDIT_0H11)->SetWindowText(tempValue);sprintf(tempValue,"%d",b11);
	GetDlgItem(IDC_EDIT_0B11)->SetWindowText(tempValue);sprintf(tempValue,"%d",h12);
	GetDlgItem(IDC_EDIT_0H12)->SetWindowText(tempValue);sprintf(tempValue,"%d",b12);
	GetDlgItem(IDC_EDIT_0B12)->SetWindowText(tempValue);sprintf(tempValue,"%d",h21);
	GetDlgItem(IDC_EDIT_0H21)->SetWindowText(tempValue);sprintf(tempValue,"%d",b21);
	GetDlgItem(IDC_EDIT_0B21)->SetWindowText(tempValue);sprintf(tempValue,"%d",h22);
	GetDlgItem(IDC_EDIT_0H22)->SetWindowText(tempValue);sprintf(tempValue,"%d",b22);
	GetDlgItem(IDC_EDIT_0B22)->SetWindowText(tempValue);sprintf(tempValue,"%d",h31);
	GetDlgItem(IDC_EDIT_0H31)->SetWindowText(tempValue);sprintf(tempValue,"%d",b31);
	GetDlgItem(IDC_EDIT_0B31)->SetWindowText(tempValue);sprintf(tempValue,"%d",h32);
	GetDlgItem(IDC_EDIT_0H32)->SetWindowText(tempValue);sprintf(tempValue,"%d",b32);
	GetDlgItem(IDC_EDIT_0B32)->SetWindowText(tempValue);sprintf(tempValue,"%d",h41);
	GetDlgItem(IDC_EDIT_0H41)->SetWindowText(tempValue);sprintf(tempValue,"%d",b41);
	GetDlgItem(IDC_EDIT_0B41)->SetWindowText(tempValue);sprintf(tempValue,"%d",h42);
	GetDlgItem(IDC_EDIT_0H42)->SetWindowText(tempValue);sprintf(tempValue,"%d",b42);
	GetDlgItem(IDC_EDIT_0B42)->SetWindowText(tempValue);sprintf(tempValue,"%.2f",BirdgeLength);
	GetDlgItem(IDC_EDIT_LENGTH)->SetWindowText(tempValue);

}

void CSection::OnChangeEditH11() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H11))->GetWindowText(tempValue,10));
	H11 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEditH12() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H12))->GetWindowText(tempValue,10));
	H12 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEditH21() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H21))->GetWindowText(tempValue,10));
	H21 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEditH22() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_H22))->GetWindowText(tempValue,10));
	H22 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}


void CSection::OnChangeEdit0h11() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H11))->GetWindowText(tempValue,10));
	h11 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b11() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B11))->GetWindowText(tempValue,10));
	b11 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h12() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H12))->GetWindowText(tempValue,10));
	h12 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b12() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B12))->GetWindowText(tempValue,10));
	b12 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h21() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H21))->GetWindowText(tempValue,10));
	h21 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b21() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B21))->GetWindowText(tempValue,10));
	b21 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h22() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H22))->GetWindowText(tempValue,10));
	h22 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b22() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B22))->GetWindowText(tempValue,10));
	b22 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h31() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H31))->GetWindowText(tempValue,10));
	h31 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b31() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B31))->GetWindowText(tempValue,10));
	b31 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h32() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H32))->GetWindowText(tempValue,10));
	h32 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b32() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B32))->GetWindowText(tempValue,10));
	b32 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h41() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H41))->GetWindowText(tempValue,10));
	h41 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b41() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B41))->GetWindowText(tempValue,10));
	b41 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0h42() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0H42))->GetWindowText(tempValue,10));
	h42 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnChangeEdit0b42() 
{
	char tempValue[10];
	((CEdit*)(GetDlgItem(IDC_EDIT_0B42))->GetWindowText(tempValue,10));
	b42 = atoi(tempValue);
	RenderScene(0,0);
	LastX=0.0;
	LastY=0.0;
	ScralSize=1.0;
	UpdateVal();
}

void CSection::OnCheckTxt() 
{
	if(BST_CHECKED==((CButton*)GetDlgItem(IDC_CHECK_TXT))->GetCheck())
	{
		((CButton*)GetDlgItem(IDC_CHECK_TXT))->SetCheck(TRUE);
		CharFlag=!CharFlag;
		RenderScene(0,0);
		LastX=0.0;
		LastY=0.0;
		ScralSize=1.0;
		return;
	}
	if(BST_UNCHECKED==((CButton*)GetDlgItem(IDC_CHECK_TXT))->GetCheck())
	{
		((CButton*)GetDlgItem(IDC_CHECK_TXT))->SetCheck(FALSE);
		CharFlag=!CharFlag;
		RenderScene(0,0);
		LastX=0.0;
		LastY=0.0;
		ScralSize=1.0;
		return;
	}

}

void CSection::OnOK() 
{
	int Area=0;
	switch(SelectFlag)
	{
	case 0:
		{
			Area=(2*B02+B03)*(H01+H02+H03)+(2*H01+H02)*B01
				-B03*(H01+H02+H03-H11-H12)+b11*h11+b12*h12;
		}break;
	case 1:
		{
			Area=(2*B02+2*B03+B04)*(H01+H02+H03)+(2*H01+H02)*B01
				-2*B03*(H01+H02+H03-H11-H12)+b11*h11+b12*h12+b21*h21+b22*h22;
		}break;
	case 2:
		{
			Area=(2*B02+2*B03+2*B04+B05)*(H01+H02+H03)+(2*H01+H02)*B01
				-2*B03*(H01+H02+H03-H11-H12)+b11*h11+b12*h12+b21*h21+b22*h22
				-B05*(H01+H02+H03-H21-H22)+b31*h31+b32*h32;
		}break;
	case 3:
		{
			Area=(2*B02+2*B03+2*B04+2*B05+B06)*(H01+H02+H03)+(2*H01+H02)*B01
				-2*B03*(H01+H02+H03-H11-H12)+b11*h11+b12*h12+b21*h21+b22*h22
				-2*B05*(H01+H02+H03-H21-H22)+b31*h31+b32*h32+b41*h41+b42*h42;
		}break;
	}
	CString str = "";
	str.Format("%.2f",Area/1000000.0*26*BirdgeLength);//混凝土容重按26kN/m3计算
	(pParent->GetDlgItem(IDE_GangJinHunNingTu))->SetWindowText(str);
	CDialog::OnOK();
	//AfxMessageBox(str);
}

void CSection::UpdateVal()
{
	pParent->SectionVal[0]=H01;
	pParent->SectionVal[1]=H02;
	pParent->SectionVal[2]=H03;

	pParent->SectionVal[3]=B01;
	pParent->SectionVal[4]=B02;
	pParent->SectionVal[5]=B03;
	pParent->SectionVal[6]=B04;
	pParent->SectionVal[7]=B05;
	pParent->SectionVal[8]=B06;

	pParent->SectionVal[9]=H11;
	pParent->SectionVal[10]=H12;
	pParent->SectionVal[11]=H21;
	pParent->SectionVal[12]=H22;
	pParent->SectionVal[13]=H31;
	pParent->SectionVal[14]=H32;
	pParent->SectionVal[15]=H41;
	pParent->SectionVal[16]=H42;

	pParent->SectionVal[17]=b11;
	pParent->SectionVal[18]=h11;
	pParent->SectionVal[19]=b12;
	pParent->SectionVal[20]=h12;
	pParent->SectionVal[21]=b21;
	pParent->SectionVal[22]=h21;
	pParent->SectionVal[23]=b22;
	pParent->SectionVal[24]=h22;
	pParent->SectionVal[25]=b31;
	pParent->SectionVal[26]=h31;
	pParent->SectionVal[27]=b32;
	pParent->SectionVal[28]=h32;
	pParent->SectionVal[29]=b41;
	pParent->SectionVal[30]=h41;
	pParent->SectionVal[31]=b42;
	pParent->SectionVal[32]=h42;
}

void CSection::OnCancel() 
{
	
	CDialog::OnCancel();
}

void CSection::OnChangeEditLength() 
{
	char tempValue[10];
	(GetDlgItem(IDC_EDIT_LENGTH))->GetWindowText(tempValue,10);
	BirdgeLength = atof(tempValue);
	if(BirdgeLength>0&&BirdgeLength<=100)
		return;
	else
	{
		AfxMessageBox("Bridge Length Err!");
		BirdgeLength=15.0;
		(GetDlgItem(IDC_EDIT_LENGTH))->SetWindowText("15.0");
	}
}
