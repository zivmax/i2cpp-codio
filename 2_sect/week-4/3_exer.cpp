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
    vector<string> lines(0);
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
            lines.push_back(buffer);
        }

        file.close();
    } 
    
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }

    for (int i = lines.size() - 1; i >= 0; i--)
    {
        cout << lines[i] << endl;
    }
    

  //add code above this line
  
  return 0;
  
}
