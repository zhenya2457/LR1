#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double start, end, step;

    cout << "Введите начальное значение x: ";
    if (!(cin >> start))// Задаем исходное значение переменной
    {
        cout << "Ошибка ввода!\n";
        return 0;
    }
    cout << "Введите конечное значение x: ";
    if (!(cin >> end))// Задаем конечноe значение переменной
    {
        cout << "Ошибка ввода!\n";
        return 0;

    }
    cout << "Введите шаг: ";
    if (!(cin >> step) || step<=0) // Задаем шаг, с которым с которым будет изменяться аргумент
    {
        cout << "Ошибка ввода!\nВведите шаг: ";
        return 0;

    }
    for (double x = start; x <= end; x += step) {
        double y = sin(x); // функция y = sin(x)
        cout << x << " | " << y << endl; // Выводим значения функции для каждого аргумента (x | y)
    }
    return 0;
}