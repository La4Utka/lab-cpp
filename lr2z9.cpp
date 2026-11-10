#include <iostream>
using namespace std;
bool isPositive(int number)
{
    return number > 0;
}

bool isThreeDigit(int number)
{
    return number >= 100 && number <= 999;
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    if(isPositive(number))
    {
        cout << "Positive: yes\n";
    }
    else
    {
        cout << "Positive: no\n";
    }

    if(isThreeDigit(number))
    {
        cout << "Three-digit: yes\n";
    }
    else
    {
        cout << "Three-digit: no\n";
    }

    return 0;
}