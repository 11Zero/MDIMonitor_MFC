// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "excel.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// _ApplicationE properties

/////////////////////////////////////////////////////////////////////////////
// _ApplicationE operations

LPDISPATCH _ApplicationE::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetActiveCell()
{
	LPDISPATCH result;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetActiveChart()
{
	LPDISPATCH result;
	InvokeHelper(0xb7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetActivePrinter()
{
	CString result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetActivePrinter(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _ApplicationE::GetActiveSheet()
{
	LPDISPATCH result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetActiveWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x2f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetActiveWorkbook()
{
	LPDISPATCH result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x225, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::Calculate()
{
	InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _ApplicationE::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0xee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetCharts()
{
	LPDISPATCH result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0xf1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x59f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetDDEAppReturnCode()
{
	long result;
	InvokeHelper(0x14c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::DDEExecute(long Channel, LPCTSTR String)
{
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x14d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel, String);
}

long _ApplicationE::DDEInitiate(LPCTSTR App, LPCTSTR Topic)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x14e, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		App, Topic);
	return result;
}

void _ApplicationE::DDEPoke(long Channel, const VARIANT& Item, const VARIANT& Data)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x14f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel, &Item, &Data);
}

VARIANT _ApplicationE::DDERequest(long Channel, LPCTSTR Item)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_BSTR;
	InvokeHelper(0x150, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Channel, Item);
	return result;
}

void _ApplicationE::DDETerminate(long Channel)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x151, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Channel);
}

VARIANT _ApplicationE::Evaluate(const VARIANT& Name)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Name);
	return result;
}

VARIANT _ApplicationE::_Evaluate(const VARIANT& Name)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xfffffffb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Name);
	return result;
}

VARIANT _ApplicationE::ExecuteExcel4Macro(LPCTSTR String)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x15e, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		String);
	return result;
}

LPDISPATCH _ApplicationE::Intersect(LPDISPATCH Arg1, LPDISPATCH Arg2, const VARIANT& Arg3, const VARIANT& Arg4, const VARIANT& Arg5, const VARIANT& Arg6, const VARIANT& Arg7, const VARIANT& Arg8, const VARIANT& Arg9, const VARIANT& Arg10, 
		const VARIANT& Arg11, const VARIANT& Arg12, const VARIANT& Arg13, const VARIANT& Arg14, const VARIANT& Arg15, const VARIANT& Arg16, const VARIANT& Arg17, const VARIANT& Arg18, const VARIANT& Arg19, const VARIANT& Arg20, 
		const VARIANT& Arg21, const VARIANT& Arg22, const VARIANT& Arg23, const VARIANT& Arg24, const VARIANT& Arg25, const VARIANT& Arg26, const VARIANT& Arg27, const VARIANT& Arg28, const VARIANT& Arg29, const VARIANT& Arg30)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT 
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x2fe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Arg1, Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
	return result;
}

LPDISPATCH _ApplicationE::GetNames()
{
	LPDISPATCH result;
	InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetRange(const VARIANT& Cell1, const VARIANT& Cell2)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Cell1, &Cell2);
	return result;
}

LPDISPATCH _ApplicationE::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _ApplicationE::Run(const VARIANT& Macro, const VARIANT& Arg1, const VARIANT& Arg2, const VARIANT& Arg3, const VARIANT& Arg4, const VARIANT& Arg5, const VARIANT& Arg6, const VARIANT& Arg7, const VARIANT& Arg8, const VARIANT& Arg9, 
		const VARIANT& Arg10, const VARIANT& Arg11, const VARIANT& Arg12, const VARIANT& Arg13, const VARIANT& Arg14, const VARIANT& Arg15, const VARIANT& Arg16, const VARIANT& Arg17, const VARIANT& Arg18, const VARIANT& Arg19, 
		const VARIANT& Arg20, const VARIANT& Arg21, const VARIANT& Arg22, const VARIANT& Arg23, const VARIANT& Arg24, const VARIANT& Arg25, const VARIANT& Arg26, const VARIANT& Arg27, const VARIANT& Arg28, const VARIANT& Arg29, 
		const VARIANT& Arg30)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT 
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x103, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Macro, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
	return result;
}

VARIANT _ApplicationE::_Run2(const VARIANT& Macro, const VARIANT& Arg1, const VARIANT& Arg2, const VARIANT& Arg3, const VARIANT& Arg4, const VARIANT& Arg5, const VARIANT& Arg6, const VARIANT& Arg7, const VARIANT& Arg8, const VARIANT& Arg9, 
		const VARIANT& Arg10, const VARIANT& Arg11, const VARIANT& Arg12, const VARIANT& Arg13, const VARIANT& Arg14, const VARIANT& Arg15, const VARIANT& Arg16, const VARIANT& Arg17, const VARIANT& Arg18, const VARIANT& Arg19, 
		const VARIANT& Arg20, const VARIANT& Arg21, const VARIANT& Arg22, const VARIANT& Arg23, const VARIANT& Arg24, const VARIANT& Arg25, const VARIANT& Arg26, const VARIANT& Arg27, const VARIANT& Arg28, const VARIANT& Arg29, 
		const VARIANT& Arg30)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT 
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x326, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Macro, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
	return result;
}

LPDISPATCH _ApplicationE::GetSelection()
{
	LPDISPATCH result;
	InvokeHelper(0x93, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SendKeys(const VARIANT& Keys, const VARIANT& Wait)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x17f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Keys, &Wait);
}

