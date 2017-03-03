#if !defined(AFX_SECTION_H__711C5A8F_4522_4198_A06D_67AE53E03B3E__INCLUDED_)
#define AFX_SECTION_H__711C5A8F_4522_4198_A06D_67AE53E03B3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Section.h : header file
//
#include "Set.h"
/////////////////////////////////////////////////////////////////////////////
// CSection dialog

class CSection : public CDialog
{
// Construction
public:
	void UpdateVal();
	CSection(CWnd* pParent = NULL);	// standard constructor
	CSet* pParent;
	void InitDate();
	void DrawLine(int nX,int nY,int Length,BOOL Col,BOOL IsArrow=TRUE,BOOL WithBorder=TRUE);
	HDC hrenderDC;  //设备上下文
	//HDC bufhrenderDC;  //设备上下文
    HGLRC hrenderRC;  //渲染上下文
    float m_yRotate;  //转速
    int PixelFormat; 
	BOOL SetWindowPixelFormat(HDC hDC);  //设定像素格式
	BOOL CreateViewGLContext(HDC hDC);   //view GL Context
	void RenderScene(double x,double y);  //绘制场景// Dialog Data
	BOOL InitPic();
	void DrawString(const char* str);
	void SelectFont(int size, int charset, const char* face);
	void DrawCNString(const char* str,int x=0,int y=0);
	CPoint m_LastP;
	double xRange;
	double yRange;
	double xTimes;
	double yTimes;
	int xLength;
	int yLength;
	float BirdgeLength;
	int H01,H02,H03;
	int B01,B02,B03,B04,B05,B06;
	int H11,H12,H21,H22,H31,H32,H41,H42;
	//int B11,B12,B21,B22;
	//int H31,H32;
	int h11,h12,h21,h22,h31,h32,h41,h42,b11,b12,b21,b22,b31,b32,b41,b42;
	int h51,h52,h61,h62,h71,h72,h81,h82,b51,b52,b61,b62,b71,b72,b81,b82;
	int HLineDist;//竖向左线标注与实际点距离50
	int BLineDist;//横向下线标注与实际点距离40
	int HTxtDist;//竖向左文字标注与实际点距离200
	int BTxtDist;//横向下文字标注与实际点距离280
	CPoint MouseLDStart;
	CPoint MouseLDEnd;
	CPoint LastPoint;
	double CurX;
	double CurY;
	double LastX;
	double LastY;
	CRect PicRect;
	CRect rc;//=PicRect;
	BOOL MouseLDFlag;
	BOOL CharFlag;
	double ScralSize;
	int SelectFlag;
	/*CString	m_HO1;
	CString	m_HO2;
	CString	m_HO3;
	CString	m_BO1;
	CString	m_BO2;
	CString	m_BO3;
	CString	m_BO4;
	CString	m_BO5;
	CString	m_BO6;*/
	//{{AFX_DATA(CSection)
	enum { IDD = IDD_DIALOG_SECTION };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSection)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSection)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnBtnAutorun();
	afx_msg void OnBtnStop();
	afx_msg void OnChangeEditH01();
	afx_msg void OnChangeEditH02();
	afx_msg void OnChangeEditH03();
	afx_msg void OnChangeEditB01();
	afx_msg void OnChangeEditB02();
	afx_msg void OnChangeEditB03();
	afx_msg void OnChangeEditB04();
	afx_msg void OnChangeEditB05();
	afx_msg void OnChangeEditB06();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnSelchangeSectionCategory();
	afx_msg void OnChangeEditH11();
	afx_msg void OnChangeEditH12();
	afx_msg void OnChangeEditH21();
	afx_msg void OnChangeEditH22();
	afx_msg void OnChangeEdit0h11();
	afx_msg void OnChangeEdit0b11();
	afx_msg void OnChangeEdit0h12();
	afx_msg void OnChangeEdit0b12();
	afx_msg void OnChangeEdit0h21();
	afx_msg void OnChangeEdit0b21();
	afx_msg void OnChangeEdit0h22();
	afx_msg void OnChangeEdit0b22();
	afx_msg void OnChangeEdit0h31();
	afx_msg void OnChangeEdit0b31();
	afx_msg void OnChangeEdit0h32();
	afx_msg void OnChangeEdit0b32();
	afx_msg void OnChangeEdit0h41();
	afx_msg void OnChangeEdit0b41();
	afx_msg void OnChangeEdit0h42();
	afx_msg void OnChangeEdit0b42();
	afx_msg void OnCheckTxt();
	virtual void OnCancel();
	afx_msg void OnChangeEditLength();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SECTION_H__711C5A8F_4522_4198_A06D_67AE53E03B3E__INCLUDED_)
