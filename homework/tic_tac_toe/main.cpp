#include "tic_tac_toe_manager.h"
#include <string>
#include <iostream>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
using std::cout; using std::cin;


int main() 
{
	std::string first;
	char choice;
	int position;
	int size;
	TicTacToeManager manager;

	do 
	{
		TicTacToe* t; // creates a pointer to the tic tac toe class

		cout << "Do you want to play a 3 x 3 tic toe? or a 4 x 4 tic tac toe? \n press 3 for 3x3, press 4 for 4x4 ";
		cin >> size; // takes user input and stores the value in size variable
		cout << "First player: ";
		cin >> first;

		if (size == 3)
		{

			t = new TicTacToe3();

		}

		else if (size == 4)
		{
			t = new TicTacToe4();
		}
		
		t->start_game(first);

		while (t -> game_over() == false) 
		{
			cin >> *t;
			cout << *t ;
			cout << "\n\n";
		}

		cout<<"Winner: " << t->get_winner();

		//manager.save_game( *t ); //getting an error here for some reason

		cout << "play again";
		cin >> choice;

	} while (choice == 'y');

	cout<<manager;

	return 0;
}