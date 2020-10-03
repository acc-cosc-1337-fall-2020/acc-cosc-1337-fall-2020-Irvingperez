//cpp
#include"loops.h"

int factorial(int num)
{
    int factorial = 1;
    int i;
    for (i=1; i < num; i++)
    {
        factorial += factorial * i;

    }
    return factorial;
}

