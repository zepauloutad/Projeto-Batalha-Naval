class Game
{
	private:
		//jogador player1, player2;
		char tabuleiro1, tabuleiro2;
	public:
		Game();
		virtual ~Game();

		bool Demo();
		void NewGame();

		//virtual bool Save(string file);
		//virtual bool Read(string file);

		bool FillBoard();
		bool Show();






};

