#if !defined(AFX_SET_H__3AE714E3_5792_4870_B807_E4F3B81B45FA__INCLUDED_)
#define AFX_SET_H__3AE714E3_5792_4870_B807_E4F3B81B45FA__INCLUDED_

//#include "Node.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Set.h : header file
//
#include <vector>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
// CSet dialog
class CSet : public CDialog
{
// Construction
public:
	void SudoGetEditVal();
	void JudgeCross(float x1,float y1,float x2,float y2,float a1,float b1,float a2,float b2,float res[]);
	void SudoINI();
	void InitVal();
	BOOL AddDeviation();
	void SetProcess(int process);
	CString GetXYZ(int Num,int m,int n,int r);
	CString TranslateColName(long ColNum);
	void GetValFromArry(COleSafeArray* olesaRead, vector < CString >* Valbuf);
	void init();
	int GradeID;
	int Count_X;
	int Count_Y;
	int Count_Z;
	void Deal_BuJu_Z();
	void Deal_ZhuJu_X();
	void Deal_PaiJu_Y();
	CSet(CWnd* pParent = NULL);   // standard constructor


	vector < CString > GetCVal;
	vector < CString > GetDVal;
	vector < CString > GetHVal;
	vector < CString > GetJVal;
	vector < CString > GetCVal0;
	vector < CString > GetDVal0;
	vector < CString > GetHVal0;
	vector < CString > GetIVal0;
	vector < CString > GetJVal0;
	int ValCount;
	int ValCount0;
	float XiaBuTuoChengGaoDu;
	double D_Deviation[20];//放置D外径的值//第一个数位存放D值个数
	int D_Deviation_Per[20];//放置D外径值对应的误差百分比
	double tw_Deviation[20];//放置tw壁厚的值//第一个数位存放tw值个数
	int tw_Deviation_Per[20];//放置tw壁厚值对应的误差百分比
	int SectionVal[33];
	int SectionFlag;
	float JianDaoMianJianJu;//剪刀撑面间距
	float JianDaoXianJianJu;//剪刀撑线间距
///////////////////////
	//多线程后添加数据
	double D;//D为标准外径
	double tw;//tw为标准壁厚
	double 	FeiYiYuanBanFanWei[2];
// Dialog Data
	//{{AFX_DATA(CSet)
	enum { IDD = IDD_Set };
	CEdit	m_Path;
	CComboBox	m_Control_DanWei_RenChaiJi;
	CComboBox	m_Control_DanWei_MoBanFangLeng;
	CComboBox	m_Control_DanWei_JiaoZhuZhenDao;
	CComboBox	m_Control_DanWei_GangJinHunNingTu;
	CComboBox	m_Control_DanWei_FuJiaGouJian;
	CComboBox	m_Control_DanWei_FengHeZai;
	CComboBox	m_Control_ZhuJu_X;
	CComboBox	m_Control_BuJu_Z;
	CString	m_DiErCiJiaoZhu;
	CString	m_DiErCiYuYa;
	CString	m_SaoDiGanGaoDu;
	CString	m_DingCengXuanBi;
	CString	m_DiSanCiYuYa;
	CString	m_DiYiCiJiaoZhu;
	CString	m_DiYiCiYuYa;
	CString	m_FengHeZai;
	CString	m_FuJiaGouJian;
	CString	m_GangJinHunNingTu;
	CString	m_JiaoZhuZhenDao;
	CString	m_MoBanFangLeng;
	CString	m_PaiJu_Y;
	CString	m_RenChaiJi;
	CString	m_BujuZ;
	CString	m_ZhuJuX;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSet)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CSet)
	afx_msg void OnChangeGangJinHunNingTu();
	afx_msg void OnChangeJiaoZhuZhenDao();
	afx_msg void OnChangeMoBanFangLeng();
	afx_msg void OnChangeFuJiaGouJian();
	afx_msg void OnChangeRenChaiJi();
	afx_msg void OnChangeFengHeZai();
	afx_msg void OnChangeDiYiCiJiaoZhu();
	afx_msg void OnChangeDiErCiYuYa();
	afx_msg void OnChangeDiYiCiYuYa();
	afx_msg void OnChangeDiSanCiYuYa();
	afx_msg void OnChangeDiErCiJiaoZhu();
	afx_msg void Ontest();
	afx_msg void OnChangeZhuJuX();
	afx_msg void OnChangeBuJuZ();
	afx_msg void OnChangeSaoDiGanGaoDu();
	afx_msg void OnChangeDingCengXuanBi();
	afx_msg void OnOutput();
	virtual BOOL OnInitDialog();
	afx_msg void OnClear();
	afx_msg void OnButtonInputexcel();
	afx_msg void OnButtonOutputword();
	afx_msg void OnRadioG1();
	afx_msg void OnRadioG2();
	afx_msg void OnRadioG3();
	afx_msg void OnButtonInputexcel2();
	afx_msg void OnButtonCaclu();
	afx_msg void OnChangeZhuJuX1();
	afx_msg void OnChangePaiJuY();
	afx_msg void OnButton1();
	afx_msg void OnChangeXiaTuoChengGaoDu();
	afx_msg void OnAddWaijing();
	afx_msg void OnDelWaijing();
	afx_msg void OnAddBihou();
	afx_msg void OnDelBihou();
	afx_msg void OnBtnTestzero();
	afx_msg void OnBtnSection();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SET_H__3AE714E3_5792_4870_B807_E4F3B81B45FA__INCLUDED_)
