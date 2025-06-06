// Нужно вывести на экран горизонтальную или вертикальную линию из символов. Пользователь вводит через пробел: тип линии,
// количество символов и сам символ. Если тип линии 1, то следует вывести вертикальную линию, а если тип 2 - то горизонтальную.
// При неправильных исходных данных (тип линии, отличный от 1 или 2, либо отрицательном количестве символов) нужно вывести слово ERROR.

#include <iostream>
using namespace std;

int main()
{
    int type, amount;
    char symbol;

    cout << "Выберите тип линии: ";
    cin >> type;

    cout << "Введите количество символов: ";
    cin >> amount;

    cout << "Введите символ: ";
    cin >> symbol;

    if (symbol != '*' && symbol != '-' || amount < 0) {
        cout << "ERROR" << endl;
        return 0;
    }

    for (int i = 0; i <= amount - 1; i++) {

        if (type == 1 && amount >= 0) {
            cout << "*" << endl;
        }
        
        else if (type == 2 && amount >= 0) {
            cout << "-";
        }

        else if (type < 1 || type > 2) {
            cout << "ERROR" << endl;
            return 0;
        }
    }
    return 0;
}
