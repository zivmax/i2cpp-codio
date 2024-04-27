#include <iostream>
#include <vector>
using namespace std;

//add code below this line

/**
 * @brief Check if a string is a palindrome
 * @param str string type, the string to be checked
 * @return true if the string is a palindrome, false otherwise
*/
bool IsPalindrome(string str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}