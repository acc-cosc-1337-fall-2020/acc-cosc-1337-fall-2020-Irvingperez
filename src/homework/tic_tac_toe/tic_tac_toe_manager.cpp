#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> & b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for(const auto & x : manager.games)
    {
        out << *x;
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
