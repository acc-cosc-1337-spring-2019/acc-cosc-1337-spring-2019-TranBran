#include "tic_tac_toe.h"

#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::vector;



int main()
{
	string input1 = "1";

	string input2 = "1";

	int entry;

	while (input2 == "1")
	{
		cout << "Enter X or O to pick who goes first: ";
		cin >> input1;

		TicTacToe game (input1) ;

		while (game.game_over() == false)
		{
			game.display_board();

			cout << "\n Player " << game.get_player() << " enter a postion to mark (1-9): ";
			cin >> entry;

			game.mark_board(entry);


		}

		game.display_board();

		cout << "\n Player " << game.get_player() << " Lost ";

		cout << "Enter 1 to play again, or any other key to quit ";
		cin >> input2;

	}
	return 0;
}