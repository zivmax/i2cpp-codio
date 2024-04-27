#include <iostream>
#include <vector>
using namespace std;

//add code below this line
/**
 * @brief Get the odds and evens from a vector
 * @param b string type, either "true" or "false"
 * @param nums vector of integers
 * @return void, but prints the odds and evens to the console 
 * depands on the "true" or "false"
*/
void GetOddsEvens(string b, vector<int> nums)
{
    bool flag = false;
    if (b == "false")
    {
        flag = true;
    }
    else if (b == "true")
    {
        flag = false;
    }
    else
    {
        return;
    }
    if (flag)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 1)
            {
                cout << nums[i] << endl;
            }
        }
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                cout << nums[i] << endl;
            }
        }
    }
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}