#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
    void save_game(TicTacToe b);
    friend ostream& operator << (ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);

private:
    vector<TicTacToe> games;
    int o_win{0};
    int tie{0};
    int x_win{0};
    void update_winner_count(string winner);
};
#endif