#include<iostream>
#include<string>
#include<vector>

class TicTacToe 
{
public:
	//SomeConstructor(int s) :some_vector(s*s, " " ){}//this will initialize some_vector to s*s elements of " "

	TicTacToe(int size) : pegs(size*size, " ") {} //{ 9, " ", 16, " "; }

	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	std::string get_winner()const;
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToe & t);
	friend std::istream & operator >> (std::istream & out,
		TicTacToe & t);

protected:

	 std::vector<std::string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	std::string next_player;

	std::string winner;

	void set_next_player();
	
	void clear_board();
	bool check_board_full();
	void set_winner();
};