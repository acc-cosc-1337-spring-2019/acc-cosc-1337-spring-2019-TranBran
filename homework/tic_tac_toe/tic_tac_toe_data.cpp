#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

/*
Write the code to save a vector of string into a file.
After writing all the vector strings add a new line character "\n" to file.
Close the file.
Use the fstream object and file_name(class variable). Open the file for
writing and append.
*/
void TicTacToeData::save_game(const vector<string>& pegs)
{
	// a) Update  void save_pegs(const std::vector<string>& pegs) 
	//Iterate vector of string to write to file, add a "\n" after each iteration(loop) to create a new line after looping vector of string.

	fstream file(file_name, std::ios::out | std::ios::app);

	for (auto p : pegs)
	{
		file << p;
		file << "\n";
	}

	file.close();
}

/*
Read the file with fstream and file_name, open file for input(reading).
ALGORITHM:
Create unique ptr of TicTacToe boards
		  Open File
		  while file open
			 Create vector of string
			 get a line from file
			for each ch in line
			  Create a string with each ch use std::string(1, ch) to create the string

			Add the string to vector of string

			Create unique ptr of TicTacToe board

		   if vector peg size 9
			   create board of TicTacToe3 using make_unique
		  else
			   create board of TicTacToe4 using make_unique

			  add the board to the boards vector

		 close the file

		return the  vector  of TicTacToe
*/
// look at temp data example
vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	vector<unique_ptr<TicTacToe>> boards();

	fstream file(file_name, std::ios::in);

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			vector<string> peg;
			for (int i = 0; i < line.size(); i++)
			{
				peg.push_back(string(1, line[i]));
				
			}
			std::unique_ptr<TicTacToe> board();
			if (peg.size() == 9)
			{
				board = std::make_unique<TicTacToe3>(peg);
				games.push_back(board);
			}
			else if (peg.size() == 16)
			{
				board = std::make_unique<TicTacToe3>(peg);
				games.push_back(board);
			}

		}
	}

	return games;
}
