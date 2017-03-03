#include "msword.h"
#include <atlbase.h>

class CWordOffice 
{
//private:
public:
    _ApplicationW m_wdApp;
    Documents m_wdDocs;
    _Document m_wdDoc;
    Selection m_wdSel;
    RangeW     m_wdRange;
    InlineShapes m_wdInlineShapes; 
    InlineShape m_wdInlineShape;
	_Font m_wdFont;
	Paragraph m_wdParagraph;
	Paragraphs m_wdParagraphs;
	Cell m_wdCell;
	Cells m_wdCells;
	Table m_wdTable;
	Tables m_wdTables;
	Border m_wdBorder;
	Borders m_wdBorders;
    CWordOffice();
    virtual ~CWordOffice();
 
public:
	void SetColWidth(Table m_Table,int Col,float Percent);
	LPDISPATCH InsertTable(int Row,int Col);
	void CellsMerge(Table m_Table, int SX, int SY, int EX, int EY,CString TextStr);
	void AddParagraph(CString szText,float FontSize,BOOL IfBold,CString FontName,int AlignFlag,float FirstLineSpace);
	void SetTableText(Table m_Table,int RowNum,int ColNum,CString szText,float FontSize,BOOL IfBold,CString FontName,int AlignFlag);
    //操作
    //**********************创建新文档*******************************************
    BOOL CreateApp();                    //创建一个新的WORD应用程序
    BOOL CreateDocuments();                //创建一个新的Word文档集合
    BOOL CreateDocument();                //创建一个新的Word文档
    BOOL Create();                        //创建新的WORD应用程序并创建一个新的文档
    void ShowApp();                        //显示WORD文档
    void HideApp();                        //隐藏word文档
 
    //**********************打开文档*********************************************
    BOOL OpenDocument(CString fileName);//打开已经存在的文档。
    BOOL Open(CString fileName);        //创建新的WORD应用程序并打开一个已经存在的文档。
    BOOL SetActiveDocument(short i);    //设置当前激活的文档。
 
    //**********************保存文档*********************************************
    BOOL SaveDocument();                //文档是以打开形式，保存。
    BOOL SaveDocumentAs(CString fileName);//文档以创建形式，保存。
    BOOL CloseDocument();
    void CloseApp(); 
 
    //**********************文本书写操作*****************************************
    void WriteText(CString szText);        //当前光标处写文本
    void WriteNewLineText(CString szText, int nLineCount = 1); //换N行写字
    void WriteEndLine(CString szText);    //文档结尾处写文本
	void WriteEndLine(CString szText,float FontSize,BOOL IfBold,CString FontName);
	void WholeStory();                    //全选文档内容
    void Copy();                        //复制文本内容到剪贴板
    void InsertFile(CString fileName);    //将本地的文件全部内容写入到当前文档的光标处。
     
    //**********************图片插入操作*****************************************
    void InsertShapes(CString fileName);//在当前光标的位置插入图片
     
    //**********************超链接插入操作*****************************************
    void InsertHyperlink(CString fileLink);//超级链接地址，可以是相对路径。
};