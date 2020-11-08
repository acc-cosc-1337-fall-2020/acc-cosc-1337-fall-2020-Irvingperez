#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
	TicTacToe game;
	game.start_game("x");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
} 

TEST_CASE("Test win by first column") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row ") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row ") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row ") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left ") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left ") {

	TicTacToe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test game over if 9 slots with O are selected.")
{
	TicTacToe game;
	game.start_game("O");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
} 

TEST_CASE("Test win by first column with O") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column with O") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column with O") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row with O ") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row  with O") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row with O ") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left  with O") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left with O ") {

	TicTacToe game;

	game.start_game("O");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}
