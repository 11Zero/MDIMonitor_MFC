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
    //����
    //**********************�������ĵ�*******************************************
    BOOL CreateApp();                    //����һ���µ�WORDӦ�ó���
    BOOL CreateDocuments();                //����һ���µ�Word�ĵ�����
    BOOL CreateDocument();                //����һ���µ�Word�ĵ�
    BOOL Create();                        //�����µ�WORDӦ�ó��򲢴���һ���µ��ĵ�
    void ShowApp();                        //��ʾWORD�ĵ�
    void HideApp();                        //����word�ĵ�
 
    //**********************���ĵ�*********************************************
    BOOL OpenDocument(CString fileName);//���Ѿ����ڵ��ĵ���
    BOOL Open(CString fileName);        //�����µ�WORDӦ�ó��򲢴�һ���Ѿ����ڵ��ĵ���
    BOOL SetActiveDocument(short i);    //���õ�ǰ������ĵ���
 
    //**********************�����ĵ�*********************************************
    BOOL SaveDocument();                //�ĵ����Դ���ʽ�����档
    BOOL SaveDocumentAs(CString fileName);//�ĵ��Դ�����ʽ�����档
    BOOL CloseDocument();
    void CloseApp(); 
 
    //**********************�ı���д����*****************************************
    void WriteText(CString szText);        //��ǰ��괦д�ı�
    void WriteNewLineText(CString szText, int nLineCount = 1); //��N��д��
    void WriteEndLine(CString szText);    //�ĵ���β��д�ı�
	void WriteEndLine(CString szText,float FontSize,BOOL IfBold,CString FontName);
	void WholeStory();                    //ȫѡ�ĵ�����
    void Copy();                        //�����ı����ݵ�������
    void InsertFile(CString fileName);    //�����ص��ļ�ȫ������д�뵽��ǰ�ĵ��Ĺ�괦��
     
    //**********************ͼƬ�������*****************************************
    void InsertShapes(CString fileName);//�ڵ�ǰ����λ�ò���ͼƬ
     
    //**********************�����Ӳ������*****************************************
    void InsertHyperlink(CString fileLink);//�������ӵ�ַ�����������·����
};