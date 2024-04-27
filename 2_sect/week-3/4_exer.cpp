#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
    int half = my_string.length()/2;
    cout << my_string.substr(0, half) << endl;
    cout << my_string.substr(half, (int)my_string.length() - half) << endl;

  //add code above this line
  
  return 0;
  
}