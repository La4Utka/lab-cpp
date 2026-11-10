#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N:" << '\n';
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cout << i;
    }

    cout << '\n';

    for(int i = N; i >= 1; i--)
    {
        cout << i;
    }

    return 0;
}