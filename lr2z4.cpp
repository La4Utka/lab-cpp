#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter number: " << '\n';
    cin >> number;

    int sum = 0;
    int count = 0;

    while(number != 0)
    {
        sum = sum + number;
        count++;

        cout << "Enter number: ";
        cin >> number;
    }
    cout << "Count: " << count << '\n';
    cout << "Sum: " << sum << '\n';

    return 0;
}