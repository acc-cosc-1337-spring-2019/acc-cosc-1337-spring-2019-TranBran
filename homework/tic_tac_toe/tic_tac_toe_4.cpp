#include "tic_tac_toe_4.h"





bool TicTacToe4::check_column_win()
{
	for (std::size_t i = 0; i < 4; ++i)
	{
		if (pegs[i] == pegs[i + 4] && pegs[i + 4] == pegs[i + 8] &&
			pegs[i + 8] == pegs[i + 12] && pegs [i = 12] != " ")
		{
			return true;
		}
	}
	return false;
}


bool TicTacToe4::check_row_win()
{
	for (std::size_t i = 0; i < 16; i += 4)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] &&
			pegs[i + 2] == pegs[i + 3] && pegs[i = 3] != " ")
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
bool TicTacToe4::check_diagonal_win()
{
	if (pegs[0] == pegs[5] && pegs[5] == pegs[10] && pegs[10] == pegs[15] && pegs[15] != " ")
	{
		return true;
	}
	else if (pegs[3] == pegs[6] && pegs[6] == pegs[9] && pegs[9] == pegs[12] && pegs[12] != " ")
	{
		return true;
	}
	else
	{
		return false;
	}
}
