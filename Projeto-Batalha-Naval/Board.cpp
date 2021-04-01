#include "Board.h"
#include "PontoNaval.h"
#include <iostream>

using namespace std;

Board::Board()
{
    int i, j;
    SetDimX(10);
    SetDimY(10);
    for (i = 0; i < GetDimX(); i++)
        for (j = 0; j < GetDimY(); j++)
            M[i][j] = '.';
}
Board::Board(int m_dx, int m_dy)
{
    int i, j;
    SetDimX(m_dx);
    SetDimY(m_dy);
    for (i = 0; i < GetDimX(); i++)
        for (j = 0; j < GetDimY(); j++)
            M[i][j] = '.';
}
Board::~Board()
{
}

void Board::SimbiBoxLisrDraw()
{
    int i, j = 0;
    int tabela[] = { 185,186,187,188,200,201,202,204,206,
        191,192,217,218,179,196,193,194,195,197,221,180
        ,45,47,60,62,88,91,92,93,94,95,238,240,30,31
        ,176,177,178,219,220,223,254,59,123,124,125,143
        ,205,189,190,207,241,242,245,249,46,58,61,127,174,175,145 };
    cout << endl << endl;
    cout << "Tabela ASCII e Extendida para os tabuleiros";
    cout << endl << endl;

    for (i = 0; i < 62; i++)
    {
        cout << '\t' << tabela[i] << '\t' << (char)tabela[i];
        j++;
        if (j == 5)
        {
            cout << endl << endl;
            j = 0;
        }
    }
}
void Board::DrawFirstLine(int x0, int dxcel)
{
    int i, j;

    for (i = 0; i < x0; i++)
        cout << " ";

    cout << (char)218;
    for (i = 0; i < GetDimX(); i++)
    {
        for (j = 0; j < dxcel; j++)
            cout << (char)196;

        if (i < GetDimX() - 1)
            cout << (char)194;
    }
    cout << (char)191;
}
void Board::DrawDataLine(int x0, int dxcel, int nc)
{
    int i;

    for (i = 0; i < x0; i++)
        cout << " ";


    for (i = 1; i <= GetDimX(); i++)
    {
        cout << (char)179;
        cout << " " << GetCell(nc, i) << " ";
    }
    cout << (char)179;
}
void Board::DrawMiddleLine(int x0, int dxcel)
{
    int i, j;

    for (i = 0; i < x0; i++)
        cout << " ";

    cout << (char)195;
    for (i = 0; i < GetDimX(); i++)
    {
        for (j = 0; j < dxcel; j++)
            cout << (char)196;

        if (i < GetDimX() - 1)
            cout << (char)197;
    }
    cout << (char)180;
}
void Board::DrawLastLine(int x0, int dxcel)
{
    int i = 0, j = 0;

    for (i = 0; i < x0; i++)
        cout << " ";

    cout << (char)192;
    for (i = 0; i < GetDimX(); i++)
    {
        for (j = 0; j < dxcel; j++)
            cout << (char)196;
        if (i < GetDimX() - 1)
            cout << (char)193;
    }
    cout << (char)217;
}
void Board::Draw(int x0, int y0)
{

    int dxcel = 3;
    int line;

    for (line = 1; line < y0; line++)
        cout << endl;

    // Draw first line
    DrawFirstLine(x0, dxcel);
    cout << endl;
    DrawDataLine(x0, dxcel, 1);
    cout << endl;

    // Draw middle lines
    for (line = 1; line < GetDimY(); line++)
    {
        DrawMiddleLine(x0, dxcel);
        cout << endl;
        DrawDataLine(x0, dxcel, line + 1);
        cout << endl;
    }

    // Draw last line
    DrawLastLine(x0, dxcel);
    cout << endl << endl;
}