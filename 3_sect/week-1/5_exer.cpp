#include <iostream>
#include <vector>
using namespace std;

string Reverse(string x) {
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  return y;
}

//add code below this line
/**
 * @brief Check if a string is a palindrome
 * @param str string type, the string to be checked
 * @return true if the string is a palindrome, false otherwise
*/
bool IsPalindrome(string str)
{
    string reversed = Reverse(str); 
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != reversed[i])
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
