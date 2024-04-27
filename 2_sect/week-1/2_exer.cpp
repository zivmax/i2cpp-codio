#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line
    string Oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
    oceans.push_back(" ");
    oceans.push_back(" ");
    oceans.push_back(" ");
    oceans.push_back(" ");
    oceans.push_back(" ");
    oceans.push_back(" ");
    oceans.pop_back();

    for (int i = 0; i < 5; i++)
    {
        oceans.at(i) = Oceans[i];
    }
    


  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}