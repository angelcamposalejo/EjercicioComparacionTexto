#include "stdafx.h"  //________________________________________ EjerciciosComparadorTexto.cpp
#include "EjerciciosComparadorTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjerciciosComparadorTexto app;
	return app.BeginDialog(IDI_EjerciciosComparadorTexto, hInstance);
}

void EjerciciosComparadorTexto::Window_Open(Win::Event& e)
{
}

void EjerciciosComparadorTexto::btChecar_Click(Win::Event& e)
{
}

