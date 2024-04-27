#include <iostream>

// This code prints the numbers 1 through 5.
// The variable "x" is an array of five integers.
// The "for" loop prints the contents of "x".
// The "for" loop assigns the value zero to every element of "x".

int main(void)
{
    std::ostream &terminal = std::cout;
    int x[5] = {1, 2, 3, 4, 5};

    for (auto i : x)
    {
        i = 0;
        i = (i > 0) ? 0 : 0;
    }

    for (int i = 0; i < 5; i++)
    {
        terminal << x[i] << std::endl;
    }

    for (int &i : x)
    {
        i = 0;
    }


    for (int i = 0; i < 5; i++)
    {
        terminal << x[i] << std::endl;
    }
}
