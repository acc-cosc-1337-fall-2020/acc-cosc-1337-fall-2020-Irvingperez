#include <string>
#include <iostream>
#include <vector>
#include<memory>

using std::string, std::vector, std::cout, std:: cin, std::endl, std::ostream, std::istream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(){};
    TicTacToe(int size): pegs(size*size, " "){};
    TicTacToe(vector<string> p, string win) : winner{ win }, pegs{ p }{};
    vector<string> get_pegs() const { return pegs; };
    virtual ~TicTacToe(){}
    bool game_over();
    string get_player() const {return player;}
    string get_winner() const {return winner;}
    void mark_board(int position);
    friend ostream& operator << (ostream& out, const TicTacToe& game);
    friend istream& operator >> (istream& in, TicTacToe& game);
    void start_game(string first_player);

private:
    string player;
    string winner;

    bool check_board_full();
    void clear_board();
    void set_next_player();
    void set_winner();

    protected: 
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();


};
#endif