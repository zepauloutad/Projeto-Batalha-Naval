#define _CRT_SECURE_NO_WARNINGS 1
#include "PontoNaval.h"
#include <iostream>
#include <string.h>

using namespace std;

#define N 10

PontoNaval::PontoNaval()
{
	x = 1;
	y = 'A';
}

PontoNaval::PontoNaval(int m_x, char m_y)
{
	x = SetX(m_x);
	y = SetY(m_y);
}

PontoNaval::~PontoNaval()
{
}

bool PontoNaval::SetX(int m_x)
{
	if (m_x >= 1 && m_x <= N)
	{
		x = m_x;
		return x;
	}
	else
		cout << "Valor de 'X' invalido" << endl;
	return false;
}

bool PontoNaval::SetY(char m_y)
{
	if (*_strupr(&m_y) >= 'A' && *_strupr(&m_y) <= 'J') {
		y = m_y;
		return y;
	}
	else
		cout << "Valor de 'Y' invalido" << endl;
	return false;
}

bool PontoNaval::SetY(int m_y)
{
	if (m_y >= 1 && m_y <= N) {
		y = char(m_y + 64);
		return true;
	}
	else
		cout << "Valor de 'Y' invalido" << endl;
	return false;
}

bool PontoNaval::Ask2SetPN(void)
{
	int aux_x;
	char aux_y;
	cout << "Insira o valor de x:" << endl;
	do {
		cin >> aux_x;
	} while (!SetX(aux_x));

	cout << "Insira o valor de y:" << endl;
	do {
		cin >> aux_y;
	} while (!SetY(aux_x));

	return true;
}

void PontoNaval::Show(void)
{
	cout << '(' << GetX() << ',' << GetY() << ')' << endl;
}

int PontoNaval::GetIntY(void) const
{
	int aux;

	aux = int(y) - 64;
	return aux;
}

bool PontoNaval::operator == (const PontoNaval ponto) const
{
	if (GetX() == ponto.GetX() && GetY() == ponto.GetY())
		return true;

	return false;
}

bool PontoNaval::operator != (const PontoNaval ponto) const
{
	if (GetX() != ponto.GetX() || GetY() != ponto.GetY())
		return true;

	return false;
}