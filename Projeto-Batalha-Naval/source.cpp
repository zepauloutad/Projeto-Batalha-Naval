#include <iostream>
#include "PontoNaval.h"
#include "Board.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
	PontoNaval P1, P2(5, 'B');
	Board B, C;
	int i = 0;
	cout << endl << endl << endl << endl;
	B.SetCell(2, 3, 'O');
	B.SetCell(7, 6, 'O');
	B.DrawNext(C,5, 4,5);

	
	system("pause");
}