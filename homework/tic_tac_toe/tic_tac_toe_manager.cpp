#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
//Write class function implementations here

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;

	Tic_Tac_Toe_Manager::Tic_Tac_Toe_Manager()

{
}

	void Tic_Tac_Toe_Manager::save_game(const TicTacToe b)
	{

		games.push_back(b);

		TicTacToe c = b;


		string winner = c.get_winner();


		update_winner_count(winner);


	}

void Tic_Tac_Toe_Manager::display_history() const
{

	int i = 1;

	for (auto g : games)
	{
		cout << " Game " << i << " ";

		g.display_board();

		cout << "\n";

		++i;

		g.get_winner();

	}

	cout << " X Wins: " << X_Win << " O Wins: " << O_Win << " Ties: " << ties;


}

void Tic_Tac_Toe_Manager::update_winner_count(std::string winner)
{

	if (winner == "X")
		++X_Win;


	else if (winner == "O")
	
	++O_Win;
	

	else if  (winner == "C")
		
		++ties;
		

}
