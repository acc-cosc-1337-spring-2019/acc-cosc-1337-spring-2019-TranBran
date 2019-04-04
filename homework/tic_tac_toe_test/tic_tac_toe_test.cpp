#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player X") 
{
	TicTacToe *t;
	t ->start_game("X");

	REQUIRE(t->get_player() == "X");
	
}

TEST_CASE("Test win by first column 3x3", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are 
	   user positions 1,4, and 7
       vector view: 0, 3, and 6
	   */
	TicTacToe* board = new TicTacToe3;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win by second column 3x3", "[X wins second column]")
{ 
	TicTacToe* board = new TicTacToe3;
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by third column 3x3", "[X wins third column]")
{ 
	TicTacToe* board = new TicTacToe3;
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by first row 3x3", "[X wins first row]")
{
	TicTacToe* board = new TicTacToe3;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by second row 3x3", "[X wins second row]")
{
	TicTacToe* board = new TicTacToe3;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by third row 3x3", "[X wins third row]")
{
	TicTacToe* board = new TicTacToe3;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win diagonal 1 3x3", "[X wins with 1 5 9]")
{
	TicTacToe* board = new TicTacToe3;
	
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win diagonal 2 3x3", "[X wins with 3 5 7]")
{
	TicTacToe* board = new TicTacToe3;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
	delete board;
}

TEST_CASE("Test tie 3x3", "[nobody wins]")
{
	TicTacToe* board = new TicTacToe3;
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//nobody wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
	delete board;
}


TEST_CASE("Test win by first column 4x4", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are
	   user positions 1,4, and 7
	   vector view: 0, 3, and 6
	   */
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X          

	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by second column 4x4", "[X wins second column]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X          

	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by third column 4x4", "[X wins third column]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X          

	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}


TEST_CASE("Test win by fourth column 4x4", "[X wins fourth column]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X          

	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by first row 4x4", "[X wins first row]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by second row 4x4", "[X wins second row]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by third row 4x4", "[X wins third row]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by fourth row 4x4", "[X wins fourth row]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win diagonal 1 4x4", "[X wins with 1 6 11 16]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win diagonal 2 4x4", "[X wins with 4 7 10 13]")
{
	TicTacToe* board = new TicTacToe4;

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
	delete board;
}

TEST_CASE("Test tie 4x4", "[nobody  wins]")
{
	TicTacToe* board = new TicTacToe3;
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X  
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O 
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	// nobody wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
	delete board;
}