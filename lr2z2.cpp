#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N:" << '\n';
    cin >> N;

    cout << "Even:";
    for(int i = 2; i <= 10; i += 2)
    {
        cout << i;
    }
    cout << '\n';

    cout << "Odd:";
    for(int i = 1; i <= 9; i +=2)
    {
        cout << i;
    }

    return 0;
}