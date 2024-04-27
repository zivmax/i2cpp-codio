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
    ifstream file(path);
    vector<string> southern_hemisphere;

    string oldest = "";
    try
    {
        ifstream file(path);
        if (!file)
        {
            throw runtime_error("File failed to open.");
        }
        string buffer;

        while (getline(file, buffer))
        {
            stringstream ss(buffer);
            vector<string> tmp(0);
            while(getline(ss, buffer, ','))
            {
                tmp.push_back(buffer);
            }
            if (tmp.at(2)[0] == '-')
            {
                southern_hemisphere.push_back(tmp.at(0));
            }
        }

        file.close();
    } 
    
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }

    cout << "The following cities are in the Southern Hemisphere: ";
    for (int i=0; i < southern_hemisphere.size()-1;i++)
    {
        cout << southern_hemisphere.at(i) << ", ";
    }
    
    cout << southern_hemisphere.at(southern_hemisphere.size()-1) << '.' << endl;
    

  //add code above this line
  
  return 0;
  
}
