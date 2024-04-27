#include <iostream>
using namespace std;

// 注意，引用就是别名。
void sizeOF(int (&x)[3], int *y)
{
    printf("size: %ld\n", sizeof(x));
    printf("size: %ld\n", sizeof(y[0]));
}

int main(void)
{
    int digits[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (auto i : digits)
    {
        printf("%p\n", (void *) i);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j : digits[i])
        {
            if ((j == 3) | (j == 6) | (j == 9))
            {
                cout << j << endl;
            }
            else
            {
                cout << j << " ";
            }
        }
    }


    for (auto &i : digits)
    {
        printf("%p\n", (void *) i);
        for (int j : i)
        {
            if ((j == 3) | (j == 6) | (j == 9))
            {
                cout << j << endl;
            }
            else
            {
                cout << j << " ";
            }
        }
    }

    int x[] = {1, 2, 3};
    int y[] = {1, 2, 3};

    sizeOF(x, y);
}

