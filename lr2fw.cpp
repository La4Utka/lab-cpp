#include <iostream>
using namespace std;
bool isEven(int number)
{
    return number % 2 == 0;
}

bool isPositive(int number)
{
    return number > 0;
}

int digitSum(int number)
{
    if(number < 0) number = -number;

    int sum = 0;
    do
    {
        sum += number % 10;
        number /= 10;
    } while(number > 0);
    return sum;
}

int digitCount(int number)
{
    if(number < 0) number = -number;
    int count = 0;
    do
    {
        count++;
        number /= 10;
    } while(number > 0);
    return count;
}

bool isPrime(int number)
{
     if(number < 2)
    {
        return false;
    }
    
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    while(true)
    {
        cout << "Enter number: ";
        cin >> number;

        cout << "Even: " << (isEven(number) ? "yes" : "no") << '\n'; //узнала, что "? и :" можно использовать вместо if-else
        cout << "Positive: " << (isPositive(number) ? "yes" : "no") << '\n';
        cout << "Digit sum: " << digitSum(number) << '\n';
        cout << "Digit count: " << digitCount(number) << '\n';
        cout << "Prime: " << (isPrime(number) ? "yes" : "no") << '\n';

        int choice;
        cout << "Continue? (1 - yes, 0 - no): ";
        cin >> choice;

        if (choice == 0) break;
    }
    return 0;
}