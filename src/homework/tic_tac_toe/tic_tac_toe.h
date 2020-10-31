//h
#include<iostream>
#include<vector>
#include<string>

using std::vector;
using std::string;


#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const;
    void display_board()const;
    string get_winner();

private:
    bool check_board_full()const;
    void set_next_player();
    string player;
    vector<string> pegs{9, " "};
    void clear_board();
    string winner;
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

};

#endif 
