#include <iostream>
using namespace std;
int main()
{
int N;
cout << "Enter N:" << '\n';
cin >> N;

int sum = 0;
long long product = 1;
for(int i = 1; i <= N; i++)
{
    sum = sum + i;
    product = product * i;
}
cout << "Sum:" << sum << '\n';
cout << "Product:" << product << '\n';

return 0;
}