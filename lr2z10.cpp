#include <iostream>
using namespace std;
long long factorial(int n)
{
    long long result = 1;
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter n:\n";
    cin >> n;

    cout << "Factorial: " << factorial(n) << '\n';

    return 0;
}