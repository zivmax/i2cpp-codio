#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line
// GetMax()takes a vector of integers as a parameter. Then it returns the largest integer in the array.
int GetMax(vector<int> vec)
{
    if (vec.size() == 0)
    {
        return 0;
    }
    else
    {
        int max = vec[0];
        vec.erase(vec.begin());
        int max2 = GetMax(vec);
        if (max > max2)
        {
            return max;
        }
        else
        {
            return max2;
        }
    }
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}
