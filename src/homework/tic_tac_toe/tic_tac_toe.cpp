#include "tic_tac_toe.h"

bool TicTacToe::game_over() {

    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        set_winner();
        return true;
    }
    else { return false; }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if(1<=position && position <=9)
    {
        pegs[position-1] = get_player();
        set_next_player();
    }
}

bool TicTacToe::check_column_win()
{
    int a = 0, b = 0;
    for(int i=0;i<1;i++)
    {
        if(pegs[0] == "X")
            a++;
        else if(pegs[0] == "O")
            b++;

        if(pegs[3] == "X")
            a++;
        else if(pegs[3] == "O")
            b++;

        if(pegs[6] == "X")
            a++;
        else if(pegs[6] == "O")
            b++;

        if(a==3 || b==3)
        {
            set_winner();
            return true;
        }
    }

    a=0;
    b=0;

    for(int i=0;i<1;i++)
    {
        if(pegs[1] == "X")
            a++;
        else if(pegs[1] == "O")
            b++;

        if(pegs[4] == "X")
            a++;
        else if(pegs[4] == "O")
            b++;

        if(pegs[7] == "X")
            a++;
        else if(pegs[7] == "O")
            b++;

        if(a==3 || b==3)
        {
            set_winner();
            return true;
        }
    }

    a=0;
    b=0;

    for(int i=0;i<1;i++)
    {
        if(pegs[2] == "X")
            a++;
        else if(pegs[2] == "O")
            b++;

        if(pegs[5] == "X")
            a++;
        else if(pegs[5] == "O")
            b++;

        if(pegs[8] == "X")
            a++;
        else if(pegs[8] == "O")
            b++;

        if(a==3 || b==3)
        {
            set_winner();
            return true;
        }
    }
    return false;
}
bool TicTacToe::check_row_win()
{
    int a = 0, b = 0;
    for(int i=0;i<=2;++i)
    {
        if (pegs[i] == "X") {
            a++;
        }
        else if(pegs[i] == "O"){
            b++;
        }
        if(a==3 || b==3)
            return true;
    }

    a=0;
    b=0;

    for(int i=3;i<=5;i++)
    {
        if (pegs[i] == "X") {
            a++;
        }
        else if(pegs[i] == "O"){
            b++;
        }
        if(a==3 || b==3)
            return true;
    }

    a=0;
    b=0;

    for(int i=6; i<=8;++i)
    {
        if (pegs[i] == "X") {
            a++;
        }
        else if(pegs[i] == "O"){
            b++;
        }
        if(a==3 || b==3)
            return true;
    }
    return false;
}
bool TicTacToe::check_diagonal_win()
{
    int a = 0, b = 0;
    for(int i=0;i<1;++i)
    {
        if (pegs[0] == "X")
        {
            a++;
        }
        else if(pegs[0] == "O"){
            b++;
        }

        if (pegs[4] == "X")
        {
            a++;
        }
        else if(pegs[4] == "O"){
            b++;
        }

        if (pegs[8] == "X")
        {
            a++;
        }
        else if(pegs[8] == "O"){
            b++;
        }
        if(a == 3 || b == 3) {return true;}
    }

    a=0;
    b=0;

    for(int i=0;i<1;++i)
    {
        if (pegs[2] == "X")
        {
            a++;
        }
        else if(pegs[2] == "O"){
            b++;
        }

        if (pegs[4] == "X")
        {
            a++;
        }
        else if(pegs[4] == "O"){
            b++;
        }

        if (pegs[6] == "X")
        {
            a++;
        }
        else if(pegs[6] == "O"){
            b++;
        }
        if(a == 3 || b == 3) {return true;}
    }
    return false;
}
void TicTacToe::set_winner()
{
    if(check_board_full())
    {
        winner = "C";
    }
    else if (player == "X")
    {
        winner = "O";
    }
    else {
        winner = "X";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{   int count = 0;

    for(int i=0; i <= 8;i++)
    {
        if(!(pegs[i] == " "))
        {
            count += 1;
        }
    }
     if(count == 9)
     {
         return true;
     }
     else
     {
         return false;
     }
}

void TicTacToe::clear_board()
{
    for(int i=0; i <= 8;i++)
    {
        pegs[i] = " ";
    }
}

ostream& operator << (ostream& out, const TicTacToe& game)
{
    out << endl
        << "| " << game.pegs[0] << " | " << game.pegs[1] << " | " << game.pegs[2] << " |" <<endl
        << "| " << game.pegs[3] << " | " << game.pegs[4] << " | " << game.pegs[5] << " |" <<endl
        << "| " << game.pegs[6] << " | " << game.pegs[7] << " | " << game.pegs[8] << " |" <<endl
        << endl;

    return out;
}

istream& operator >> (istream& in, TicTacToe& game)
{
    int position=0;
    cout << "Enter position 1 - 9 : ";
    in>>position;
    game.mark_board(position);

    return in;
}