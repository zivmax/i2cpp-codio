#include <iostream>
using namespace std;

//add function definitions below this line
string ReverseString(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    else
    {
        char c = str[0];
        str.erase(str.begin());
        return ReverseString(str) + c;
    }
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
