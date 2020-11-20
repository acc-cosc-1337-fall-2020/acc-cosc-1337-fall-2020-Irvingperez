#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData& d);
    ~TicTacToeManager() { data.save_games(games); };
    void save_game(std::unique_ptr<TicTacToe> & b);
    friend ostream& operator << (ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);

private:
    vector<std::unique_ptr<TicTacToe>> games;
    TicTacToeData data; 
    int o_win{0};
    int tie{0};
    int x_win{0};
    void update_winner_count(string winner);
};
#endif