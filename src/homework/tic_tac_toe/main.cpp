
#include<iostream>
#include<string>
#include"tic_tac_toe.h"

using std::cin;
using std::cout;


int main() 
{
	int mark;
	std::string player;
	TicTacToe game;
	cout << "Enter 'X' or 'O': )\t";
	cin >> player;
	game.start_game(player);

	while (game.game_over() == false)
	{
		cout << "Choose your position (1-9): ";
		cin >> mark;
		game.mark_board(mark);
		game.display_board();
	} 

	cout << "Game over!";


	return 0;
}