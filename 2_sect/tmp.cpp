#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{

    // add code below this line
    string path = "student/text/names.txt";
    vector<string> names;
    string last_name = "Smith";
    int count = 0;

    try
    {
        ifstream file(path);
        string buffer;

        if (!file)
        {
            throw runtime_error("File failed to open.");
        }

        while (getline(file, buffer, ' '))
        {
            names.push_back(buffer);
        }

        file.close();

        for (int i = 0; i < names.size(); i++)
        {
            if (i % 2 == 1)
            {
                if (names.at(i) == last_name)
                    {
                        count++;
                    }
            }
        }
        cout << "There are " << count << " people whose last name is Smith." << endl;
    }

    catch (exception &e)
    {
        cerr << e.what() << endl;
    }

    // add code above this line

    return 0;
}
