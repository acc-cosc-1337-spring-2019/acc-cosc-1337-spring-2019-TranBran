#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test first player X")
{
	TicTacToe tic_tac_toe("X");


	REQUIRE(tic_tac_toe.get_player() == "X");

}

TEST_CASE("Test game over")
{
	TicTacToe tic_tac_toe("X");


	REQUIRE(tic_tac_toe.game_over() == false);

}

TEST_CASE("Test win by first column")
{

	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(1);
	//O
	tic_tac_toe.mark_board(2);
	//X
	tic_tac_toe.mark_board(4);
	//O
	tic_tac_toe.mark_board(2);
	//X
	tic_tac_toe.mark_board(7);

	REQUIRE(tic_tac_toe.game_over() == true);

}


TEST_CASE("Test win by second column")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(2);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(5);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(8);

	REQUIRE(tic_tac_toe.game_over() == true);

}


TEST_CASE("Test win by third column")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(3);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(6);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(9);

	REQUIRE(tic_tac_toe.game_over() == true);

}


TEST_CASE("Test win by first row")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(1);
	//O
	tic_tac_toe.mark_board(4);
	//X
	tic_tac_toe.mark_board(2);
	//O
	tic_tac_toe.mark_board(4);
	//X
	tic_tac_toe.mark_board(3);

	REQUIRE(tic_tac_toe.game_over() == true);

}


TEST_CASE("Test win by second row")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(4);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(5);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(6);

	REQUIRE(tic_tac_toe.game_over() == true);

}


TEST_CASE("Test win by third row")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(7);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(8);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(9);

	REQUIRE(tic_tac_toe.game_over() == true);

}


TEST_CASE("Test win diagonally from top left ")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(1);
	//O
	tic_tac_toe.mark_board(2);
	//X
	tic_tac_toe.mark_board(5);
	//O
	tic_tac_toe.mark_board(2);
	//X
	tic_tac_toe.mark_board(9);

	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test win diagonally from bottom left ")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(7);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(5);
	//O
	tic_tac_toe.mark_board(1);
	//X
	tic_tac_toe.mark_board(3);

	REQUIRE(tic_tac_toe.game_over() == true);
}


TEST_CASE("Test No Winner ")
{
	TicTacToe tic_tac_toe("X");
	tic_tac_toe.start_game("X");
	//X
	tic_tac_toe.mark_board(1);
	//O
	tic_tac_toe.mark_board(3);
	//X
	tic_tac_toe.mark_board(2);
	//O
	tic_tac_toe.mark_board(5);
	//X
	tic_tac_toe.mark_board(6);
	//O
	tic_tac_toe.mark_board(8);
	//X
	tic_tac_toe.mark_board(7);
	//O
	tic_tac_toe.mark_board(4);
	//X
	tic_tac_toe.mark_board(9);

	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Test X Winner ")
{
	TicTacToe tic_tac_toe("X");

	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(5);
	//X

	tic_tac_toe.mark_board(4);
	//O

	tic_tac_toe.mark_board(1);
	//X

	tic_tac_toe.mark_board(2);
	//O

	tic_tac_toe.mark_board(9);
	//X

	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Test O Winner ")
{
	TicTacToe tic_tac_toe("O");

	tic_tac_toe.start_game("O");

	tic_tac_toe.mark_board(5);
	//O

	tic_tac_toe.mark_board(4);
	//X

	tic_tac_toe.mark_board(1);
	//O

	tic_tac_toe.mark_board(2);
	//X

	tic_tac_toe.mark_board(9);
	//O

	REQUIRE(tic_tac_toe.game_over() == true);

}