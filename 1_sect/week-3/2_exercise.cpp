#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    int x = stoi(argv[1]);

    // add code below this line
    if (x % 5 == 0)
    {
        cout << x << " is divisible by 5" << endl;
    }
    else
    {
        cout << x << " is not divisible by 5" << endl;
    }

    // add code above this line

    return 0;
}
