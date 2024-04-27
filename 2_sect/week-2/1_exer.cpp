#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int *p1 = &a;
  int *p2 = &b;
  
  //add code below this line
  if (*p1 == *p2)
  {
    cout << "Neither number is larger" << endl;
  }
  else
  {
    int larger = (*p1 > *p2) ? *p1 : *p2;
    cout << "The larger number is " << larger << endl;
  }
  
  
  //add code above this line
  
  return 0;
  
}
