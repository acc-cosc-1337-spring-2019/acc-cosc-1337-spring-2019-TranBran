#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here
#include "tic_tac_toe.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

class Tic_Tac_Toe_Manager
{


public:

	Tic_Tac_Toe_Manager();

	void save_game(const TicTacToe b);

	void display_history()const;





private:

	std::vector <TicTacToe> games;

	int X_Win;
	int O_Win;
	int ties;

	void update_winner_count(std::string winner);


};

#endif // !TIC_TAC_TOE_MANAGER_H