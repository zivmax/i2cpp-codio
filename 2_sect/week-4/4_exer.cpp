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
    pair<string, int> oldest_person = {"", 0};

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
            getline(ss, buffer, '\t');
            string tmp_name = buffer;
            getline(ss, buffer, '\t');
            if (oldest_person.second < stoi(buffer))
            {
                oldest_person.first = tmp_name;
                oldest_person.second = stoi(buffer);
            }
            
        }

        file.close();
    } 
    
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }

    cout << "The oldest person is " << oldest_person.first << '.' << endl;
    


  //add code above this line
  
  return 0;
  
}
