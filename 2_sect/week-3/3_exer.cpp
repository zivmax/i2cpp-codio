#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line
    for (auto &&i : original)
    {
        if (isupper(i))
        {
            modified.append("u");
        }
        else if (islower(i))
        {
            modified.append("l");
        }
        else
        {
            modified.append("-");
        }
    }

    cout << original << endl;    
    cout << modified << endl;

  //add code above this line
  
  return 0;
  
}