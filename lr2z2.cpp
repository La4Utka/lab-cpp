#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N:" << '\n';
    cin >> N;

    cout << "Even:";
    for(int i = 2; i <= N; i += 2)
    {
        cout << i;
    }
    cout << '\n';

    cout << "Odd:";
    for(int i = 1; i <= N; i +=2)
    {
        cout << i;
    }

    return 0;
}