#pragma once
class Board
{
private:
	int DimX;
	int DimY;
	char M[10][10];
public:
	Board();
	Board(int m_dx, int m_dy);
	~Board();

	void SetDimX(int m_dx) { DimX = m_dx; }
	void SetDimY(int m_dy) { DimY = m_dy; }
	int GetDimX() { return DimX; }
	int GetDimY() { return DimY; }

	void SetCell(int i, int j, char mc) { M[i-1][j-1] = mc; }
	char GetCell(int i, int j) { return M[i-1][j-1]; }

	void SimbiBoxLisrDraw();

	void DrawLastLine(int x0, int dxcel);
	void DrawMiddleLine(int x0, int dxcel);
	void DrawDataLine(int x0, int dxcel, int line);
	void DrawFirstLine(int x0, int dxcel);
	void Draw(int x0, int y0);
};

