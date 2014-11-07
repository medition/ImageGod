// ImageGodView.cpp : CImageGodView ���ʵ��
//

#include "stdafx.h"
#include "ImageGod.h"

#include "ImageGodDoc.h"
#include "ImageGodView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageGodView

IMPLEMENT_DYNCREATE(CImageGodView, CView)

BEGIN_MESSAGE_MAP(CImageGodView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CImageGodView ����/����

CImageGodView::CImageGodView()
{
	// TODO: �ڴ˴���ӹ������

}

CImageGodView::~CImageGodView()
{
}

BOOL CImageGodView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CImageGodView ����

void CImageGodView::OnDraw(CDC* /*pDC*/)
{
	CImageGodDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CImageGodView ��ӡ

BOOL CImageGodView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CImageGodView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CImageGodView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CImageGodView ���

#ifdef _DEBUG
void CImageGodView::AssertValid() const
{
	CView::AssertValid();
}

void CImageGodView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageGodDoc* CImageGodView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageGodDoc)));
	return (CImageGodDoc*)m_pDocument;
}
#endif //_DEBUG


// CImageGodView ��Ϣ�������
