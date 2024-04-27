#include <iostream>
using namespace std;

int main()
{

    int num1;
    int num2;
    cout << "Type the first whole number and then press Enter or Return: ";
    cin >> num1;
    cout << "Type the second whole number and then press Enter or Return: ";
    cin >> num2;

    // fix the code below this line

    int sum = num1 + num2;
    cout << (to_string(num1) + " + " + to_string(num2) + " = " + to_string(sum)) << endl;

    // fix the code above this line

    return 0;
}
