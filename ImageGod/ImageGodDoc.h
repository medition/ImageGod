// ImageGodDoc.h : CImageGodDoc ��Ľӿ�
//


#pragma once


class CImageGodDoc : public CDocument
{
protected: // �������л�����
	CImageGodDoc();
	DECLARE_DYNCREATE(CImageGodDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CImageGodDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


