#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    int a = stoi(argv[1]);
    int b = stoi(argv[2]);

    if (a > b)
    {
        int c = b;
        b = a;
        a = c;
    }

    // add code below this line
    int times = b - a;
    for (int i = a + 1; i <= b; i++)
    {
        a += i;
    }
    cout << a << endl;
    // add code above this line

    return 0;
}
