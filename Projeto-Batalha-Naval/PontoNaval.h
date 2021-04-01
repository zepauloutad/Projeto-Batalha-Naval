#pragma once
class PontoNaval
{
private:
	int x;
	char y;

public:
	PontoNaval();
	PontoNaval(int m_x, char m_y);
	PontoNaval(int m_x, int m_y);
	virtual ~PontoNaval();

	bool SetX(int m_x);
	bool SetY(char m_y);
	bool SetY(int m_y);

	int GetX() const { return x; }
	char GetY() const { return y; }
	int GetIntY(void) const;

	bool Ask2SetPN(void);

	void Show(void);
	bool operator == (const PontoNaval ponto) const;
	bool operator != (const PontoNaval ponto) const;
};

