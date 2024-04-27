#include <iostream>
using namespace std;

int main() {
  
  int a = 4;
  int b = 6;
  int c = 2;
  int d = 1;
  int nums[3][3];
  
  //add code below this line
    int arr[4] = {a, b, c, d};
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        nums[i][j] = 0;
        if (i == 2)
        {
            nums[i][j] += nums[0][j] + nums[1][j];
        }
        
        if (j == 2)
        {
            nums[i][j] += nums[i][0] + nums[i][1];
        }
        
        if (j < 2 && i < 2)
        {
            nums[i][j] += arr[2*i+j];
        }
        
      }
    }


  //add code above this line
  
  int row = sizeof(nums) / sizeof(nums[0]);
  int col = sizeof(nums[0]) / sizeof(int);
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == 2) {
        cout << nums[i][j] << endl;
      }
      else {
        cout << nums[i][j] << " ";
      }
    }
  }
  
  return 0;
  
}
