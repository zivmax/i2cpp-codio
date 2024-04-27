#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line
class Median
{
    public:
        double CalculateMedian(int a, int b, int c, int d, int e)
        {
            vector<int> v = {a, b, c, d, e};
            sort(v.begin(), v.end());
            return v[2];
        }
        double CalculateMedian(int a, int b, int c, int d)
        {
            vector<int> v = {a, b, c, d};
            sort(v.begin(), v.end());
            return (v[2]+v[1])/2.0;
        }
        double CalculateMedian(int a, int b, int c)
        {
            vector<int> v = {a, b, c};
            sort(v.begin(), v.end());
            return v[1];
        }
        double CalculateMedian(int a, int b)
        {
                vector<int> v = {a, b};
                sort(v.begin(), v.end());
                return (v[1]+v[0])/2.0;
        }

};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
