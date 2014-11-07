// ImageGodDoc.cpp : CImageGodDoc 类的实现
//

#include "stdafx.h"
#include "ImageGod.h"

#include "ImageGodDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageGodDoc

IMPLEMENT_DYNCREATE(CImageGodDoc, CDocument)

BEGIN_MESSAGE_MAP(CImageGodDoc, CDocument)
END_MESSAGE_MAP()


// CImageGodDoc 构造/析构

CImageGodDoc::CImageGodDoc()
{
	// TODO: 在此添加一次性构造代码

}

CImageGodDoc::~CImageGodDoc()
{
}

BOOL CImageGodDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CImageGodDoc 序列化

void CImageGodDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CImageGodDoc 诊断

#ifdef _DEBUG
void CImageGodDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImageGodDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImageGodDoc 命令
