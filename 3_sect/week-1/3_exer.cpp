#include <iostream>
#include <vector>
using namespace std;

// add code below this line
/**
 * @brief Find a term in a vector
 * @param term string type, the term to be found
 * @param vec vector of strings
 * @return true if the term is found, false otherwise
 */
bool FindTerm(string term, vector<string> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (term == vec[i])
        {
            return true;
        }
    }
    return false;
}

// add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}