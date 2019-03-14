#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<string>
#include <vector>

using std::string;

class TicTacToe 
{
public:
	TicTacToe(string first_player);

	void start_game(std::string first_player);

	std::string get_player() const;

	bool game_over();

	void mark_board(int position);

	void game_board();

	std::string get_winner();

	friend std::ostream & operator<<(std::ostream & out, TicTacToe & t);

	friend std::istream & operator << (std::istream & in,
			const TicTacToe & t);

	
private:

	std::string next_player;

	std:: vector <std::string>pegs{ 9, " " };


	void set_next_player();

	bool check_column_win();

	bool check_row_win();

	bool check_diagonal_win();

	void clear_board();

	bool check_board_full();

	std::string winner;
	

	void set_winner();

};




#endif //TIC_TAC_TOE_H