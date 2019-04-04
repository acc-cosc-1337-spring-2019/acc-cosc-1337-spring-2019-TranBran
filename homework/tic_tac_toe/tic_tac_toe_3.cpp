#include "tic_tac_toe_3.h"





bool TicTacToe3::check_column_win()
{
	for (std::size_t i = 0; i < 3; ++i)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] &&
			pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
}


bool TicTacToe3::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] &&
			pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}

/*
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win() 
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ") 
	{
		return true;
	}
	else 
	{
		return false;
	}
}