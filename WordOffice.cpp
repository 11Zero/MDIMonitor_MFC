#include "WordOffice.h"

CWordOffice::CWordOffice()
{
 
}
CWordOffice::~CWordOffice()
{
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
    m_wdApp.Quit(vFalse,    // SaveChanges.
             vTrue,            // OriginalFormat.
             vFalse            // RouteDocument.
             );
    //释放内存申请资源
	m_wdFont.ReleaseDispatch();
	m_wdParagraph.ReleaseDispatch();
	m_wdParagraphs.ReleaseDispatch();
	m_wdCell.ReleaseDispatch();
	m_wdCells.ReleaseDispatch();
	m_wdTable.ReleaseDispatch();
	m_wdTables.ReleaseDispatch();
	m_wdBorder.ReleaseDispatch();
	m_wdBorders.ReleaseDispatch();
	//m_wdPagesetup.ReleaseDispatch();

    m_wdInlineShape.ReleaseDispatch();
    m_wdInlineShapes.ReleaseDispatch();
    //m_wdTb.ReleaseDispatch();
    m_wdRange.ReleaseDispatch();
    m_wdSel.ReleaseDispatch();
    //m_wdFt.ReleaseDispatch();
    m_wdDoc.ReleaseDispatch();
    m_wdDocs.ReleaseDispatch();
    m_wdApp.ReleaseDispatch();
}
 
