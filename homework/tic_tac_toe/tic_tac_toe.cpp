
#include "tic_tac_toe.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;

TicTacToe::TicTacToe(string first_player)
{

	start_game(first_player);

}

void TicTacToe::start_game(std::string first_player)
{

	next_player = first_player;

}


std::string TicTacToe::get_player() const
{

	return next_player;

}


bool TicTacToe:: game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{

		set_winner();

		return true;

	}

	else if (check_board_full())
	{
		
		set_winner();

		return true;

	}
	else
	{

		return false;

	}

}

void TicTacToe::mark_board(int position)
{

	pegs[position - 1] = next_player;

	if (game_over() == false)
	{

		set_next_player();


	}

}


void TicTacToe::clear_board()
{
	for (auto& p : pegs)

		p = " ";

}


void TicTacToe::display_board()
{
	int i = 0;

	for (int r = 1; r <= 3; ++r)
	{
		cout << "|";

		for (int c = 1; c <= 3; ++c)
		{

			cout << pegs[i] << "|";

			++i;

		}

		cout << "\n";

	}




}

std::string TicTacToe::get_winner()
{
	
	return std::string( winner);
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{

		next_player = "O";

	}
	else
	{
		next_player = "X";


	}


}
/*Win by column if 
0,3,6
1,4,7
2,5,8
else
false
*/

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0;i <3; ++i)
	{


		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] &&
			pegs[1 + 6] != " ")
		{

			return true;

		}


	}

	return false;


}

bool TicTacToe::check_row_win()
{

	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")

		return true;

	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")

		return true;

	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")

		return true;

	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")

		return true;

	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")

		return true;

	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")

		return true;

	else

		return false;

}


bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")

		return true;

	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")

		return true;

	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")

		return true;

	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")

		return true;

	else

		return false;

}



bool TicTacToe::check_board_full()
{
	for (int p = 0; p < 9; ++p)
	{

		if (pegs[p] == " ")

			return false;

	}

	return true;
}

void TicTacToe::set_winner()
{
	if (check_board_full())
	{

		winner = "C";

	}

	else
	{

		winner = next_player;

	}

}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	

	return out;


}

std::istream & operator<<(std::istream & in, TicTacToe & t)
{
	int position;
	cout << "Enter a Position 1- 9: " << "\n";
	in >> position;
	t.mark_board(position);

	return in;


}


