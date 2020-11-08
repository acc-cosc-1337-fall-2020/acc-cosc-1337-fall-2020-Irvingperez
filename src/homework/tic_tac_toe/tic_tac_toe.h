#include <string>
#include <iostream>
#include <vector>

using std::string, std::vector, std::cout, std:: cin, std::endl, std::ostream, std::istream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    string get_player() const {return player;}
    string get_winner() const {return winner;}
    void mark_board(int position);
    friend ostream& operator << (ostream& out, const TicTacToe& game);
    friend istream& operator >> (istream& in, TicTacToe& game);
    void start_game(string first_player);

private:
    string player;
    vector<string> pegs{9," "};
    string winner;
    bool check_board_full();
    bool check_column_win();
    bool check_diagonal_win();
    bool check_row_win();
    void clear_board();
    void set_next_player();
    void set_winner();

};
#endif