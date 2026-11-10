#include <iostream>
using namespace std;

int main()
{
    double n1;
    double n2;
    char operation;
    cout << "Введите 1 число:";
    cin >> n1;
    cout << "Введите 2 число:";
    cin >> n2;
    cout << "Введите операцию:";
    cin >> operation;
    cout << "Результат:";
    if(operation == '+'){
        cout << n1 + n2;
    }
    else if(operation == '-'){
        cout << n1 - n2;
    }
    else if(operation == '*'){
        cout << n1 * n2;
    }
    else if(operation == '/'){
        if(n2 != 0){
            cout << n1 / n2;
        }
        else{
            cout << "Ошибка!";
        }
    }
    else{
        cout << "Ошибка.";
    }
    return 0;
}