LPDISPATCH _ApplicationE::GetSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x1e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetThisWorkbook()
{
	LPDISPATCH result;
	InvokeHelper(0x30a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::Union(LPDISPATCH Arg1, LPDISPATCH Arg2, const VARIANT& Arg3, const VARIANT& Arg4, const VARIANT& Arg5, const VARIANT& Arg6, const VARIANT& Arg7, const VARIANT& Arg8, const VARIANT& Arg9, const VARIANT& Arg10, const VARIANT& Arg11, 
		const VARIANT& Arg12, const VARIANT& Arg13, const VARIANT& Arg14, const VARIANT& Arg15, const VARIANT& Arg16, const VARIANT& Arg17, const VARIANT& Arg18, const VARIANT& Arg19, const VARIANT& Arg20, const VARIANT& Arg21, 
		const VARIANT& Arg22, const VARIANT& Arg23, const VARIANT& Arg24, const VARIANT& Arg25, const VARIANT& Arg26, const VARIANT& Arg27, const VARIANT& Arg28, const VARIANT& Arg29, const VARIANT& Arg30)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT 
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x30b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Arg1, Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
	return result;
}

LPDISPATCH _ApplicationE::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x1ae, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetWorkbooks()
{
	LPDISPATCH result;
	InvokeHelper(0x23c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetWorksheetFunction()
{
	LPDISPATCH result;
	InvokeHelper(0x5a0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetWorksheets()
{
	LPDISPATCH result;
	InvokeHelper(0x1ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetExcel4IntlMacroSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x245, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetExcel4MacroSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x243, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::ActivateMicrosoftApp(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x447, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

void _ApplicationE::AddCustomList(const VARIANT& ListArray, const VARIANT& ByRow)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x30c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &ListArray, &ByRow);
}

BOOL _ApplicationE::GetAlertBeforeOverwriting()
{
	BOOL result;
	InvokeHelper(0x3a2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAlertBeforeOverwriting(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3a2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _ApplicationE::GetAltStartupPath()
{
	CString result;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAltStartupPath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _ApplicationE::GetAskToUpdateLinks()
{
	BOOL result;
	InvokeHelper(0x3e0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAskToUpdateLinks(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetEnableAnimations()
{
	BOOL result;
	InvokeHelper(0x49c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableAnimations(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x49c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetAutoCorrect()
{
	LPDISPATCH result;
	InvokeHelper(0x479, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetBuild()
{
	long result;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetCalculateBeforeSave()
{
	BOOL result;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCalculateBeforeSave(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetCalculation()
{
	long result;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCalculation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT _ApplicationE::GetCaller(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x13d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

BOOL _ApplicationE::GetCanPlaySounds()
{
	BOOL result;
	InvokeHelper(0x13e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetCanRecordSounds()
{
	BOOL result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetCaption()
{
	CString result;
	InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCaption(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _ApplicationE::GetCellDragAndDrop()
{
	BOOL result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCellDragAndDrop(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x140, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double _ApplicationE::CentimetersToPoints(double Centimeters)
{
	double result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x43e, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		Centimeters);
	return result;
}

BOOL _ApplicationE::CheckSpelling(LPCTSTR Word, const VARIANT& CustomDictionary, const VARIANT& IgnoreUppercase)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1f9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Word, &CustomDictionary, &IgnoreUppercase);
	return result;
}

VARIANT _ApplicationE::GetClipboardFormats(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

BOOL _ApplicationE::GetDisplayClipboardWindow()
{
	BOOL result;
	InvokeHelper(0x142, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayClipboardWindow(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetCommandUnderlines()
{
	long result;
	InvokeHelper(0x143, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCommandUnderlines(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x143, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetConstrainNumeric()
{
	BOOL result;
	InvokeHelper(0x144, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetConstrainNumeric(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x144, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _ApplicationE::ConvertFormula(const VARIANT& Formula, long FromReferenceStyle, const VARIANT& ToReferenceStyle, const VARIANT& ToAbsolute, const VARIANT& RelativeTo)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x145, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Formula, FromReferenceStyle, &ToReferenceStyle, &ToAbsolute, &RelativeTo);
	return result;
}

BOOL _ApplicationE::GetCopyObjectsWithCells()
{
	BOOL result;
	InvokeHelper(0x3df, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCopyObjectsWithCells(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetCursor()
{
	long result;
	InvokeHelper(0x489, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCursor(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x489, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ApplicationE::GetCustomListCount()
{
	long result;
	InvokeHelper(0x313, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetCutCopyMode()
{
	long result;
	InvokeHelper(0x14a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCutCopyMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ApplicationE::GetDataEntryMode()
{
	long result;
	InvokeHelper(0x14b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDataEntryMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _ApplicationE::Get_Default()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetDefaultFilePath()
{
	CString result;
	InvokeHelper(0x40e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDefaultFilePath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x40e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _ApplicationE::DeleteCustomList(long ListNum)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x30f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ListNum);
}

LPDISPATCH _ApplicationE::GetDialogs()
{
	LPDISPATCH result;
	InvokeHelper(0x2f9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetDisplayAlerts()
{
	BOOL result;
	InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayAlerts(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x157, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayFormulaBar()
{
	BOOL result;
	InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayFormulaBar(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x158, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayFullScreen()
{
	BOOL result;
	InvokeHelper(0x425, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayFullScreen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x425, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayNoteIndicator()
{
	BOOL result;
	InvokeHelper(0x159, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayNoteIndicator(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x159, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetDisplayCommentIndicator()
{
	long result;
	InvokeHelper(0x4ac, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayCommentIndicator(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4ac, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetDisplayExcel4Menus()
{
	BOOL result;
	InvokeHelper(0x39f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayExcel4Menus(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x39f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayRecentFiles()
{
	BOOL result;
	InvokeHelper(0x39e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayRecentFiles(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x39e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayScrollBars()
{
	BOOL result;
	InvokeHelper(0x15a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayScrollBars(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayStatusBar()
{
	BOOL result;
	InvokeHelper(0x15b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayStatusBar(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::DoubleClick()
{
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _ApplicationE::GetEditDirectlyInCell()
{
	BOOL result;
	InvokeHelper(0x3a1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEditDirectlyInCell(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x3a1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetEnableAutoComplete()
{
	BOOL result;
	InvokeHelper(0x49b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableAutoComplete(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x49b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetEnableCancelKey()
{
	long result;
	InvokeHelper(0x448, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableCancelKey(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x448, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetEnableSound()
{
	BOOL result;
	InvokeHelper(0x4ad, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableSound(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4ad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _ApplicationE::GetFileConverters(const VARIANT& Index1, const VARIANT& Index2)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x3a3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index1, &Index2);
	return result;
}

BOOL _ApplicationE::GetFixedDecimal()
{
	BOOL result;
	InvokeHelper(0x15f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetFixedDecimal(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetFixedDecimalPlaces()
{
	long result;
	InvokeHelper(0x160, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetFixedDecimalPlaces(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x160, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT _ApplicationE::GetCustomListContents(long ListNum)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x312, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		ListNum);
	return result;
}

long _ApplicationE::GetCustomListNum(const VARIANT& ListArray)
{
	long result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x311, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		&ListArray);
	return result;
}

VARIANT _ApplicationE::GetOpenFilename(const VARIANT& FileFilter, const VARIANT& FilterIndex, const VARIANT& Title, const VARIANT& ButtonText, const VARIANT& MultiSelect)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x433, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&FileFilter, &FilterIndex, &Title, &ButtonText, &MultiSelect);
	return result;
}

VARIANT _ApplicationE::GetSaveAsFilename(const VARIANT& InitialFilename, const VARIANT& FileFilter, const VARIANT& FilterIndex, const VARIANT& Title, const VARIANT& ButtonText)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x434, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&InitialFilename, &FileFilter, &FilterIndex, &Title, &ButtonText);
	return result;
}

void _ApplicationE::Goto(const VARIANT& Reference, const VARIANT& Scroll)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1db, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Reference, &Scroll);
}

double _ApplicationE::GetHeight()
{
	double result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetHeight(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void _ApplicationE::Help(const VARIANT& HelpFile, const VARIANT& HelpContextID)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x162, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &HelpFile, &HelpContextID);
}

BOOL _ApplicationE::GetIgnoreRemoteRequests()
{
	BOOL result;
	InvokeHelper(0x164, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetIgnoreRemoteRequests(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x164, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double _ApplicationE::InchesToPoints(double Inches)
{
	double result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x43f, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		Inches);
	return result;
}

VARIANT _ApplicationE::InputBox(LPCTSTR Prompt, const VARIANT& Title, const VARIANT& Default, const VARIANT& Left, const VARIANT& Top, const VARIANT& HelpFile, const VARIANT& HelpContextID, const VARIANT& Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x165, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Prompt, &Title, &Default, &Left, &Top, &HelpFile, &HelpContextID, &Type);
	return result;
}

BOOL _ApplicationE::GetInteractive()
{
	BOOL result;
	InvokeHelper(0x169, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetInteractive(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x169, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _ApplicationE::GetInternational(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x16a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

BOOL _ApplicationE::GetIteration()
{
	BOOL result;
	InvokeHelper(0x16b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetIteration(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x16b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double _ApplicationE::GetLeft()
{
	double result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetLeft(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString _ApplicationE::GetLibraryPath()
{
	CString result;
	InvokeHelper(0x16e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::MailLogoff()
{
	InvokeHelper(0x3b1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ApplicationE::MailLogon(const VARIANT& Name, const VARIANT& Password, const VARIANT& DownloadNewMail)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x3af, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Name, &Password, &DownloadNewMail);
}

VARIANT _ApplicationE::GetMailSession()
{
	VARIANT result;
	InvokeHelper(0x3ae, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetMailSystem()
{
	long result;
	InvokeHelper(0x3cb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetMathCoprocessorAvailable()
{
	BOOL result;
	InvokeHelper(0x16f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

double _ApplicationE::GetMaxChange()
{
	double result;
	InvokeHelper(0x170, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetMaxChange(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x170, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _ApplicationE::GetMaxIterations()
{
	long result;
	InvokeHelper(0x171, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetMaxIterations(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x171, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetMouseAvailable()
{
	BOOL result;
	InvokeHelper(0x175, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetMoveAfterReturn()
{
	BOOL result;
	InvokeHelper(0x176, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetMoveAfterReturn(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x176, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetMoveAfterReturnDirection()
{
	long result;
	InvokeHelper(0x478, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetMoveAfterReturnDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x478, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _ApplicationE::GetRecentFiles()
{
	LPDISPATCH result;
	InvokeHelper(0x4b2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::NextLetter()
{
	LPDISPATCH result;
	InvokeHelper(0x3cc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetNetworkTemplatesPath()
{
	CString result;
	InvokeHelper(0x184, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetODBCErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x4b3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetODBCTimeout()
{
	long result;
	InvokeHelper(0x4b4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetODBCTimeout(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _ApplicationE::OnKey(LPCTSTR Key, const VARIANT& Procedure)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper(0x272, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Key, &Procedure);
}

void _ApplicationE::OnRepeat(LPCTSTR Text, LPCTSTR Procedure)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x301, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text, Procedure);
}

void _ApplicationE::OnTime(const VARIANT& EarliestTime, LPCTSTR Procedure, const VARIANT& LatestTime, const VARIANT& Schedule)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x270, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &EarliestTime, Procedure, &LatestTime, &Schedule);
}

void _ApplicationE::OnUndo(LPCTSTR Text, LPCTSTR Procedure)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x302, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text, Procedure);
}

CString _ApplicationE::GetOnWindow()
{
	CString result;
	InvokeHelper(0x26f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetOnWindow(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x26f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _ApplicationE::GetOperatingSystem()
{
	CString result;
	InvokeHelper(0x177, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetOrganizationName()
{
	CString result;
	InvokeHelper(0x178, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetPath()
{
	CString result;
	InvokeHelper(0x123, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetPathSeparator()
{
	CString result;
	InvokeHelper(0x179, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT _ApplicationE::GetPreviousSelections(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x17a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

BOOL _ApplicationE::GetPivotTableSelection()
{
	BOOL result;
	InvokeHelper(0x4b5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetPivotTableSelection(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetPromptForSummaryInfo()
{
	BOOL result;
	InvokeHelper(0x426, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetPromptForSummaryInfo(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x426, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::Quit()
{
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _ApplicationE::RecordMacro(const VARIANT& BasicCode, const VARIANT& XlmCode)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x305, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &BasicCode, &XlmCode);
}

BOOL _ApplicationE::GetRecordRelative()
{
	BOOL result;
	InvokeHelper(0x17b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetReferenceStyle()
{
	long result;
	InvokeHelper(0x17c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetReferenceStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x17c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT _ApplicationE::GetRegisteredFunctions(const VARIANT& Index1, const VARIANT& Index2)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x307, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index1, &Index2);
	return result;
}

BOOL _ApplicationE::RegisterXLL(LPCTSTR Filename)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Filename);
	return result;
}

void _ApplicationE::Repeat()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _ApplicationE::GetRollZoom()
{
	BOOL result;
	InvokeHelper(0x4b6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetRollZoom(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::SaveWorkspace(const VARIANT& Filename)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Filename);
}

BOOL _ApplicationE::GetScreenUpdating()
{
	BOOL result;
	InvokeHelper(0x17e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetScreenUpdating(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x17e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetSheetsInNewWorkbook()
{
	long result;
	InvokeHelper(0x3e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetSheetsInNewWorkbook(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetShowChartTipNames()
{
	BOOL result;
	InvokeHelper(0x4b7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowChartTipNames(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetShowChartTipValues()
{
	BOOL result;
	InvokeHelper(0x4b8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowChartTipValues(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4b8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _ApplicationE::GetStandardFont()
{
	CString result;
	InvokeHelper(0x39c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetStandardFont(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x39c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

double _ApplicationE::GetStandardFontSize()
{
	double result;
	InvokeHelper(0x39d, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetStandardFontSize(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x39d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString _ApplicationE::GetStartupPath()
{
	CString result;
	InvokeHelper(0x181, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT _ApplicationE::GetStatusBar()
{
	VARIANT result;
	InvokeHelper(0x182, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetStatusBar(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x182, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

CString _ApplicationE::GetTemplatesPath()
{
	CString result;
	InvokeHelper(0x17d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetShowToolTips()
{
	BOOL result;
	InvokeHelper(0x183, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowToolTips(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x183, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double _ApplicationE::GetTop()
{
	double result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetTop(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long _ApplicationE::GetDefaultSaveFormat()
{
	long result;
	InvokeHelper(0x4b9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDefaultSaveFormat(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4b9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString _ApplicationE::GetTransitionMenuKey()
{
	CString result;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetTransitionMenuKey(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _ApplicationE::GetTransitionMenuKeyAction()
{
	long result;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetTransitionMenuKeyAction(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetTransitionNavigKeys()
{
	BOOL result;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetTransitionNavigKeys(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::Undo()
{
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

double _ApplicationE::GetUsableHeight()
{
	double result;
	InvokeHelper(0x185, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double _ApplicationE::GetUsableWidth()
{
	double result;
	InvokeHelper(0x186, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetUserControl()
{
	BOOL result;
	InvokeHelper(0x4ba, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetUserControl(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _ApplicationE::GetUserName_()
{
	CString result;
	InvokeHelper(0x187, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetUserName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x187, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _ApplicationE::GetValue()
{
	CString result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetVbe()
{
	LPDISPATCH result;
	InvokeHelper(0x4bb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetVersion()
{
	CString result;
	InvokeHelper(0x188, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetVisible()
{
	BOOL result;
	InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::Volatile(const VARIANT& Volatile)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x314, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Volatile);
}

double _ApplicationE::GetWidth()
{
	double result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetWidth(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _ApplicationE::GetWindowsForPens()
{
	BOOL result;
	InvokeHelper(0x18b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetWindowState()
{
	long result;
	InvokeHelper(0x18c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetWindowState(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x18c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ApplicationE::GetDefaultSheetDirection()
{
	long result;
	InvokeHelper(0xe5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDefaultSheetDirection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ApplicationE::GetCursorMovement()
{
	long result;
	InvokeHelper(0xe8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCursorMovement(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xe8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetControlCharacters()
{
	BOOL result;
	InvokeHelper(0xe9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetControlCharacters(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetEnableEvents()
{
	BOOL result;
	InvokeHelper(0x4bc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableEvents(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4bc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::Wait(const VARIANT& Time)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x6ea, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&Time);
	return result;
}

BOOL _ApplicationE::GetExtendList()
{
	BOOL result;
	InvokeHelper(0x701, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetExtendList(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x701, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetOLEDBErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x702, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetPhonetic(const VARIANT& Text)
{
	CString result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x703, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		&Text);
	return result;
}

LPDISPATCH _ApplicationE::GetCOMAddIns()
{
	LPDISPATCH result;
	InvokeHelper(0x704, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetDefaultWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x705, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetProductCode()
{
	CString result;
	InvokeHelper(0x706, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _ApplicationE::GetUserLibraryPath()
{
	CString result;
	InvokeHelper(0x707, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetAutoPercentEntry()
{
	BOOL result;
	InvokeHelper(0x708, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAutoPercentEntry(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x708, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetLanguageSettings()
{
	LPDISPATCH result;
	InvokeHelper(0x709, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::CalculateFull()
{
	InvokeHelper(0x70d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _ApplicationE::FindFile()
{
	BOOL result;
	InvokeHelper(0x6eb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetCalculationVersion()
{
	long result;
	InvokeHelper(0x70e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetShowWindowsInTaskbar()
{
	BOOL result;
	InvokeHelper(0x70f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowWindowsInTaskbar(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x70f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetFeatureInstall()
{
	long result;
	InvokeHelper(0x710, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetFeatureInstall(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x710, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetReady()
{
	BOOL result;
	InvokeHelper(0x78c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetFindFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x78e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetRefFindFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x78e, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _ApplicationE::GetReplaceFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x78f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetRefReplaceFormat(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x78f, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH _ApplicationE::GetUsedObjects()
{
	LPDISPATCH result;
	InvokeHelper(0x790, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetCalculationState()
{
	long result;
	InvokeHelper(0x791, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetCalculationInterruptKey()
{
	long result;
	InvokeHelper(0x792, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetCalculationInterruptKey(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x792, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _ApplicationE::GetWatches()
{
	LPDISPATCH result;
	InvokeHelper(0x793, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetDisplayFunctionToolTips()
{
	BOOL result;
	InvokeHelper(0x794, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayFunctionToolTips(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x794, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetAutomationSecurity()
{
	long result;
	InvokeHelper(0x795, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAutomationSecurity(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x795, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _ApplicationE::GetFileDialog(long fileDialogType)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x796, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		fileDialogType);
	return result;
}

void _ApplicationE::CalculateFullRebuild()
{
	InvokeHelper(0x799, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _ApplicationE::GetDisplayPasteOptions()
{
	BOOL result;
	InvokeHelper(0x79a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayPasteOptions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x79a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayInsertOptions()
{
	BOOL result;
	InvokeHelper(0x79b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayInsertOptions(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x79b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetGenerateGetPivotData()
{
	BOOL result;
	InvokeHelper(0x79c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetGenerateGetPivotData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x79c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetAutoRecover()
{
	LPDISPATCH result;
	InvokeHelper(0x79d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetHwnd()
{
	long result;
	InvokeHelper(0x79e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetHinstance()
{
	long result;
	InvokeHelper(0x79f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::CheckAbort(const VARIANT& KeepAbort)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x7a0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &KeepAbort);
}

LPDISPATCH _ApplicationE::GetErrorCheckingOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x7a2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetAutoFormatAsYouTypeReplaceHyperlinks()
{
	BOOL result;
	InvokeHelper(0x7a3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAutoFormatAsYouTypeReplaceHyperlinks(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetNewWorkbook()
{
	LPDISPATCH result;
	InvokeHelper(0x61d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetSpellingOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x7a5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetSpeech()
{
	LPDISPATCH result;
	InvokeHelper(0x7a6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetMapPaperSize()
{
	BOOL result;
	InvokeHelper(0x7a7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetMapPaperSize(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7a7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetShowStartupDialog()
{
	BOOL result;
	InvokeHelper(0x7a8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowStartupDialog(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _ApplicationE::GetDecimalSeparator()
{
	CString result;
	InvokeHelper(0x711, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDecimalSeparator(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x711, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _ApplicationE::GetThousandsSeparator()
{
	CString result;
	InvokeHelper(0x712, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetThousandsSeparator(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x712, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _ApplicationE::GetUseSystemSeparators()
{
	BOOL result;
	InvokeHelper(0x7a9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetUseSystemSeparators(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7a9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetThisCell()
{
	LPDISPATCH result;
	InvokeHelper(0x7aa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetRtd()
{
	LPDISPATCH result;
	InvokeHelper(0x7ab, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetDisplayDocumentActionTaskPane()
{
	BOOL result;
	InvokeHelper(0x8cb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayDocumentActionTaskPane(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8cb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::DisplayXMLSourcePane(const VARIANT& XmlMap)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x8cc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &XmlMap);
}

BOOL _ApplicationE::GetArbitraryXMLSupportAvailable()
{
	BOOL result;
	InvokeHelper(0x8ce, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetMeasurementUnit()
{
	long result;
	InvokeHelper(0x947, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetMeasurementUnit(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x947, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetShowSelectionFloaties()
{
	BOOL result;
	InvokeHelper(0x948, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowSelectionFloaties(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x948, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetShowMenuFloaties()
{
	BOOL result;
	InvokeHelper(0x949, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowMenuFloaties(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x949, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetShowDevTools()
{
	BOOL result;
	InvokeHelper(0x94a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetShowDevTools(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x94a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetEnableLivePreview()
{
	BOOL result;
	InvokeHelper(0x94b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableLivePreview(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x94b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetDisplayDocumentInformationPanel()
{
	BOOL result;
	InvokeHelper(0x94c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayDocumentInformationPanel(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x94c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetAlwaysUseClearType()
{
	BOOL result;
	InvokeHelper(0x94d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetAlwaysUseClearType(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x94d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _ApplicationE::GetWarnOnFunctionNameConflict()
{
	BOOL result;
	InvokeHelper(0x94e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetWarnOnFunctionNameConflict(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x94e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetFormulaBarHeight()
{
	long result;
	InvokeHelper(0x94f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetFormulaBarHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x94f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetDisplayFormulaAutoComplete()
{
	BOOL result;
	InvokeHelper(0x950, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDisplayFormulaAutoComplete(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x950, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetGenerateTableRefs()
{
	long result;
	InvokeHelper(0x951, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetGenerateTableRefs(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x951, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _ApplicationE::GetAssistance()
{
	LPDISPATCH result;
	InvokeHelper(0x952, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _ApplicationE::CalculateUntilAsyncQueriesDone()
{
	InvokeHelper(0x953, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _ApplicationE::GetEnableLargeOperationAlert()
{
	BOOL result;
	InvokeHelper(0x954, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetEnableLargeOperationAlert(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x954, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _ApplicationE::GetLargeOperationCellThousandCount()
{
	long result;
	InvokeHelper(0x955, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetLargeOperationCellThousandCount(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x955, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _ApplicationE::GetDeferAsyncQueries()
{
	BOOL result;
	InvokeHelper(0x956, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetDeferAsyncQueries(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x956, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetMultiThreadedCalculation()
{
	LPDISPATCH result;
	InvokeHelper(0x957, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _ApplicationE::SharePointVersion(LPCTSTR bstrUrl)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x958, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		bstrUrl);
	return result;
}

long _ApplicationE::GetActiveEncryptionSession()
{
	long result;
	InvokeHelper(0x95a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetHighQualityModeForGraphics()
{
	BOOL result;
	InvokeHelper(0x95b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetHighQualityModeForGraphics(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x95b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _ApplicationE::GetFileExportConverters()
{
	LPDISPATCH result;
	InvokeHelper(0xad0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetSmartArtLayouts()
{
	LPDISPATCH result;
	InvokeHelper(0xad4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetSmartArtQuickStyles()
{
	LPDISPATCH result;
	InvokeHelper(0xad5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetSmartArtColors()
{
	LPDISPATCH result;
	InvokeHelper(0xad6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetAddIns2()
{
	LPDISPATCH result;
	InvokeHelper(0xad7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetPrintCommunication()
{
	BOOL result;
	InvokeHelper(0xad8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetPrintCommunication(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xad8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _ApplicationE::MacroOptions(const VARIANT& Macro, const VARIANT& Description, const VARIANT& HasMenu, const VARIANT& MenuText, const VARIANT& HasShortcutKey, const VARIANT& ShortcutKey, const VARIANT& Category, const VARIANT& StatusBar, 
		const VARIANT& HelpContextID, const VARIANT& HelpFile, const VARIANT& ArgumentDescriptions)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xad2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Macro, &Description, &HasMenu, &MenuText, &HasShortcutKey, &ShortcutKey, &Category, &StatusBar, &HelpContextID, &HelpFile, &ArgumentDescriptions);
}

BOOL _ApplicationE::GetUseClusterConnector()
{
	BOOL result;
	InvokeHelper(0xada, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetUseClusterConnector(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xada, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _ApplicationE::GetClusterConnector()
{
	CString result;
	InvokeHelper(0xadb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetClusterConnector(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xadb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _ApplicationE::GetProtectedViewWindows()
{
	LPDISPATCH result;
	InvokeHelper(0xadf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _ApplicationE::GetActiveProtectedViewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0xae0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetIsSandboxed()
{
	BOOL result;
	InvokeHelper(0xae1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _ApplicationE::GetSaveISO8601Dates()
{
	BOOL result;
	InvokeHelper(0xae2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetSaveISO8601Dates(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xae2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _ApplicationE::GetHinstancePtr()
{
	VARIANT result;
	InvokeHelper(0xae3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long _ApplicationE::GetFileValidation()
{
	long result;
	InvokeHelper(0xae4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetFileValidation(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long _ApplicationE::GetFileValidationPivot()
{
	long result;
	InvokeHelper(0xae5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _ApplicationE::SetFileValidationPivot(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xae5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// _Worksheet properties

/////////////////////////////////////////////////////////////////////////////
// _Worksheet operations

LPDISPATCH _Worksheet::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Worksheet::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::Activate()
{
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Worksheet::Copy(const VARIANT& Before, const VARIANT& After)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Before, &After);
}

void _Worksheet::Delete()
{
	InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString _Worksheet::GetCodeName()
{
	CString result;
	InvokeHelper(0x55d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Worksheet::Get_CodeName()
{
	CString result;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Worksheet::Set_CodeName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long _Worksheet::GetIndex()
{
	long result;
	InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Worksheet::Move(const VARIANT& Before, const VARIANT& After)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x27d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Before, &After);
}

CString _Worksheet::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH _Worksheet::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x1f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetPageSetup()
{
	LPDISPATCH result;
	InvokeHelper(0x3e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x1f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::PrintPreview(const VARIANT& EnableChanges)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x119, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &EnableChanges);
}

BOOL _Worksheet::GetProtectContents()
{
	BOOL result;
	InvokeHelper(0x124, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetProtectDrawingObjects()
{
	BOOL result;
	InvokeHelper(0x125, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetProtectionMode()
{
	BOOL result;
	InvokeHelper(0x487, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetProtectScenarios()
{
	BOOL result;
	InvokeHelper(0x126, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::Select(const VARIANT& Replace)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Replace);
}

void _Worksheet::Unprotect(const VARIANT& Password)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x11d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Password);
}

long _Worksheet::GetVisible()
{
	long result;
	InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetVisible(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Worksheet::GetShapes()
{
	LPDISPATCH result;
	InvokeHelper(0x561, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetTransitionExpEval()
{
	BOOL result;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetTransitionExpEval(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x191, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Worksheet::GetAutoFilterMode()
{
	BOOL result;
	InvokeHelper(0x318, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetAutoFilterMode(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x318, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Worksheet::SetBackgroundPicture(LPCTSTR Filename)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4a4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename);
}

void _Worksheet::Calculate()
{
	InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _Worksheet::GetEnableCalculation()
{
	BOOL result;
	InvokeHelper(0x590, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetEnableCalculation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x590, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Worksheet::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0xee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::ChartObjects(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x424, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void _Worksheet::CheckSpelling(const VARIANT& CustomDictionary, const VARIANT& IgnoreUppercase, const VARIANT& AlwaysSuggest, const VARIANT& SpellLang)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1f9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &CustomDictionary, &IgnoreUppercase, &AlwaysSuggest, &SpellLang);
}

LPDISPATCH _Worksheet::GetCircularReference()
{
	LPDISPATCH result;
	InvokeHelper(0x42d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::ClearArrows()
{
	InvokeHelper(0x3ca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Worksheet::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0xf1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Worksheet::GetConsolidationFunction()
{
	long result;
	InvokeHelper(0x315, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT _Worksheet::GetConsolidationOptions()
{
	VARIANT result;
	InvokeHelper(0x316, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT _Worksheet::GetConsolidationSources()
{
	VARIANT result;
	InvokeHelper(0x317, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetEnableAutoFilter()
{
	BOOL result;
	InvokeHelper(0x484, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetEnableAutoFilter(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x484, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Worksheet::GetEnableSelection()
{
	long result;
	InvokeHelper(0x591, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetEnableSelection(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x591, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Worksheet::GetEnableOutlining()
{
	BOOL result;
	InvokeHelper(0x485, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetEnableOutlining(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x485, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Worksheet::GetEnablePivotTable()
{
	BOOL result;
	InvokeHelper(0x486, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetEnablePivotTable(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x486, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _Worksheet::Evaluate(const VARIANT& Name)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Name);
	return result;
}

VARIANT _Worksheet::_Evaluate(const VARIANT& Name)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xfffffffb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Name);
	return result;
}

BOOL _Worksheet::GetFilterMode()
{
	BOOL result;
	InvokeHelper(0x320, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::ResetAllPageBreaks()
{
	InvokeHelper(0x592, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Worksheet::GetNames()
{
	LPDISPATCH result;
	InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::OLEObjects(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x31f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH _Worksheet::GetOutline()
{
	LPDISPATCH result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::Paste(const VARIANT& Destination, const VARIANT& Link)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Destination, &Link);
}

LPDISPATCH _Worksheet::PivotTables(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x2b2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH _Worksheet::PivotTableWizard(const VARIANT& SourceType, const VARIANT& SourceData, const VARIANT& TableDestination, const VARIANT& TableName, const VARIANT& RowGrand, const VARIANT& ColumnGrand, const VARIANT& SaveData, 
		const VARIANT& HasAutoFormat, const VARIANT& AutoPage, const VARIANT& Reserved, const VARIANT& BackgroundQuery, const VARIANT& OptimizeCache, const VARIANT& PageFieldOrder, const VARIANT& PageFieldWrapCount, const VARIANT& ReadData, 
		const VARIANT& Connection)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x2ac, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&SourceType, &SourceData, &TableDestination, &TableName, &RowGrand, &ColumnGrand, &SaveData, &HasAutoFormat, &AutoPage, &Reserved, &BackgroundQuery, &OptimizeCache, &PageFieldOrder, &PageFieldWrapCount, &ReadData, &Connection);
	return result;
}

LPDISPATCH _Worksheet::GetRange(const VARIANT& Cell1, const VARIANT& Cell2)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Cell1, &Cell2);
	return result;
}

LPDISPATCH _Worksheet::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::Scenarios(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x38c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

CString _Worksheet::GetScrollArea()
{
	CString result;
	InvokeHelper(0x599, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetScrollArea(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x599, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void _Worksheet::ShowAllData()
{
	InvokeHelper(0x31a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Worksheet::ShowDataForm()
{
	InvokeHelper(0x199, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

double _Worksheet::GetStandardHeight()
{
	double result;
	InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

double _Worksheet::GetStandardWidth()
{
	double result;
	InvokeHelper(0x198, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetStandardWidth(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x198, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL _Worksheet::GetTransitionFormEntry()
{
	BOOL result;
	InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetTransitionFormEntry(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Worksheet::GetType()
{
	long result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetUsedRange()
{
	LPDISPATCH result;
	InvokeHelper(0x19c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetHPageBreaks()
{
	LPDISPATCH result;
	InvokeHelper(0x58a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetVPageBreaks()
{
	LPDISPATCH result;
	InvokeHelper(0x58b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetQueryTables()
{
	LPDISPATCH result;
	InvokeHelper(0x59a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetDisplayPageBreaks()
{
	BOOL result;
	InvokeHelper(0x59b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetDisplayPageBreaks(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x59b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Worksheet::GetComments()
{
	LPDISPATCH result;
	InvokeHelper(0x23f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x571, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::ClearCircles()
{
	InvokeHelper(0x59c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Worksheet::CircleInvalid()
{
	InvokeHelper(0x59d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Worksheet::GetAutoFilter()
{
	LPDISPATCH result;
	InvokeHelper(0x319, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Worksheet::GetDisplayRightToLeft()
{
	BOOL result;
	InvokeHelper(0x6ee, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetDisplayRightToLeft(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Worksheet::GetTab()
{
	LPDISPATCH result;
	InvokeHelper(0x411, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetMailEnvelope()
{
	LPDISPATCH result;
	InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::SaveAs(LPCTSTR Filename, const VARIANT& FileFormat, const VARIANT& Password, const VARIANT& WriteResPassword, const VARIANT& ReadOnlyRecommended, const VARIANT& CreateBackup, const VARIANT& AddToMru, const VARIANT& TextCodepage, 
		const VARIANT& TextVisualLayout, const VARIANT& Local)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x785, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename, &FileFormat, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, &AddToMru, &TextCodepage, &TextVisualLayout, &Local);
}

LPDISPATCH _Worksheet::GetCustomProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x7ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::GetProtection()
{
	LPDISPATCH result;
	InvokeHelper(0xb0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::PasteSpecial(const VARIANT& Format, const VARIANT& Link, const VARIANT& DisplayAsIcon, const VARIANT& IconFileName, const VARIANT& IconIndex, const VARIANT& IconLabel, const VARIANT& NoHTMLFormatting)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x788, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Format, &Link, &DisplayAsIcon, &IconFileName, &IconIndex, &IconLabel, &NoHTMLFormatting);
}

void _Worksheet::Protect(const VARIANT& Password, const VARIANT& DrawingObjects, const VARIANT& Contents, const VARIANT& Scenarios, const VARIANT& UserInterfaceOnly, const VARIANT& AllowFormattingCells, const VARIANT& AllowFormattingColumns, 
		const VARIANT& AllowFormattingRows, const VARIANT& AllowInsertingColumns, const VARIANT& AllowInsertingRows, const VARIANT& AllowInsertingHyperlinks, const VARIANT& AllowDeletingColumns, const VARIANT& AllowDeletingRows, 
		const VARIANT& AllowSorting, const VARIANT& AllowFiltering, const VARIANT& AllowUsingPivotTables)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Password, &DrawingObjects, &Contents, &Scenarios, &UserInterfaceOnly, &AllowFormattingCells, &AllowFormattingColumns, &AllowFormattingRows, &AllowInsertingColumns, &AllowInsertingRows, &AllowInsertingHyperlinks, &AllowDeletingColumns, 
		&AllowDeletingRows, &AllowSorting, &AllowFiltering, &AllowUsingPivotTables);
}

LPDISPATCH _Worksheet::GetListObjects()
{
	LPDISPATCH result;
	InvokeHelper(0x8d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Worksheet::XmlDataQuery(LPCTSTR XPath, const VARIANT& SelectionNamespaces, const VARIANT& Map)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x8d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		XPath, &SelectionNamespaces, &Map);
	return result;
}

LPDISPATCH _Worksheet::XmlMapQuery(LPCTSTR XPath, const VARIANT& SelectionNamespaces, const VARIANT& Map)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x8d7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		XPath, &SelectionNamespaces, &Map);
	return result;
}

void _Worksheet::PrintOut(const VARIANT& From, const VARIANT& To, const VARIANT& Copies, const VARIANT& Preview, const VARIANT& ActivePrinter, const VARIANT& PrintToFile, const VARIANT& Collate, const VARIANT& PrToFileName, 
		const VARIANT& IgnorePrintAreas)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x939, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName, &IgnorePrintAreas);
}

BOOL _Worksheet::GetEnableFormatConditionsCalculation()
{
	BOOL result;
	InvokeHelper(0x9cf, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Worksheet::SetEnableFormatConditionsCalculation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9cf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Worksheet::GetSort()
{
	LPDISPATCH result;
	InvokeHelper(0x370, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Worksheet::ExportAsFixedFormat(long Type, const VARIANT& Filename, const VARIANT& Quality, const VARIANT& IncludeDocProperties, const VARIANT& IgnorePrintAreas, const VARIANT& From, const VARIANT& To, const VARIANT& OpenAfterPublish, 
		const VARIANT& FixedFormatExtClassPtr)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, &Filename, &Quality, &IncludeDocProperties, &IgnorePrintAreas, &From, &To, &OpenAfterPublish, &FixedFormatExtClassPtr);
}

long _Worksheet::GetPrintedCommentPages()
{
	long result;
	InvokeHelper(0xb29, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// _Workbook properties

/////////////////////////////////////////////////////////////////////////////
// _Workbook operations

LPDISPATCH _Workbook::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Workbook::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::Activate()
{
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Workbook::GetActiveChart()
{
	LPDISPATCH result;
	InvokeHelper(0xb7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetActiveSheet()
{
	LPDISPATCH result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Workbook::GetAutoUpdateFrequency()
{
	long result;
	InvokeHelper(0x5a2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetAutoUpdateFrequency(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5a2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Workbook::GetAutoUpdateSaveChanges()
{
	BOOL result;
	InvokeHelper(0x5a3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetAutoUpdateSaveChanges(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Workbook::GetChangeHistoryDuration()
{
	long result;
	InvokeHelper(0x5a4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetChangeHistoryDuration(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5a4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Workbook::GetBuiltinDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x498, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::ChangeFileAccess(long Mode, const VARIANT& WritePassword, const VARIANT& Notify)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x3dd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Mode, &WritePassword, &Notify);
}

void _Workbook::ChangeLink(LPCTSTR Name, LPCTSTR NewName, long Type)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4;
	InvokeHelper(0x322, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, NewName, Type);
}

LPDISPATCH _Workbook::GetCharts()
{
	LPDISPATCH result;
	InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::Close(const VARIANT& SaveChanges, const VARIANT& Filename, const VARIANT& RouteWorkbook)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x115, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &SaveChanges, &Filename, &RouteWorkbook);
}

CString _Workbook::GetCodeName()
{
	CString result;
	InvokeHelper(0x55d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Workbook::Get_CodeName()
{
	CString result;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Workbook::Set_CodeName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

VARIANT _Workbook::GetColors(const VARIANT& Index)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x11e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&Index);
	return result;
}

void _Workbook::SetColors(const VARIANT& Index, const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x11e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &Index, &newValue);
}

LPDISPATCH _Workbook::GetCommandBars()
{
	LPDISPATCH result;
	InvokeHelper(0x59f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Workbook::GetConflictResolution()
{
	long result;
	InvokeHelper(0x497, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetConflictResolution(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x497, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH _Workbook::GetContainer()
{
	LPDISPATCH result;
	InvokeHelper(0x4a6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetCreateBackup()
{
	BOOL result;
	InvokeHelper(0x11f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetCustomDocumentProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x499, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetDate1904()
{
	BOOL result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDate1904(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::DeleteNumberFormat(LPCTSTR NumberFormat)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x18d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumberFormat);
}

long _Workbook::GetDisplayDrawingObjects()
{
	long result;
	InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDisplayDrawingObjects(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL _Workbook::ExclusiveAccess()
{
	BOOL result;
	InvokeHelper(0x490, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long _Workbook::GetFileFormat()
{
	long result;
	InvokeHelper(0x120, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::ForwardMailer()
{
	InvokeHelper(0x3cd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString _Workbook::GetFullName()
{
	CString result;
	InvokeHelper(0x121, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetHasPassword()
{
	BOOL result;
	InvokeHelper(0x122, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetIsAddin()
{
	BOOL result;
	InvokeHelper(0x5a5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetIsAddin(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5a5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _Workbook::LinkInfo(LPCTSTR Name, long LinkInfo, const VARIANT& Type, const VARIANT& EditionRef)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x327, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Name, LinkInfo, &Type, &EditionRef);
	return result;
}

VARIANT _Workbook::LinkSources(const VARIANT& Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x328, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Type);
	return result;
}

LPDISPATCH _Workbook::GetMailer()
{
	LPDISPATCH result;
	InvokeHelper(0x3d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::MergeWorkbook(const VARIANT& Filename)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x5a6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Filename);
}

BOOL _Workbook::GetMultiUserEditing()
{
	BOOL result;
	InvokeHelper(0x491, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Workbook::GetName()
{
	CString result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetNames()
{
	LPDISPATCH result;
	InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::NewWindow()
{
	LPDISPATCH result;
	InvokeHelper(0x118, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::OpenLinks(LPCTSTR Name, const VARIANT& ReadOnly, const VARIANT& Type)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x323, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, &ReadOnly, &Type);
}

CString _Workbook::GetPath()
{
	CString result;
	InvokeHelper(0x123, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetPersonalViewListSettings()
{
	BOOL result;
	InvokeHelper(0x5a7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetPersonalViewListSettings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5a7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetPersonalViewPrintSettings()
{
	BOOL result;
	InvokeHelper(0x5a8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetPersonalViewPrintSettings(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Workbook::PivotCaches()
{
	LPDISPATCH result;
	InvokeHelper(0x5a9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::Post(const VARIANT& DestName)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x48e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &DestName);
}

BOOL _Workbook::GetPrecisionAsDisplayed()
{
	BOOL result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetPrecisionAsDisplayed(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::PrintPreview(const VARIANT& EnableChanges)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x119, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &EnableChanges);
}

BOOL _Workbook::GetProtectStructure()
{
	BOOL result;
	InvokeHelper(0x24c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetProtectWindows()
{
	BOOL result;
	InvokeHelper(0x127, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetReadOnly()
{
	BOOL result;
	InvokeHelper(0x128, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::RefreshAll()
{
	InvokeHelper(0x5ac, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Workbook::Reply()
{
	InvokeHelper(0x3d1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Workbook::ReplyAll()
{
	InvokeHelper(0x3d2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Workbook::RemoveUser(long Index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5ad, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Index);
}

long _Workbook::GetRevisionNumber()
{
	long result;
	InvokeHelper(0x494, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::RunAutoMacros(long Which)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x27a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Which);
}

void _Workbook::Save()
{
	InvokeHelper(0x11b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Workbook::SaveCopyAs(const VARIANT& Filename)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Filename);
}

BOOL _Workbook::GetSaved()
{
	BOOL result;
	InvokeHelper(0x12a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetSaved(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetSaveLinkValues()
{
	BOOL result;
	InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetSaveLinkValues(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::SendMail(const VARIANT& Recipients, const VARIANT& Subject, const VARIANT& ReturnReceipt)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x3b3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Recipients, &Subject, &ReturnReceipt);
}

void _Workbook::SendMailer(const VARIANT& FileFormat, long Priority)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper(0x3d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &FileFormat, Priority);
}

void _Workbook::SetLinkOnData(LPCTSTR Name, const VARIANT& Procedure)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT;
	InvokeHelper(0x329, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, &Procedure);
}

LPDISPATCH _Workbook::GetSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x1e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetShowConflictHistory()
{
	BOOL result;
	InvokeHelper(0x493, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetShowConflictHistory(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x493, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Workbook::GetStyles()
{
	LPDISPATCH result;
	InvokeHelper(0x1ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::Unprotect(const VARIANT& Password)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x11d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Password);
}

void _Workbook::UnprotectSharing(const VARIANT& SharingPassword)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x5af, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &SharingPassword);
}

void _Workbook::UpdateFromFile()
{
	InvokeHelper(0x3e3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void _Workbook::UpdateLink(const VARIANT& Name, const VARIANT& Type)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x324, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Name, &Type);
}

BOOL _Workbook::GetUpdateRemoteReferences()
{
	BOOL result;
	InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetUpdateRemoteReferences(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x19b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT _Workbook::GetUserStatus()
{
	VARIANT result;
	InvokeHelper(0x495, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetCustomViews()
{
	LPDISPATCH result;
	InvokeHelper(0x5b0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetWindows()
{
	LPDISPATCH result;
	InvokeHelper(0x1ae, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetWorksheets()
{
	LPDISPATCH result;
	InvokeHelper(0x1ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetWriteReserved()
{
	BOOL result;
	InvokeHelper(0x12b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString _Workbook::GetWriteReservedBy()
{
	CString result;
	InvokeHelper(0x12c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetExcel4IntlMacroSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x245, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetExcel4MacroSheets()
{
	LPDISPATCH result;
	InvokeHelper(0x243, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetTemplateRemoveExtData()
{
	BOOL result;
	InvokeHelper(0x5b1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetTemplateRemoveExtData(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5b1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::HighlightChangesOptions(const VARIANT& When, const VARIANT& Who, const VARIANT& Where)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x5b2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &When, &Who, &Where);
}

BOOL _Workbook::GetHighlightChangesOnScreen()
{
	BOOL result;
	InvokeHelper(0x5b5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetHighlightChangesOnScreen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetKeepChangeHistory()
{
	BOOL result;
	InvokeHelper(0x5b6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetKeepChangeHistory(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetListChangesOnNewSheet()
{
	BOOL result;
	InvokeHelper(0x5b7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetListChangesOnNewSheet(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::PurgeChangeHistoryNow(long Days, const VARIANT& SharingPassword)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper(0x5b8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Days, &SharingPassword);
}

void _Workbook::AcceptAllChanges(const VARIANT& When, const VARIANT& Who, const VARIANT& Where)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x5ba, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &When, &Who, &Where);
}

void _Workbook::RejectAllChanges(const VARIANT& When, const VARIANT& Who, const VARIANT& Where)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x5bb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &When, &Who, &Where);
}

void _Workbook::ResetColors()
{
	InvokeHelper(0x5bc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Workbook::GetVBProject()
{
	LPDISPATCH result;
	InvokeHelper(0x5bd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::FollowHyperlink(LPCTSTR Address, const VARIANT& SubAddress, const VARIANT& NewWindow, const VARIANT& AddHistory, const VARIANT& ExtraInfo, const VARIANT& Method, const VARIANT& HeaderInfo)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x5be, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Address, &SubAddress, &NewWindow, &AddHistory, &ExtraInfo, &Method, &HeaderInfo);
}

void _Workbook::AddToFavorites()
{
	InvokeHelper(0x5c4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _Workbook::GetIsInplace()
{
	BOOL result;
	InvokeHelper(0x6e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::WebPagePreview()
{
	InvokeHelper(0x71a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Workbook::GetPublishObjects()
{
	LPDISPATCH result;
	InvokeHelper(0x71b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetWebOptions()
{
	LPDISPATCH result;
	InvokeHelper(0x71c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::ReloadAs(long Encoding)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x71d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Encoding);
}

BOOL _Workbook::GetEnvelopeVisible()
{
	BOOL result;
	InvokeHelper(0x720, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetEnvelopeVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x720, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Workbook::GetCalculationVersion()
{
	long result;
	InvokeHelper(0x70e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetVBASigned()
{
	BOOL result;
	InvokeHelper(0x724, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetShowPivotTableFieldList()
{
	BOOL result;
	InvokeHelper(0x7fe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetShowPivotTableFieldList(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7fe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Workbook::GetUpdateLinks()
{
	long result;
	InvokeHelper(0x360, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetUpdateLinks(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x360, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void _Workbook::BreakLink(LPCTSTR Name, long Type)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x7ff, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Name, Type);
}

void _Workbook::SaveAs(const VARIANT& Filename, const VARIANT& FileFormat, const VARIANT& Password, const VARIANT& WriteResPassword, const VARIANT& ReadOnlyRecommended, const VARIANT& CreateBackup, long AccessMode, const VARIANT& ConflictResolution, 
		const VARIANT& AddToMru, const VARIANT& TextCodepage, const VARIANT& TextVisualLayout, const VARIANT& Local)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x785, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Filename, &FileFormat, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, AccessMode, &ConflictResolution, &AddToMru, &TextCodepage, &TextVisualLayout, &Local);
}

BOOL _Workbook::GetEnableAutoRecover()
{
	BOOL result;
	InvokeHelper(0x801, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetEnableAutoRecover(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x801, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetRemovePersonalInformation()
{
	BOOL result;
	InvokeHelper(0x802, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetRemovePersonalInformation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x802, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString _Workbook::GetFullNameURLEncoded()
{
	CString result;
	InvokeHelper(0x787, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Workbook::CheckIn(const VARIANT& SaveChanges, const VARIANT& Comments, const VARIANT& MakePublic)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x803, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &SaveChanges, &Comments, &MakePublic);
}

BOOL _Workbook::CanCheckIn()
{
	BOOL result;
	InvokeHelper(0x805, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SendForReview(const VARIANT& Recipients, const VARIANT& Subject, const VARIANT& ShowMessage, const VARIANT& IncludeAttachment)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x806, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Recipients, &Subject, &ShowMessage, &IncludeAttachment);
}

void _Workbook::ReplyWithChanges(const VARIANT& ShowMessage)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x809, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &ShowMessage);
}

void _Workbook::EndReview()
{
	InvokeHelper(0x80a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString _Workbook::GetPassword()
{
	CString result;
	InvokeHelper(0x1ad, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Workbook::SetPassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1ad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Workbook::GetWritePassword()
{
	CString result;
	InvokeHelper(0x468, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Workbook::SetWritePassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x468, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString _Workbook::GetPasswordEncryptionProvider()
{
	CString result;
	InvokeHelper(0x80b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString _Workbook::GetPasswordEncryptionAlgorithm()
{
	CString result;
	InvokeHelper(0x80c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long _Workbook::GetPasswordEncryptionKeyLength()
{
	long result;
	InvokeHelper(0x80d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetPasswordEncryptionOptions(const VARIANT& PasswordEncryptionProvider, const VARIANT& PasswordEncryptionAlgorithm, const VARIANT& PasswordEncryptionKeyLength, const VARIANT& PasswordEncryptionFileProperties)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x80e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &PasswordEncryptionProvider, &PasswordEncryptionAlgorithm, &PasswordEncryptionKeyLength, &PasswordEncryptionFileProperties);
}

BOOL _Workbook::GetPasswordEncryptionFileProperties()
{
	BOOL result;
	InvokeHelper(0x80f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetReadOnlyRecommended()
{
	BOOL result;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetReadOnlyRecommended(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::Protect(const VARIANT& Password, const VARIANT& Structure, const VARIANT& Windows)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Password, &Structure, &Windows);
}

LPDISPATCH _Workbook::GetPermission()
{
	LPDISPATCH result;
	InvokeHelper(0x8d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetSharedWorkspace()
{
	LPDISPATCH result;
	InvokeHelper(0x8d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetSync()
{
	LPDISPATCH result;
	InvokeHelper(0x8da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::SendFaxOverInternet(const VARIANT& Recipients, const VARIANT& Subject, const VARIANT& ShowMessage)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x8db, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Recipients, &Subject, &ShowMessage);
}

LPDISPATCH _Workbook::GetXmlNamespaces()
{
	LPDISPATCH result;
	InvokeHelper(0x8dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetXmlMaps()
{
	LPDISPATCH result;
	InvokeHelper(0x8dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long _Workbook::XmlImport(LPCTSTR Url, LPDISPATCH* ImportMap, const VARIANT& Overwrite, const VARIANT& Destination)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_PDISPATCH VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x8de, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Url, ImportMap, &Overwrite, &Destination);
	return result;
}

LPDISPATCH _Workbook::GetSmartDocument()
{
	LPDISPATCH result;
	InvokeHelper(0x8e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetDocumentLibraryVersions()
{
	LPDISPATCH result;
	InvokeHelper(0x8e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetInactiveListBorderVisible()
{
	BOOL result;
	InvokeHelper(0x8e3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetInactiveListBorderVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetDisplayInkComments()
{
	BOOL result;
	InvokeHelper(0x8e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDisplayInkComments(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long _Workbook::XmlImportXml(LPCTSTR Data, LPDISPATCH* ImportMap, const VARIANT& Overwrite, const VARIANT& Destination)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_PDISPATCH VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x8e5, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Data, ImportMap, &Overwrite, &Destination);
	return result;
}

void _Workbook::SaveAsXMLData(LPCTSTR Filename, LPDISPATCH Map)
{
	static BYTE parms[] =
		VTS_BSTR VTS_DISPATCH;
	InvokeHelper(0x8e6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename, Map);
}

void _Workbook::ToggleFormsDesign()
{
	InvokeHelper(0x8e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Workbook::GetContentTypeProperties()
{
	LPDISPATCH result;
	InvokeHelper(0x9d0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetConnections()
{
	LPDISPATCH result;
	InvokeHelper(0x9d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::RemoveDocumentInformation(long RemoveDocInfoType)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9d2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 RemoveDocInfoType);
}

LPDISPATCH _Workbook::GetSignatures()
{
	LPDISPATCH result;
	InvokeHelper(0x9d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::CheckInWithVersion(const VARIANT& SaveChanges, const VARIANT& Comments, const VARIANT& MakePublic, const VARIANT& VersionType)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &SaveChanges, &Comments, &MakePublic, &VersionType);
}

LPDISPATCH _Workbook::GetServerPolicy()
{
	LPDISPATCH result;
	InvokeHelper(0x9d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::LockServerFile()
{
	InvokeHelper(0x9d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH _Workbook::GetDocumentInspectors()
{
	LPDISPATCH result;
	InvokeHelper(0x9d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetWorkflowTasks()
{
	LPDISPATCH result;
	InvokeHelper(0x9da, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetWorkflowTemplates()
{
	LPDISPATCH result;
	InvokeHelper(0x9db, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::PrintOut(const VARIANT& From, const VARIANT& To, const VARIANT& Copies, const VARIANT& Preview, const VARIANT& ActivePrinter, const VARIANT& PrintToFile, const VARIANT& Collate, const VARIANT& PrToFileName, 
		const VARIANT& IgnorePrintAreas)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x939, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName, &IgnorePrintAreas);
}

LPDISPATCH _Workbook::GetServerViewableItems()
{
	LPDISPATCH result;
	InvokeHelper(0x9dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetTableStyles()
{
	LPDISPATCH result;
	InvokeHelper(0x9dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Workbook::GetDefaultTableStyle()
{
	VARIANT result;
	InvokeHelper(0x9de, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDefaultTableStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT _Workbook::GetDefaultPivotTableStyle()
{
	VARIANT result;
	InvokeHelper(0x9df, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDefaultPivotTableStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL _Workbook::GetCheckCompatibility()
{
	BOOL result;
	InvokeHelper(0x9e0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetCheckCompatibility(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetHasVBProject()
{
	BOOL result;
	InvokeHelper(0x9e1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetCustomXMLParts()
{
	LPDISPATCH result;
	InvokeHelper(0x9e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetFinal()
{
	BOOL result;
	InvokeHelper(0x9e3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetFinal(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

LPDISPATCH _Workbook::GetResearch()
{
	LPDISPATCH result;
	InvokeHelper(0x9e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetTheme()
{
	LPDISPATCH result;
	InvokeHelper(0x9e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void _Workbook::ApplyTheme(LPCTSTR Filename)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9e6, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename);
}

BOOL _Workbook::GetExcel8CompatibilityMode()
{
	BOOL result;
	InvokeHelper(0x9e7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL _Workbook::GetConnectionsDisabled()
{
	BOOL result;
	InvokeHelper(0x9e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::EnableConnections()
{
	InvokeHelper(0x9e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL _Workbook::GetShowPivotChartActiveFields()
{
	BOOL result;
	InvokeHelper(0x9ea, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetShowPivotChartActiveFields(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::ExportAsFixedFormat(long Type, const VARIANT& Filename, const VARIANT& Quality, const VARIANT& IncludeDocProperties, const VARIANT& IgnorePrintAreas, const VARIANT& From, const VARIANT& To, const VARIANT& OpenAfterPublish, 
		const VARIANT& FixedFormatExtClassPtr)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, &Filename, &Quality, &IncludeDocProperties, &IgnorePrintAreas, &From, &To, &OpenAfterPublish, &FixedFormatExtClassPtr);
}

LPDISPATCH _Workbook::GetIconSets()
{
	LPDISPATCH result;
	InvokeHelper(0x9eb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString _Workbook::GetEncryptionProvider()
{
	CString result;
	InvokeHelper(0x9ec, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void _Workbook::SetEncryptionProvider(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x9ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL _Workbook::GetDoNotPromptForConvert()
{
	BOOL result;
	InvokeHelper(0x9ed, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDoNotPromptForConvert(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL _Workbook::GetForceFullCalculation()
{
	BOOL result;
	InvokeHelper(0x9ee, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void _Workbook::SetForceFullCalculation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void _Workbook::ProtectSharing(const VARIANT& Filename, const VARIANT& Password, const VARIANT& WriteResPassword, const VARIANT& ReadOnlyRecommended, const VARIANT& CreateBackup, const VARIANT& SharingPassword, const VARIANT& FileFormat)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9ef, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Filename, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, &SharingPassword, &FileFormat);
}

LPDISPATCH _Workbook::GetSlicerCaches()
{
	LPDISPATCH result;
	InvokeHelper(0xb32, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH _Workbook::GetActiveSlicer()
{
	LPDISPATCH result;
	InvokeHelper(0xb33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT _Workbook::GetDefaultSlicerStyle()
{
	VARIANT result;
	InvokeHelper(0xb34, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void _Workbook::SetDefaultSlicerStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xb34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long _Workbook::GetAccuracyVersion()
{
	long result;
	InvokeHelper(0xb37, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void _Workbook::SetAccuracyVersion(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb37, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}


/////////////////////////////////////////////////////////////////////////////
// Workbooks properties

/////////////////////////////////////////////////////////////////////////////
// Workbooks operations

LPDISPATCH Workbooks::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Workbooks::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Workbooks::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Workbooks::Add(const VARIANT& Template)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Template);
	return result;
}

void Workbooks::Close()
{
	InvokeHelper(0x115, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long Workbooks::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Workbooks::GetItem(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPUNKNOWN Workbooks::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH Workbooks::Get_Default(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

LPDISPATCH Workbooks::Open(LPCTSTR Filename, const VARIANT& UpdateLinks, const VARIANT& ReadOnly, const VARIANT& Format, const VARIANT& Password, const VARIANT& WriteResPassword, const VARIANT& IgnoreReadOnlyRecommended, const VARIANT& Origin, 
		const VARIANT& Delimiter, const VARIANT& Editable, const VARIANT& Notify, const VARIANT& Converter, const VARIANT& AddToMru, const VARIANT& Local, const VARIANT& CorruptLoad)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x783, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Filename, &UpdateLinks, &ReadOnly, &Format, &Password, &WriteResPassword, &IgnoreReadOnlyRecommended, &Origin, &Delimiter, &Editable, &Notify, &Converter, &AddToMru, &Local, &CorruptLoad);
	return result;
}

void Workbooks::OpenText(LPCTSTR Filename, const VARIANT& Origin, const VARIANT& StartRow, const VARIANT& DataType, long TextQualifier, const VARIANT& ConsecutiveDelimiter, const VARIANT& Tab, const VARIANT& Semicolon, const VARIANT& Comma, 
		const VARIANT& Space, const VARIANT& Other, const VARIANT& OtherChar, const VARIANT& FieldInfo, const VARIANT& TextVisualLayout, const VARIANT& DecimalSeparator, const VARIANT& ThousandsSeparator, const VARIANT& TrailingMinusNumbers, 
		const VARIANT& Local)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x784, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename, &Origin, &StartRow, &DataType, TextQualifier, &ConsecutiveDelimiter, &Tab, &Semicolon, &Comma, &Space, &Other, &OtherChar, &FieldInfo, &TextVisualLayout, &DecimalSeparator, &ThousandsSeparator, &TrailingMinusNumbers, &Local);
}

LPDISPATCH Workbooks::OpenDatabase(LPCTSTR Filename, const VARIANT& CommandText, const VARIANT& CommandType, const VARIANT& BackgroundQuery, const VARIANT& ImportDataAs)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x813, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Filename, &CommandText, &CommandType, &BackgroundQuery, &ImportDataAs);
	return result;
}

void Workbooks::CheckOut(LPCTSTR Filename)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x815, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Filename);
}

BOOL Workbooks::CanCheckOut(LPCTSTR Filename)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x816, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Filename);
	return result;
}

LPDISPATCH Workbooks::OpenXML(LPCTSTR Filename, const VARIANT& Stylesheets, const VARIANT& LoadOption)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x8e8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Filename, &Stylesheets, &LoadOption);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// Range properties

/////////////////////////////////////////////////////////////////////////////
// Range operations

LPDISPATCH Range::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Range::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::Activate()
{
	VARIANT result;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetAddIndent()
{
	VARIANT result;
	InvokeHelper(0x427, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetAddIndent(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x427, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

CString Range::GetAddress(const VARIANT& RowAbsolute, const VARIANT& ColumnAbsolute, long ReferenceStyle, const VARIANT& External, const VARIANT& RelativeTo)
{
	CString result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xec, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		&RowAbsolute, &ColumnAbsolute, ReferenceStyle, &External, &RelativeTo);
	return result;
}

CString Range::GetAddressLocal(const VARIANT& RowAbsolute, const VARIANT& ColumnAbsolute, long ReferenceStyle, const VARIANT& External, const VARIANT& RelativeTo)
{
	CString result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1b5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		&RowAbsolute, &ColumnAbsolute, ReferenceStyle, &External, &RelativeTo);
	return result;
}

VARIANT Range::AdvancedFilter(long Action, const VARIANT& CriteriaRange, const VARIANT& CopyToRange, const VARIANT& Unique)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x36c, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Action, &CriteriaRange, &CopyToRange, &Unique);
	return result;
}

VARIANT Range::ApplyNames(const VARIANT& Names, const VARIANT& IgnoreRelativeAbsolute, const VARIANT& UseRowColumnNames, const VARIANT& OmitColumn, const VARIANT& OmitRow, long Order, const VARIANT& AppendLast)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT;
	InvokeHelper(0x1b9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Names, &IgnoreRelativeAbsolute, &UseRowColumnNames, &OmitColumn, &OmitRow, Order, &AppendLast);
	return result;
}

VARIANT Range::ApplyOutlineStyles()
{
	VARIANT result;
	InvokeHelper(0x1c0, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetAreas()
{
	LPDISPATCH result;
	InvokeHelper(0x238, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Range::AutoComplete(LPCTSTR String)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4a1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		String);
	return result;
}

VARIANT Range::AutoFill(LPDISPATCH Destination, long Type)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x1c1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Destination, Type);
	return result;
}

VARIANT Range::AutoFilter(const VARIANT& Field, const VARIANT& Criteria1, long Operator, const VARIANT& Criteria2, const VARIANT& VisibleDropDown)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x319, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Field, &Criteria1, Operator, &Criteria2, &VisibleDropDown);
	return result;
}

VARIANT Range::AutoFit()
{
	VARIANT result;
	InvokeHelper(0xed, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::AutoOutline()
{
	VARIANT result;
	InvokeHelper(0x40c, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetBorders()
{
	LPDISPATCH result;
	InvokeHelper(0x1b3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::Calculate()
{
	VARIANT result;
	InvokeHelper(0x117, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetCells()
{
	LPDISPATCH result;
	InvokeHelper(0xee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetCharacters(const VARIANT& Start, const VARIANT& Length)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x25b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Start, &Length);
	return result;
}

VARIANT Range::CheckSpelling(const VARIANT& CustomDictionary, const VARIANT& IgnoreUppercase, const VARIANT& AlwaysSuggest, const VARIANT& SpellLang)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1f9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&CustomDictionary, &IgnoreUppercase, &AlwaysSuggest, &SpellLang);
	return result;
}

VARIANT Range::Clear()
{
	VARIANT result;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::ClearContents()
{
	VARIANT result;
	InvokeHelper(0x71, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::ClearFormats()
{
	VARIANT result;
	InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::ClearNotes()
{
	VARIANT result;
	InvokeHelper(0xef, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::ClearOutline()
{
	VARIANT result;
	InvokeHelper(0x40d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Range::GetColumn()
{
	long result;
	InvokeHelper(0xf0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::ColumnDifferences(const VARIANT& Comparison)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1fe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Comparison);
	return result;
}

LPDISPATCH Range::GetColumns()
{
	LPDISPATCH result;
	InvokeHelper(0xf1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetColumnWidth()
{
	VARIANT result;
	InvokeHelper(0xf2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetColumnWidth(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xf2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::Consolidate(const VARIANT& Sources, const VARIANT& Function, const VARIANT& TopRow, const VARIANT& LeftColumn, const VARIANT& CreateLinks)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1e2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Sources, &Function, &TopRow, &LeftColumn, &CreateLinks);
	return result;
}

VARIANT Range::Copy(const VARIANT& Destination)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Destination);
	return result;
}

long Range::CopyFromRecordset(LPUNKNOWN Data, const VARIANT& MaxRows, const VARIANT& MaxColumns)
{
	long result;
	static BYTE parms[] =
		VTS_UNKNOWN VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x480, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Data, &MaxRows, &MaxColumns);
	return result;
}

VARIANT Range::CopyPicture(long Appearance, long Format)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xd5, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Appearance, Format);
	return result;
}

long Range::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT Range::CreateNames(const VARIANT& Top, const VARIANT& Left, const VARIANT& Bottom, const VARIANT& Right)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1c9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Top, &Left, &Bottom, &Right);
	return result;
}

LPDISPATCH Range::GetCurrentArray()
{
	LPDISPATCH result;
	InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetCurrentRegion()
{
	LPDISPATCH result;
	InvokeHelper(0xf3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::Cut(const VARIANT& Destination)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x235, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Destination);
	return result;
}

VARIANT Range::DataSeries(const VARIANT& Rowcol, long Type, long Date, const VARIANT& Step, const VARIANT& Stop, const VARIANT& Trend)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1d0, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Rowcol, Type, Date, &Step, &Stop, &Trend);
	return result;
}

VARIANT Range::Get_Default(const VARIANT& RowIndex, const VARIANT& ColumnIndex)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&RowIndex, &ColumnIndex);
	return result;
}

void Range::Set_Default(const VARIANT& RowIndex, const VARIANT& ColumnIndex, const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &RowIndex, &ColumnIndex, &newValue);
}

VARIANT Range::Delete(const VARIANT& Shift)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Shift);
	return result;
}

LPDISPATCH Range::GetDependents()
{
	LPDISPATCH result;
	InvokeHelper(0x21f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::DialogBox_()
{
	VARIANT result;
	InvokeHelper(0xf5, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetDirectDependents()
{
	LPDISPATCH result;
	InvokeHelper(0x221, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetDirectPrecedents()
{
	LPDISPATCH result;
	InvokeHelper(0x222, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::EditionOptions(long Type, long Option, const VARIANT& Name, const VARIANT& Reference, long Appearance, long ChartSize, const VARIANT& Format)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper(0x46b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Type, Option, &Name, &Reference, Appearance, ChartSize, &Format);
	return result;
}

LPDISPATCH Range::GetEnd(long Direction)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1f4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		Direction);
	return result;
}

LPDISPATCH Range::GetEntireColumn()
{
	LPDISPATCH result;
	InvokeHelper(0xf6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetEntireRow()
{
	LPDISPATCH result;
	InvokeHelper(0xf7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::FillDown()
{
	VARIANT result;
	InvokeHelper(0xf8, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::FillLeft()
{
	VARIANT result;
	InvokeHelper(0xf9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::FillRight()
{
	VARIANT result;
	InvokeHelper(0xfa, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::FillUp()
{
	VARIANT result;
	InvokeHelper(0xfb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::Find(const VARIANT& What, const VARIANT& After, const VARIANT& LookIn, const VARIANT& LookAt, const VARIANT& SearchOrder, long SearchDirection, const VARIANT& MatchCase, const VARIANT& MatchByte, const VARIANT& SearchFormat)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x18e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&What, &After, &LookIn, &LookAt, &SearchOrder, SearchDirection, &MatchCase, &MatchByte, &SearchFormat);
	return result;
}

LPDISPATCH Range::FindNext(const VARIANT& After)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x18f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&After);
	return result;
}

LPDISPATCH Range::FindPrevious(const VARIANT& After)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x190, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&After);
	return result;
}

LPDISPATCH Range::GetFont()
{
	LPDISPATCH result;
	InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetFormula()
{
	VARIANT result;
	InvokeHelper(0x105, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetFormula(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x105, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetFormulaArray()
{
	VARIANT result;
	InvokeHelper(0x24a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetFormulaArray(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x24a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetFormulaHidden()
{
	VARIANT result;
	InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetFormulaHidden(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x106, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetFormulaLocal()
{
	VARIANT result;
	InvokeHelper(0x107, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetFormulaLocal(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x107, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetFormulaR1C1()
{
	VARIANT result;
	InvokeHelper(0x108, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetFormulaR1C1(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x108, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetFormulaR1C1Local()
{
	VARIANT result;
	InvokeHelper(0x109, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetFormulaR1C1Local(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x109, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::FunctionWizard()
{
	VARIANT result;
	InvokeHelper(0x23b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::Group(const VARIANT& Start, const VARIANT& End, const VARIANT& By, const VARIANT& Periods)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x2e, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Start, &End, &By, &Periods);
	return result;
}

VARIANT Range::GetHasArray()
{
	VARIANT result;
	InvokeHelper(0x10a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetHasFormula()
{
	VARIANT result;
	InvokeHelper(0x10b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetHeight()
{
	VARIANT result;
	InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetHidden()
{
	VARIANT result;
	InvokeHelper(0x10c, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetHidden(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x10c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetHorizontalAlignment()
{
	VARIANT result;
	InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetHorizontalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetIndentLevel()
{
	VARIANT result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetIndentLevel(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void Range::InsertIndent(long InsertAmount)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x565, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 InsertAmount);
}

VARIANT Range::Insert(const VARIANT& Shift, const VARIANT& CopyOrigin)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xfc, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Shift, &CopyOrigin);
	return result;
}

LPDISPATCH Range::GetInterior()
{
	LPDISPATCH result;
	InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetItem(const VARIANT& RowIndex, const VARIANT& ColumnIndex)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&RowIndex, &ColumnIndex);
	return result;
}

void Range::SetItem(const VARIANT& RowIndex, const VARIANT& ColumnIndex, const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &RowIndex, &ColumnIndex, &newValue);
}

VARIANT Range::Justify()
{
	VARIANT result;
	InvokeHelper(0x1ef, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetLeft()
{
	VARIANT result;
	InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Range::GetListHeaderRows()
{
	long result;
	InvokeHelper(0x4a3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT Range::ListNames()
{
	VARIANT result;
	InvokeHelper(0xfd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long Range::GetLocationInTable()
{
	long result;
	InvokeHelper(0x2b3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetLocked()
{
	VARIANT result;
	InvokeHelper(0x10d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetLocked(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x10d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void Range::Merge(const VARIANT& Across)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x234, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Across);
}

void Range::UnMerge()
{
	InvokeHelper(0x568, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Range::GetMergeArea()
{
	LPDISPATCH result;
	InvokeHelper(0x569, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetMergeCells()
{
	VARIANT result;
	InvokeHelper(0xd0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetMergeCells(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xd0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetName()
{
	VARIANT result;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetName(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::NavigateArrow(const VARIANT& TowardPrecedent, const VARIANT& ArrowNumber, const VARIANT& LinkNumber)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x408, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&TowardPrecedent, &ArrowNumber, &LinkNumber);
	return result;
}

LPUNKNOWN Range::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetNext()
{
	LPDISPATCH result;
	InvokeHelper(0x1f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString Range::NoteText(const VARIANT& Text, const VARIANT& Start, const VARIANT& Length)
{
	CString result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x467, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		&Text, &Start, &Length);
	return result;
}

VARIANT Range::GetNumberFormat()
{
	VARIANT result;
	InvokeHelper(0xc1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetNumberFormat(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetNumberFormatLocal()
{
	VARIANT result;
	InvokeHelper(0x449, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetNumberFormatLocal(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x449, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

LPDISPATCH Range::GetOffset(const VARIANT& RowOffset, const VARIANT& ColumnOffset)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xfe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&RowOffset, &ColumnOffset);
	return result;
}

VARIANT Range::GetOrientation()
{
	VARIANT result;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetOrientation(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetOutlineLevel()
{
	VARIANT result;
	InvokeHelper(0x10f, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetOutlineLevel(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x10f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long Range::GetPageBreak()
{
	long result;
	InvokeHelper(0xff, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Range::SetPageBreak(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xff, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT Range::Parse(const VARIANT& ParseLine, const VARIANT& Destination)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1dd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&ParseLine, &Destination);
	return result;
}

LPDISPATCH Range::GetPivotField()
{
	LPDISPATCH result;
	InvokeHelper(0x2db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetPivotItem()
{
	LPDISPATCH result;
	InvokeHelper(0x2e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetPivotTable()
{
	LPDISPATCH result;
	InvokeHelper(0x2cc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetPrecedents()
{
	LPDISPATCH result;
	InvokeHelper(0x220, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetPrefixCharacter()
{
	VARIANT result;
	InvokeHelper(0x1f8, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetPrevious()
{
	LPDISPATCH result;
	InvokeHelper(0x1f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::PrintPreview(const VARIANT& EnableChanges)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x119, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&EnableChanges);
	return result;
}

LPDISPATCH Range::GetQueryTable()
{
	LPDISPATCH result;
	InvokeHelper(0x56a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetRange(const VARIANT& Cell1, const VARIANT& Cell2)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Cell1, &Cell2);
	return result;
}

VARIANT Range::RemoveSubtotal()
{
	VARIANT result;
	InvokeHelper(0x373, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

BOOL Range::Replace(const VARIANT& What, const VARIANT& Replacement, const VARIANT& LookAt, const VARIANT& SearchOrder, const VARIANT& MatchCase, const VARIANT& MatchByte, const VARIANT& SearchFormat, const VARIANT& ReplaceFormat)
{
	BOOL result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xe2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		&What, &Replacement, &LookAt, &SearchOrder, &MatchCase, &MatchByte, &SearchFormat, &ReplaceFormat);
	return result;
}

LPDISPATCH Range::GetResize(const VARIANT& RowSize, const VARIANT& ColumnSize)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x100, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&RowSize, &ColumnSize);
	return result;
}

long Range::GetRow()
{
	long result;
	InvokeHelper(0x101, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::RowDifferences(const VARIANT& Comparison)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x1ff, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Comparison);
	return result;
}

VARIANT Range::GetRowHeight()
{
	VARIANT result;
	InvokeHelper(0x110, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetRowHeight(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x110, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

LPDISPATCH Range::GetRows()
{
	LPDISPATCH result;
	InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::Run(const VARIANT& Arg1, const VARIANT& Arg2, const VARIANT& Arg3, const VARIANT& Arg4, const VARIANT& Arg5, const VARIANT& Arg6, const VARIANT& Arg7, const VARIANT& Arg8, const VARIANT& Arg9, const VARIANT& Arg10, 
		const VARIANT& Arg11, const VARIANT& Arg12, const VARIANT& Arg13, const VARIANT& Arg14, const VARIANT& Arg15, const VARIANT& Arg16, const VARIANT& Arg17, const VARIANT& Arg18, const VARIANT& Arg19, const VARIANT& Arg20, 
		const VARIANT& Arg21, const VARIANT& Arg22, const VARIANT& Arg23, const VARIANT& Arg24, const VARIANT& Arg25, const VARIANT& Arg26, const VARIANT& Arg27, const VARIANT& Arg28, const VARIANT& Arg29, const VARIANT& Arg30)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT 
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x103, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
	return result;
}

VARIANT Range::Select()
{
	VARIANT result;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::Show()
{
	VARIANT result;
	InvokeHelper(0x1f0, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::ShowDependents(const VARIANT& Remove)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x36d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Remove);
	return result;
}

VARIANT Range::GetShowDetail()
{
	VARIANT result;
	InvokeHelper(0x249, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetShowDetail(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x249, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::ShowErrors()
{
	VARIANT result;
	InvokeHelper(0x36e, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::ShowPrecedents(const VARIANT& Remove)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x36f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Remove);
	return result;
}

VARIANT Range::GetShrinkToFit()
{
	VARIANT result;
	InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetShrinkToFit(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xd1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::Sort(const VARIANT& Key1, long Order1, const VARIANT& Key2, const VARIANT& Type, long Order2, const VARIANT& Key3, long Order3, long Header, const VARIANT& OrderCustom, const VARIANT& MatchCase, long Orientation, long SortMethod, 
		long DataOption1, long DataOption2, long DataOption3)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x370, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Key1, Order1, &Key2, &Type, Order2, &Key3, Order3, Header, &OrderCustom, &MatchCase, Orientation, SortMethod, DataOption1, DataOption2, DataOption3);
	return result;
}

VARIANT Range::SortSpecial(long SortMethod, const VARIANT& Key1, long Order1, const VARIANT& Type, const VARIANT& Key2, long Order2, const VARIANT& Key3, long Order3, long Header, const VARIANT& OrderCustom, const VARIANT& MatchCase, 
		long Orientation, long DataOption1, long DataOption2, long DataOption3)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x371, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		SortMethod, &Key1, Order1, &Type, &Key2, Order2, &Key3, Order3, Header, &OrderCustom, &MatchCase, Orientation, DataOption1, DataOption2, DataOption3);
	return result;
}

LPDISPATCH Range::GetSoundNote()
{
	LPDISPATCH result;
	InvokeHelper(0x394, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::SpecialCells(long Type, const VARIANT& Value)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT;
	InvokeHelper(0x19a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Type, &Value);
	return result;
}

VARIANT Range::GetStyle()
{
	VARIANT result;
	InvokeHelper(0x104, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetStyle(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x104, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::SubscribeTo(LPCTSTR Edition, long Format)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x1e1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Edition, Format);
	return result;
}

VARIANT Range::Subtotal(long GroupBy, long Function, const VARIANT& TotalList, const VARIANT& Replace, const VARIANT& PageBreaks, long SummaryBelowData)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4;
	InvokeHelper(0x372, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		GroupBy, Function, &TotalList, &Replace, &PageBreaks, SummaryBelowData);
	return result;
}

VARIANT Range::GetSummary()
{
	VARIANT result;
	InvokeHelper(0x111, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::Table(const VARIANT& RowInput, const VARIANT& ColumnInput)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x1f1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&RowInput, &ColumnInput);
	return result;
}

VARIANT Range::GetText()
{
	VARIANT result;
	InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::TextToColumns(const VARIANT& Destination, long DataType, long TextQualifier, const VARIANT& ConsecutiveDelimiter, const VARIANT& Tab, const VARIANT& Semicolon, const VARIANT& Comma, const VARIANT& Space, const VARIANT& Other, 
		const VARIANT& OtherChar, const VARIANT& FieldInfo, const VARIANT& DecimalSeparator, const VARIANT& ThousandsSeparator, const VARIANT& TrailingMinusNumbers)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x410, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&Destination, DataType, TextQualifier, &ConsecutiveDelimiter, &Tab, &Semicolon, &Comma, &Space, &Other, &OtherChar, &FieldInfo, &DecimalSeparator, &ThousandsSeparator, &TrailingMinusNumbers);
	return result;
}

VARIANT Range::GetTop()
{
	VARIANT result;
	InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::Ungroup()
{
	VARIANT result;
	InvokeHelper(0xf4, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetUseStandardHeight()
{
	VARIANT result;
	InvokeHelper(0x112, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetUseStandardHeight(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x112, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetUseStandardWidth()
{
	VARIANT result;
	InvokeHelper(0x113, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetUseStandardWidth(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x113, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

LPDISPATCH Range::GetValidation()
{
	LPDISPATCH result;
	InvokeHelper(0x56b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetValue(const VARIANT& RangeValueDataType)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		&RangeValueDataType);
	return result;
}

void Range::SetValue(const VARIANT& RangeValueDataType, const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &RangeValueDataType, &newValue);
}

VARIANT Range::GetValue2()
{
	VARIANT result;
	InvokeHelper(0x56c, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetValue2(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x56c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetVerticalAlignment()
{
	VARIANT result;
	InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetVerticalAlignment(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT Range::GetWidth()
{
	VARIANT result;
	InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetWorksheet()
{
	LPDISPATCH result;
	InvokeHelper(0x15c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::GetWrapText()
{
	VARIANT result;
	InvokeHelper(0x114, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Range::SetWrapText(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x114, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

LPDISPATCH Range::AddComment(const VARIANT& Text)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x56d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Text);
	return result;
}

LPDISPATCH Range::GetComment()
{
	LPDISPATCH result;
	InvokeHelper(0x38e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Range::ClearComments()
{
	InvokeHelper(0x56e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Range::GetPhonetic()
{
	LPDISPATCH result;
	InvokeHelper(0x56f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetFormatConditions()
{
	LPDISPATCH result;
	InvokeHelper(0x570, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Range::GetReadingOrder()
{
	long result;
	InvokeHelper(0x3cf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Range::SetReadingOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3cf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

LPDISPATCH Range::GetHyperlinks()
{
	LPDISPATCH result;
	InvokeHelper(0x571, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetPhonetics()
{
	LPDISPATCH result;
	InvokeHelper(0x713, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Range::SetPhonetic()
{
	InvokeHelper(0x714, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString Range::GetId()
{
	CString result;
	InvokeHelper(0x715, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Range::SetId(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x715, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH Range::GetPivotCell()
{
	LPDISPATCH result;
	InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Range::Dirty()
{
	InvokeHelper(0x7de, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Range::GetErrors()
{
	LPDISPATCH result;
	InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Range::Speak(const VARIANT& SpeakDirection, const VARIANT& SpeakFormulas)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &SpeakDirection, &SpeakFormulas);
}

VARIANT Range::PasteSpecial(long Paste, long Operation, const VARIANT& SkipBlanks, const VARIANT& Transpose)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x788, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		Paste, Operation, &SkipBlanks, &Transpose);
	return result;
}

BOOL Range::GetAllowEdit()
{
	BOOL result;
	InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetListObject()
{
	LPDISPATCH result;
	InvokeHelper(0x8d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetXPath()
{
	LPDISPATCH result;
	InvokeHelper(0x8d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetServerActions()
{
	LPDISPATCH result;
	InvokeHelper(0x9bb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Range::RemoveDuplicates(const VARIANT& Columns, long Header)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_I4;
	InvokeHelper(0x9bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Columns, Header);
}

VARIANT Range::PrintOut(const VARIANT& From, const VARIANT& To, const VARIANT& Copies, const VARIANT& Preview, const VARIANT& ActivePrinter, const VARIANT& PrintToFile, const VARIANT& Collate, const VARIANT& PrToFileName)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x939, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName);
	return result;
}

CString Range::GetMdx()
{
	CString result;
	InvokeHelper(0x84b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void Range::ExportAsFixedFormat(long Type, const VARIANT& Filename, const VARIANT& Quality, const VARIANT& IncludeDocProperties, const VARIANT& IgnorePrintAreas, const VARIANT& From, const VARIANT& To, const VARIANT& OpenAfterPublish, 
		const VARIANT& FixedFormatExtClassPtr)
{
	static BYTE parms[] =
		VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Type, &Filename, &Quality, &IncludeDocProperties, &IgnorePrintAreas, &From, &To, &OpenAfterPublish, &FixedFormatExtClassPtr);
}

VARIANT Range::GetCountLarge()
{
	VARIANT result;
	InvokeHelper(0x9c3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT Range::CalculateRowMajorOrder()
{
	VARIANT result;
	InvokeHelper(0x93c, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH Range::GetSparklineGroups()
{
	LPDISPATCH result;
	InvokeHelper(0xb25, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void Range::ClearHyperlinks()
{
	InvokeHelper(0xb26, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPDISPATCH Range::GetDisplayFormat()
{
	LPDISPATCH result;
	InvokeHelper(0x29a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Range::BorderAround(const VARIANT& LineStyle, long Weight, long ColorIndex, const VARIANT& Color, const VARIANT& ThemeColor)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xad3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms,
		&LineStyle, Weight, ColorIndex, &Color, &ThemeColor);
	return result;
}

void Range::AllocateChanges()
{
	InvokeHelper(0xb27, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Range::DiscardChanges()
{
	InvokeHelper(0xb28, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// Worksheets properties

/////////////////////////////////////////////////////////////////////////////
// Worksheets operations

LPDISPATCH Worksheets::GetApplication()
{
	LPDISPATCH result;
	InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long Worksheets::GetCreator()
{
	long result;
	InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH Worksheets::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Worksheets::Add(const VARIANT& Before, const VARIANT& After, const VARIANT& Count, const VARIANT& Type)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Before, &After, &Count, &Type);
	return result;
}

void Worksheets::Copy(const VARIANT& Before, const VARIANT& After)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x227, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Before, &After);
}

long Worksheets::GetCount()
{
	long result;
	InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void Worksheets::Delete()
{
	InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void Worksheets::FillAcrossSheets(LPDISPATCH Range, long Type)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x1d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Range, Type);
}

LPDISPATCH Worksheets::GetItem(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void Worksheets::Move(const VARIANT& Before, const VARIANT& After)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x27d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Before, &After);
}

LPUNKNOWN Worksheets::Get_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void Worksheets::PrintPreview(const VARIANT& EnableChanges)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x119, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &EnableChanges);
}

void Worksheets::Select(const VARIANT& Replace)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Replace);
}

LPDISPATCH Worksheets::GetHPageBreaks()
{
	LPDISPATCH result;
	InvokeHelper(0x58a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH Worksheets::GetVPageBreaks()
{
	LPDISPATCH result;
	InvokeHelper(0x58b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT Worksheets::GetVisible()
{
	VARIANT result;
	InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Worksheets::SetVisible(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

LPDISPATCH Worksheets::Get_Default(const VARIANT& Index)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Index);
	return result;
}

void Worksheets::PrintOut(const VARIANT& From, const VARIANT& To, const VARIANT& Copies, const VARIANT& Preview, const VARIANT& ActivePrinter, const VARIANT& PrintToFile, const VARIANT& Collate, const VARIANT& PrToFileName, 
		const VARIANT& IgnorePrintAreas)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x939, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName, &IgnorePrintAreas);
}
