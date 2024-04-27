#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line

int ListSum(vector<int> vec)
{
    if (vec.size() == 0)
    {
        return 0;
    }
    else
    {
        int num = vec[0];
        vec.erase(vec.begin());
        return num + ListSum(vec);
    }
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
