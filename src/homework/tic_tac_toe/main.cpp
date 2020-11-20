#include <iostream>
#include <string>
#include <utility>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
#include "tic_tac_toe_data.h"



int main() 
{
	TicTacToeData data;
	TicTacToeManager m(data);
	string again = "Y";
	TicTacToeManager list;	
	std::unique_ptr<TicTacToe> game;
	string entry;
	int board;

	while(again == "Y" || again == "y")
	{
		

		cout << "Press 3 for 3x3 board or Press 4 for 4x4 board: ";
		cin >> board;

		while(board < 3 || board > 4)
		{
			cout << "Please enter 3 or 4. ";
			cin >> board;
		}

		cout << "Player 1, Choose your character X or O: ";
		cin >> entry;

		while(entry != "X" && entry != "x" && entry != "O" && entry != "o")
    	{
			cout << "Choose your character X or O: ";
			cin >> entry;
    	}

		if(board == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else if(board == 4)
		{
			game = std::make_unique<TicTacToe4>();
		}
		
		game->start_game(entry);
		cin >> *game; 
		cout << *game;

		while(game->game_over() ==  false)
		{
			cin >> *game;
			cout << *game;
		}

		if(game->game_over() == true)
		{
			int x = 0;
			int o = 0;
			int t = 0;

			cout << "\nGame Over";
			cout << "\nThe winner is: " << game->get_winner() << "\n";

			list.save_game(game);
			list.get_winner_total(o, x, t);
			cout << "X won: " << x <<"\n";
			cout << "O won: " << o <<"\n";
			cout << "Ties: " << t << "\n";
			
			cout << "\nWould you like to play again? Please enter 'Y' or 'N': ";
			cin >> again;
		}
		
		
	}

	cout << "\n" << list;
	return 0;
}