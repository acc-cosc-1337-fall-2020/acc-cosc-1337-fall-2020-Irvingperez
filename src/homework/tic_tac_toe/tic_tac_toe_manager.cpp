#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
    get_winner_total(o_win, x_win, tie);
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for(auto & x : manager.games)
    {
        out << x;
    }
    return out;
}
void TicTacToeManager :: get_winner_total(int& o, int& x, int& t)
{
    cout << endl
         << "X Wins =" << x << endl
         << "O Wins =" << o << endl
         << "Ties =" << t << endl
         << endl;
}

void TicTacToeManager :: update_winner_count(string winner)
{
    if(winner== "X")
        x_win++;
    else if(winner =="O")
        o_win++;
    else
         tie++;
}
