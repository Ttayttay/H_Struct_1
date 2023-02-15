#include <iostream>
#include <windows.h>

using namespace std;

struct bankAccount {
    int number;
    string name;
    double cash;
};

void newCash(bankAccount& c, double newNum) {
    c.cash = newNum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    bankAccount b;

    double newMoney;

    cout << "Введите номер счета: ";
    cin >> b.number;
    cout << "Введите имя владельца: ";
    cin >> b.name;
    cout << "Введите баланс: ";
    cin >> b.cash;
    cout << "Введите новый баланс: ";
    cin >> newMoney;

    newCash(b, newMoney);

    cout << "Ваш счёт: " << b.name << ", " << b.number << ", " << b.cash << '\n';
}
