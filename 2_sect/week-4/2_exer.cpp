#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
    int nums[3][4] = {0};
    ifstream file(path);
    try
    {
        ifstream file(path);
        if (!file)
        {
            throw runtime_error("File failed to open.");
        }
        string buffer;
        int i = 0;
        while (getline(file, buffer))
        {
            int j = 0;
            stringstream ss(buffer);
            while (getline(ss, buffer, ','))
            {
                nums[i][j] = stoi(buffer);
                j++;
            }
            i++;
        }
        for (int j= 0; j < 4; j++)
        {
            double sum = 0; 
            for (int i= 0; i < 3 ; i++)
            {
                sum += nums[i][j];
            }
            
            cout<< sum / 3 << " ";
        }
        
        

        file.close();
    } 
    
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }


  //add code above this line
  
  return 0;
  
}
