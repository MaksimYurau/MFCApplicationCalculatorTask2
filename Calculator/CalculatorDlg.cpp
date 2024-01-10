
// CalculatorDlg.cpp: файл реализации
//

#include "stdafx.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"
#include <cctype>
#include <string>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CCalculatorDlg



CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
	, TempChislo(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	chislo1 = 0.0f;
	chislo2 = 0.0f;
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_BBOD, TempChislo);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
//	ON_BN_CLICKED(IDC_2, &CCalculatorDlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_1, &CCalculatorDlg::OnClicked1)
	ON_BN_CLICKED(IDC_2, &CCalculatorDlg::OnClicked2)
	ON_BN_CLICKED(IDC_3, &CCalculatorDlg::OnClicked3)
	ON_BN_CLICKED(IDC_4, &CCalculatorDlg::OnClicked4)
	ON_BN_CLICKED(IDC_5, &CCalculatorDlg::OnClicked5)
	ON_BN_CLICKED(IDC_6, &CCalculatorDlg::OnClicked6)
	ON_BN_CLICKED(IDC_7, &CCalculatorDlg::OnClicked7)
	ON_BN_CLICKED(IDC_8, &CCalculatorDlg::OnClicked8)
	ON_BN_CLICKED(IDC_9, &CCalculatorDlg::OnClicked9)
	ON_BN_CLICKED(IDC_MINUS, &CCalculatorDlg::OnClickedMinus)
	ON_BN_CLICKED(IDC_PLUS, &CCalculatorDlg::OnClickedPlus)
	ON_BN_CLICKED(IDC_RAVNO, &CCalculatorDlg::OnClickedRavno)
	ON_BN_CLICKED(IDC_UMNOZIT, &CCalculatorDlg::OnClickedUmnozit)
	ON_BN_CLICKED(IDC_0, &CCalculatorDlg::OnClicked0)
	ON_BN_CLICKED(IDC_DIVIDE, &CCalculatorDlg::OnClickedDivide)
END_MESSAGE_MAP()


// Обработчики сообщений CCalculatorDlg

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCalculatorDlg::OnBnClickedButton10()
{
	// TODO: добавьте свой код обработчика уведомлений
}


//void CCalculatorDlg::OnBnClicked2()
//{
//	// TODO: добавьте свой код обработчика уведомлений
//}
void CCalculatorDlg::OnClicked0()
{
	UpdateData(TRUE);
	bool check = FALSE;
	int lenght = TempChislo.GetLength();
	if (lenght > 0) {
		switch (TempChislo[lenght - 1]) {
		case ('1'): check  = TRUE;  break;
		case ('2'): check = TRUE;  break;
		case ('3'): check = TRUE;  break;
		case ('4'): check = TRUE;  break;
		case ('5'):check = TRUE;  break;
		case ('6'): check = TRUE;  break;
		case ('7'): check = TRUE;  break;
		case ('8'): check = TRUE;  break;
		case ('9'): check = TRUE;  break;
		case ('0'): check = TRUE;  break;
		case (' '): {
			
			check = FALSE; 
			break; }

		}
	}
	if (check == TRUE) TempChislo = TempChislo + _T("0");
	UpdateData(FALSE);
}

void CCalculatorDlg::OnClicked1()
{
	UpdateData(TRUE);

	TempChislo = TempChislo + _T("1");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked2()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("2");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked3()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("3");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked4()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("4");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked5()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("5");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked6()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("6");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked7()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("7");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked8()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("8");
	
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClicked9()
{
	UpdateData(TRUE);
	TempChislo = TempChislo + _T("9");
	UpdateData(FALSE);
}


void CCalculatorDlg::OnClickedMinus()
{
	UpdateData(TRUE);
	chislo1 = atof(_bstr_t((LPCTSTR)TempChislo));

	TempChislo = "";
	UpdateData(FALSE);
	znak = '-';
}


void CCalculatorDlg::OnClickedPlus()
{
	UpdateData(TRUE);
	chislo1 = atof(_bstr_t((LPCTSTR)TempChislo));
	TempChislo = "";
	UpdateData(FALSE);
	znak = '+';
}


void CCalculatorDlg::OnClickedRavno()
{
	
	switch (znak) {
	case '+':
		UpdateData(TRUE);
		chislo2 = atof(_bstr_t((LPCTSTR)TempChislo));
		chislo1 = chislo1 + chislo2;
		TempChislo.Format(_T("%.3f"), chislo1);
		UpdateData(FALSE);
		break;

	case '-':
		UpdateData(TRUE);
		chislo2 = atof(_bstr_t((LPCTSTR)TempChislo));
		chislo1 = chislo1 - chislo2;
		TempChislo.Format(_T("%.3f"), chislo1);
		UpdateData(FALSE);
		break;
	case'0':
		break;

	case'*':
		UpdateData(TRUE);
		chislo2 = atof(_bstr_t((LPCTSTR)TempChislo));
		chislo1 = chislo1 * chislo2;
		TempChislo.Format(_T("%.3f"), chislo1);
		UpdateData(FALSE);
		break;
	case'/':
		UpdateData(TRUE);
		chislo2 = atof(_bstr_t((LPCTSTR)TempChislo));
		chislo1 = chislo1 / chislo2;
		TempChislo.Format(_T("%.3f"), chislo1);
		UpdateData(FALSE);
		break;

	}
	
}


void CCalculatorDlg::OnClickedUmnozit()
{
	UpdateData(TRUE);
	chislo1 = atof(_bstr_t((LPCTSTR)TempChislo));
	TempChislo = "";
	UpdateData(FALSE);
	znak = '*';
}


void CCalculatorDlg::OnClickedDivide()
{
	UpdateData(TRUE);
	chislo1 = atof(_bstr_t((LPCTSTR)TempChislo));
	TempChislo = "";
	UpdateData(FALSE);
	znak = '/';
}
