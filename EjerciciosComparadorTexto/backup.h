#pragma once  //______________________________________ EjerciciosComparadorTexto.h  
#include "Resource.h"
class EjerciciosComparadorTexto: public Win::Dialog
{
public:
	EjerciciosComparadorTexto()
	{
	}
	~EjerciciosComparadorTexto()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btChecar;
	Win::Button gbox1;
	Win::Button radioString;
	Win::Button radioChar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(374);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(141);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosComparadorTexto";
		lb1.Create(NULL, L"Palabra secreta", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 12, 10, 141, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 152, 10, 113, 25, hWnd, 1001);
		btChecar.Create(NULL, L"Checar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 271, 8, 95, 28, hWnd, 1002);
		gbox1.Create(WS_EX_TRANSPARENT, L"Metodo de comparación", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 12, 49, 355, 85, hWnd, 1003);
		radioString.Create(NULL, L"wstring", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 29, 74, 160, 26, hWnd, 1004);
		radioChar.Create(NULL, L"wchar_t", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 29, 98, 161, 26, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btChecar.Font = fontArial014A;
		gbox1.Font = fontArial014A;
		radioString.Font = fontArial014A;
		radioChar.Font = fontArial014A;
	}
	//_________________________________________________
	void btChecar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btChecar.IsEvent(e, BN_CLICKED)) {btChecar_Click(e); return true;}
		return false;
	}
};
