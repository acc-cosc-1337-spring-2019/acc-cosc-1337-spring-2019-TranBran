#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
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

	Tic_Tac_Toe_Manager M ;

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

		string winner = game.get_winner();

		if ( winner == "C")
		{

			cout << "Tie Game :( ";

		}

		else
		{

			cout << winner << " Wins";

		}

		cout << "\n";

		game.display_board();

		M.Tic_Tac_Toe_Manager::save_game(game);

		//cout << "\n Player " << game.get_player() << " Lost ";

		cout << "Enter 1 to play again, Enter a 2 for Game history, or any other key to quit ";
		cin >> input2;

		if (input2 == "2")
		{

			M.Tic_Tac_Toe_Manager::display_history();


		}
		
	}
	while (input2 == "1");


	return(0);
}