#include <iostream>
using namespace std;

//add function definitions below this line
int BunnyEars(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 2 + BunnyEars(n - 1);
    }
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}
