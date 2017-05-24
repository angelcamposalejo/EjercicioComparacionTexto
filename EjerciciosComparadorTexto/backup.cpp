#include "stdafx.h"  //________________________________________ EjerciciosComparadorTexto.cpp
#include "EjerciciosComparadorTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosComparadorTexto app;
	return app.BeginDialog(IDI_EjerciciosComparadorTexto, hInstance);
}

void EjerciciosComparadorTexto::Window_Open(Win::Event& e)
{
	this->radioString.Checked = true;
	this->radioChar.Checked = false;
}

void EjerciciosComparadorTexto::btChecar_Click(Win::Event& e)
{
	if (radioString.Checked == true)
	{
		if (tbxEntrada.Text == L"Nancy")
		{
			tbxEntrada.ShowBalloonTip(L"Correcto", L"Palabra secreta correcta", TTI_INFO);
		}
		else
		{
			tbxEntrada.ShowBalloonTip(L"Error", L"Palabra secreta erronea", TTI_ERROR);
		}
	}
	else
	{
		if (wcscmp(tbxEntrada.Text.c_str(), L"Nancy")==0)
		{
			tbxEntrada.ShowBalloonTip(L"Correcto", L"Palabra secreta correcta", TTI_INFO);
		}
		else
		{
			tbxEntrada.ShowBalloonTip(L"Error", L"Palabra secreta erronea", TTI_ERROR);
		}
	}
}

