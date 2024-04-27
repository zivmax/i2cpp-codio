#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Part 1" << endl;

    // add code below this line
    vector<int> numbers(3);
    numbers.at(0) = 10;

    cout << numbers.at(0) << endl;

    cout << numbers.at(2) << endl;

    cout << numbers.size() << endl;
    // add code above this line

    cout << "Part 2" << endl;

    numbers.push_back(7);

    cout << (numbers.at(2) = 9) << endl;

    numbers.insert(numbers.begin() + 1, 2);

    cout << numbers.at(1) << endl;

    cout << "Part 3" << endl;

    for (size_t i = 0; i < numbers.size(); i++)
    {
        numbers.erase(numbers.begin());
    }

    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << endl;
    }

    cout << "Part 4" << endl;

    vector<string> names(0);

    names.push_back("Alan");
    names.push_back("Bob");
    names.push_back("Carol");
    names.push_back("David");
    names.push_back("Ellen");



    return 0;
}