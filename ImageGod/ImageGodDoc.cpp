// ImageGodDoc.cpp : CImageGodDoc ���ʵ��
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


// CImageGodDoc ����/����

CImageGodDoc::CImageGodDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CImageGodDoc::~CImageGodDoc()
{
}

BOOL CImageGodDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CImageGodDoc ���л�

void CImageGodDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CImageGodDoc ���

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


// CImageGodDoc ����
