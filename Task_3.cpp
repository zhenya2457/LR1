#include <iostream>
#include <windows.h>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double  start, end, step;

    cout << "Введите начальное значение x: ";
    while (!(cin >> start))// Задаем исходное значение переменной
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Введен не корректный тип данных!\nВведите начальное значение x: ";
    }
    cout << "Введите конечное значение x: ";
    while (!(cin >> end))// Задаем конечноe значение переменной
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Введен не корректный тип данных!\nВведите конечное значение x: ";
    }
    cout << "Введите шаг: ";
    while (!(cin >> step) || step<=0) // Задаем шаг, с которым с которым будет изменяться аргумент
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка! Шаг должен быть положительным числом!\nВведите шаг: ";
    }

    for (double x = start; x <= end; x += step) {
        double y = sin(x); // функция y = sin(x)
        cout << x << " | " << y << endl; // Выводим значения функции для каждого аргумента (x | y)
    }

    return 0;
}