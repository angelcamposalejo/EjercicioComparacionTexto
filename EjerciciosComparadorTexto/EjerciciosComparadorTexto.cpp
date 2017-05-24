#include "stdafx.h"  //________________________________________ EjerciciosComparadorTexto.cpp
#include "EjerciciosComparadorTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosComparadorTexto app;
	return app.BeginDialog(IDI_EjerciciosComparadorTexto, hInstance);
}

void EjerciciosComparadorTexto::Window_Open(Win::Event& e)
{
	
}


void EjerciciosComparadorTexto::tbxEntrada_Change(Win::Event& e)
{
	size_t posicion = tbxEntrada.Text.find(L"Cerveza");
	if (posicion == std::wstring::npos)
	{
		this->Text = L"Error!!!";
	}
	else
	{
		this->Text = L"Que pasa?";
	}
}

