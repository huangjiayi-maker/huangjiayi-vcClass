// mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "ZH.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg 对话框

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// mydlg 消息处理程序


void mydlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	draw_pic(filename1);
}
void mydlg::draw_pic(CString filename1)
{
	CImage img;
	img.Load(filename1);
	CDC*pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);//保证图片不失真
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}
