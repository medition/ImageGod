// ImageGodView.h : CImageGodView ��Ľӿ�
//


#pragma once


class CImageGodView : public CView
{
protected: // �������л�����
	CImageGodView();
	DECLARE_DYNCREATE(CImageGodView)

// ����
public:
	CImageGodDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CImageGodView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ImageGodView.cpp �еĵ��԰汾
inline CImageGodDoc* CImageGodView::GetDocument() const
   { return reinterpret_cast<CImageGodDoc*>(m_pDocument); }
#endif