//操作
BOOL CWordOffice::CreateApp()
{
    if (FALSE == m_wdApp.CreateDispatch("Word.Application"))
    {
        AfxMessageBox("Application创建失败，请确保安装了word 2000或以上版本!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    return TRUE;
}
 
BOOL CWordOffice::CreateDocuments()
{
    if (FALSE == CreateApp()) 
    {
        return FALSE;
    }
    m_wdDocs.AttachDispatch(m_wdApp.GetDocuments());
   if (!m_wdDocs.m_lpDispatch) 
    {
        AfxMessageBox("Documents创建失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
     }
   return TRUE;
}
 
BOOL CWordOffice::CreateDocument()
{
    if (!m_wdDocs.m_lpDispatch) 
    {
        AfxMessageBox("Documents为空!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
 
    COleVariant varTrue(short(1),VT_BOOL),vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
    CComVariant Template(_T(""));    //没有使用WORD的文档模板
    CComVariant NewTemplate(false),DocumentType(0),Visible;
 
    m_wdDocs.Add(&Template,&NewTemplate,&DocumentType,&Visible);    
 
    //得到document变量
    m_wdDoc = m_wdApp.GetActiveDocument();
    if (!m_wdDoc.m_lpDispatch) 
    {
        AfxMessageBox("Document获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到selection变量
    m_wdSel = m_wdApp.GetSelection();
    if (!m_wdSel.m_lpDispatch) 
    {
        AfxMessageBox("Select获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到RangeW变量
    m_wdRange = m_wdDoc.RangeW(vOptional,vOptional);
    if(!m_wdRange.m_lpDispatch)
    {
        AfxMessageBox("RangeW获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
 
    return TRUE;
}
 
BOOL CWordOffice::Create()
{
    if (FALSE == CreateDocuments()) 
    {
        return FALSE;
    }
    return CreateDocument();
}
 
void CWordOffice::ShowApp()
{
    m_wdApp.SetVisible(TRUE);
}
 
void CWordOffice::HideApp()
{
    m_wdApp.SetVisible(FALSE);
}
 
BOOL CWordOffice::OpenDocument(CString fileName)
{
    if (!m_wdDocs.m_lpDispatch) 
    {
        AfxMessageBox("Documents为空!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
 
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR),
                vZ((short)0);
    COleVariant     vFileName(_T(fileName));
     
    //得到document变量
    m_wdDoc.AttachDispatch(m_wdDocs.Open(
                                vFileName,        // FileName
                                vTrue,            // Confirm Conversion.
                                vFalse,            // ReadOnly.
                                vFalse,            // AddToRecentFiles.
                                vOptional,        // PasswordDocument.
                                vOptional,        // PasswordTemplate.
                                vOptional,        // Revert.
                                vOptional,        // WritePasswordDocument.
                                vOptional,        // WritePasswordTemplate.
                                vOptional,        // Format. // Last argument for Word 97
                                vOptional,        // Encoding // New for Word 2000/2002
                                vOptional,        // Visible
                                //如下4个是word2003需要的参数。本版本是word2000。
                                vOptional,    // OpenAndRepair
                                vZ,            // DocumentDirection wdDocumentDirection LeftToRight
                                vOptional,    // NoEncodingDialog
                                vOptional
                                 
                                )                // Close Open parameters
                            );                    // Close AttachDispatch
     
    if (!m_wdDoc.m_lpDispatch) 
    {
        AfxMessageBox("Document获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到selection变量
    m_wdSel = m_wdApp.GetSelection();
    if (!m_wdSel.m_lpDispatch) 
    {
        AfxMessageBox("Select获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到全部DOC的RangeW变量
    m_wdRange = m_wdDoc.RangeW(vOptional,vOptional);
    if(!m_wdRange.m_lpDispatch)
    {
        AfxMessageBox("RangeW获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    return TRUE;
}
 
BOOL CWordOffice::Open(CString fileName)
{
    if (FALSE == CreateDocuments()) 
    {
        return FALSE;
    }
    return OpenDocument(fileName);
}
 
BOOL CWordOffice::SetActiveDocument(short i)
{
    COleVariant     vIndex(_T(i)),vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
 
    m_wdDoc.AttachDispatch(m_wdDocs.Item(vIndex));
    m_wdDoc.Activate();
    if (!m_wdDoc.m_lpDispatch) 
    {
        AfxMessageBox("Document获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到selection变量
    m_wdSel = m_wdApp.GetSelection();
    if (!m_wdSel.m_lpDispatch) 
    {
        AfxMessageBox("Select获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到全部DOC的RangeW变量
    m_wdRange = m_wdDoc.RangeW(vOptional,vOptional);
    if(!m_wdRange.m_lpDispatch)
    {
        AfxMessageBox("RangeW获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    HideApp();
    return TRUE;
}
 
BOOL CWordOffice::SaveDocument()
{
    if (!m_wdDoc.m_lpDispatch) 
    {
        AfxMessageBox("Document获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    m_wdDoc.Save();
    return TRUE;
}
 
BOOL CWordOffice::SaveDocumentAs(CString fileName)
{
    if (!m_wdDoc.m_lpDispatch) 
    {
        AfxMessageBox("Document获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
    COleVariant vFileName(_T(fileName));
 
    m_wdDoc.SaveAs(
                vFileName,    //VARIANT* FileName
                vOptional,    //VARIANT* FileFormat
                vOptional,    //VARIANT* LockComments
                vOptional,    //VARIANT* Password
                vOptional,    //VARIANT* AddToRecentFiles
                vOptional,    //VARIANT* WritePassword
                vOptional,    //VARIANT* ReadOnlyRecommended
                vOptional,    //VARIANT* EmbedTrueTypeFonts
                vOptional,    //VARIANT* SaveNativePictureFormat
                vOptional,    //VARIANT* SaveFormsData
                vOptional,    //VARIANT* SaveAsAOCELetter
                vOptional,
                vOptional,
                vOptional,
                vOptional,
                //vOptional,
                vOptional
                );
    return    TRUE;
}
 
BOOL CWordOffice::CloseDocument()
{
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
    m_wdDoc.Close(vFalse,    // SaveChanges.
             vTrue,            // OriginalFormat.
             vFalse            // RouteDocument.
             );
    m_wdDoc.AttachDispatch(m_wdApp.GetActiveDocument());
    if (!m_wdDoc.m_lpDispatch) 
    {
        AfxMessageBox("Document获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到selection变量
    m_wdSel = m_wdApp.GetSelection();
    if (!m_wdSel.m_lpDispatch) 
    {
        AfxMessageBox("Select获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    //得到全部DOC的RangeW变量
    m_wdRange = m_wdDoc.RangeW(vOptional,vOptional);
    if(!m_wdRange.m_lpDispatch)
    {
        AfxMessageBox("RangeW获取失败!", MB_OK|MB_ICONWARNING);
        return FALSE;
    }
    return TRUE;
}
 
void CWordOffice::CloseApp()
{
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
    m_wdDoc.Save();
    m_wdApp.Quit(vFalse,    // SaveChanges.
             vTrue,            // OriginalFormat.
             vFalse            // RouteDocument.
             );
    //释放内存申请资源
    m_wdInlineShape.ReleaseDispatch();
    m_wdInlineShapes.ReleaseDispatch();
    //m_wdTb.ReleaseDispatch();
    m_wdRange.ReleaseDispatch();
    m_wdSel.ReleaseDispatch();
    //m_wdFt.ReleaseDispatch();
    m_wdDoc.ReleaseDispatch();
    m_wdDocs.ReleaseDispatch();
    m_wdApp.ReleaseDispatch();
}
 
void CWordOffice::WriteText(CString szText)
{
    m_wdSel.TypeText(szText);
}
/*void CWordOffice::WriteText(CString szText,CString FontVal,int FontSize,BOOL IfBold,)
{
    m_wdSel.TypeText(szText);
}*/
 
void CWordOffice::WriteNewLineText(CString szText, int nLineCount /* = 1 */)
{
    int i;
    if (nLineCount <= 0)
    {
        nLineCount = 0;
    }
    for (i = 0; i < nLineCount; i++)
    {
        m_wdSel.TypeParagraph();
    }
    WriteText(szText);
}
 
void CWordOffice::WriteEndLine(CString szText)
{
    m_wdRange.InsertAfter(szText);
}

void CWordOffice::WriteEndLine(CString szText,float FontSize,BOOL IfBold,CString FontName)
{

    m_wdRange.InsertAfter(szText);
	m_wdFont = m_wdRange.GetFont();
	m_wdFont.SetSize(FontSize);
	m_wdFont.SetBold(IfBold);
	m_wdFont.SetName(FontName);
	m_wdRange.SetFont(m_wdFont);
	

}

void CWordOffice::WholeStory()
{
    m_wdRange.WholeStory();
}
 
void CWordOffice::Copy()
{
    m_wdRange.CopyAsPicture();
}
 
void CWordOffice::InsertFile(CString fileName)
{
    COleVariant     vFileName(fileName),
                 vTrue((short)TRUE),
                 vFalse((short)FALSE),
                 vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR),
                 vNull(_T(""));
    /*
    void InsertFile(LPCTSTR FileName, VARIANT* RangeW, VARIANT* ConfirmConversions, VARIANT* Link, VARIANT* Attachment);
    */
    m_wdSel.InsertFile(
                    fileName,
                    vNull,
                    vFalse,
                    vFalse,
                    vFalse
                    );
}
 
void CWordOffice::InsertShapes(CString fileName)
{
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
    m_wdInlineShapes=m_wdSel.GetInlineShapes();
    m_wdInlineShape=m_wdInlineShapes.AddPicture(fileName,vFalse,vTrue,vOptional);
}
 
void CWordOffice::InsertHyperlink(CString fileLink)
{
    COleVariant     vAddress(_T(fileLink)),vSubAddress(_T(""));
    RangeW aRange = m_wdSel.GetRange();
    Hyperlinks vHyperlinks(aRange.GetHyperlinks());
    vHyperlinks.Add(
                    aRange,            //Object，必需。转换为超链接的文本或图形。
                    vAddress,         //Variant 类型，可选。指定的链接的地址。此地址可以是电子邮件地址、Internet 地址或文件名。请注意，Microsoft Word 不检查该地址的正确性。
                    vSubAddress,     //Variant 类型，可选。目标文件内的位置名，如书签、已命名的区域或幻灯片编号。
                    vAddress,         //Variant 类型，可选。当鼠标指针放在指定的超链接上时显示的可用作“屏幕提示”的文本。默认值为 Address。
                    vAddress,         //Variant 类型，可选。指定的超链接的显示文本。此参数的值将取代由 Anchor 指定的文本或图形。
                    vSubAddress        //Variant 类型，可选。要在其中打开指定的超链接的框架或窗口的名字。
                    ); 
    vHyperlinks.ReleaseDispatch();
}

LPDISPATCH CWordOffice::InsertTable(int Row, int Col)
{
    COleVariant vTrue((short)TRUE),    
                vFalse((short)FALSE),
                vOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
	m_wdRange = m_wdSel.GetRange();
	m_wdTables = m_wdDoc.GetTables();
	m_wdTable=m_wdTables.Add(m_wdRange,Row,Col,vOptional,vOptional);
	m_wdBorders=m_wdTable.GetBorders();
	m_wdBorders.SetEnable(1);
	m_wdSel.EndKey(COleVariant((short)6),COleVariant((short)0));
	return m_wdTable;

}

void CWordOffice::AddParagraph(CString szText,float FontSize,BOOL IfBold,CString FontName,int AlignFlag,float FirstLineSpace)
{
	m_wdParagraphs=m_wdDoc.GetParagraphs();
	m_wdParagraph=m_wdParagraphs.GetLast();
	m_wdParagraph.SetAlignment(AlignFlag);
	m_wdParagraph.SetCharacterUnitFirstLineIndent(FirstLineSpace);
	m_wdFont = m_wdSel.GetFont();
	m_wdFont.SetSize(FontSize);
	m_wdFont.SetName(FontName);
	m_wdFont.SetBold(IfBold);
	m_wdSel.TypeText(szText);
	m_wdSel.EndKey(COleVariant((short)6),COleVariant((short)0));
}

void CWordOffice::SetTableText(Table m_Table,int RowNum,int ColNum,CString szText,float FontSize,BOOL IfBold,CString FontName,int AlignFlag)
{
	Cell m_Cell;
	RangeW m_RangeW;
	_Font m_Font;
	m_Cell.AttachDispatch(m_Table.Cell(RowNum,ColNum));
	m_RangeW.AttachDispatch(m_Cell.GetRange());
	m_RangeW.SetText(szText);
	m_Font.AttachDispatch(m_RangeW.GetFont());
	m_Font.SetSize(FontSize);
	m_RangeW.Select();
	_ParagraphFormat m_ParagraphFormat = ((Selection)(m_wdApp.GetSelection())).GetParagraphFormat();
	m_ParagraphFormat.SetAlignment(AlignFlag);
	((Selection)(m_wdApp.GetSelection())).SetParagraphFormat(m_ParagraphFormat);
	((Cells)((Selection)(m_wdApp.GetSelection())).GetCells()).SetVerticalAlignment(1);
	m_Font.SetName(FontName);
	m_Font.SetBold(IfBold);
	m_RangeW.SetFont(m_Font);
	m_Cell.ReleaseDispatch();
	m_RangeW.ReleaseDispatch();
	m_wdSel.EndKey(COleVariant((short)6),COleVariant((short)0));

	return ;

}

void CWordOffice::CellsMerge(Table m_Table, int SX, int SY, int EX, int EY,CString TextStr)
{
	Cell m_Cell;
	m_Cell.AttachDispatch(m_Table.Cell(SX,SY));
	m_Cell.Merge(m_Table.Cell(EX,EY));
	m_Cell.ReleaseDispatch();
	SetTableText(m_Table,SX,SY,TextStr,12,FALSE,"宋体",1);
}

void CWordOffice::SetColWidth(Table m_Table, int Col, float Percent)
{
	((Column)(((Columns)(m_Table.GetColumns())).Item(Col))).SetPreferredWidthType(2);
	((Column)(((Columns)(m_Table.GetColumns())).Item(Col))).SetPreferredWidth(Percent);
}
