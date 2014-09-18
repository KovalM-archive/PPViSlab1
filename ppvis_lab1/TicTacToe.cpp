#include <iostream>

#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{
    for (int i=0; i<10; i++)
        for (int j=0; j<10; j++) a[i][j]=0;
}

bool TicTacToe::setLength(int n)
{
    if (n<3 || n>10) return false;
    else
    {
        length=n;
        return true;
    }
}

bool TicTacToe::setWidth(int m)
{
    if (m<3 || m>10) return false;
    else
    {
        width=m;
        return true;
    }
}


int& TicTacToe::operator ()(int i,int j)
{
    if (i<0 || i>length) return -2;
    else if (j<0 || j>width) return -3;
    else return a[i][j];
}

int TicTacToe::check(int i,int j)
{
    if (i<0 || i>length) return -2;
    else if (j<0 || j>width) return -3;
    else if (a[i][j]==0) return 0;
    else return -1;
}

int TicTacToe::checkOfVictory()
{


}
