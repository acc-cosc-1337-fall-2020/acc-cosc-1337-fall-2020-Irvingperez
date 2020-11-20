#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> & b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for(auto& x : manager.games)
    {
        out << *x;
    }
    out << "X won: " << manager.x_win << "\n";
    out << "O won: " << manager.o_win << "\n";
    out << "Ties: " << manager.tie << "\n";

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

TicTacToeManager::TicTacToeManager(TicTacToeData& d)
{
    games = d.get_games();
    for(auto& g : games)
    {
        update_winner_count(g->get_winner());
    }
}
