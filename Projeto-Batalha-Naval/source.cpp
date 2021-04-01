#include <iostream>
#include "PontoNaval.h"
#include "Board.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
	PontoNaval P1, P2(5, 'B');
	Board B;

	P1.Show();
	P2.Show();
	B.SetCell(2, 3, 'O');
	B.SetCell(7, 6, 'O');
	B.Draw(5, 4);
	system("pause");
}