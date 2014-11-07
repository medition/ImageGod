// ImageGodView.cpp : CImageGodView 类的实现
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CImageGodView 构造/析构

CImageGodView::CImageGodView()
{
	// TODO: 在此处添加构造代码

}

CImageGodView::~CImageGodView()
{
}

BOOL CImageGodView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CImageGodView 绘制

void CImageGodView::OnDraw(CDC* /*pDC*/)
{
	CImageGodDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CImageGodView 打印

BOOL CImageGodView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CImageGodView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CImageGodView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CImageGodView 诊断

#ifdef _DEBUG
void CImageGodView::AssertValid() const
{
	CView::AssertValid();
}

void CImageGodView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageGodDoc* CImageGodView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageGodDoc)));
	return (CImageGodDoc*)m_pDocument;
}
#endif //_DEBUG


// CImageGodView 消息处理程序
