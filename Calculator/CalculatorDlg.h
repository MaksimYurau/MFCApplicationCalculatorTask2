
// CalculatorDlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CCalculatorDlg
class CCalculatorDlg : public CDialogEx
{
// Создание
public:
	CCalculatorDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	float chislo1;
	float chislo2;
	char znak;
public:
	afx_msg void OnBnClickedButton10();
	// Число вводимое для сохранения
	CString TempChislo;
//	afx_msg void OnBnClicked2();
	afx_msg void OnClicked1();
	afx_msg void OnClicked2();
	afx_msg void OnClicked3();
	afx_msg void OnClicked4();
	afx_msg void OnClicked5();
	afx_msg void OnClicked6();
	afx_msg void OnClicked7();
	afx_msg void OnClicked8();
	afx_msg void OnClicked9();
	afx_msg void OnClickedMinus();
	afx_msg void OnClickedPlus();
	afx_msg void OnClickedRavno();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnClickedUmnozit();
	afx_msg void OnClicked0();
	afx_msg void OnClickedDivide();
};
