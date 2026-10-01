// Lab_03_1.cpp
// Ковмір Андрій
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x; // Вхідний параметр
    double y; // Результат обчислення
    double A; // Стала частина виразу
    double B; // Змінна частина виразу

    cout << "x = "; cin >> x;

    A = fabs(4 * x - 1); // стала частина

    // Спосіб 1: розгалуження в скороченій формі (лише if)
    if (x < 0) 
        B = pow(x, 7) - 2 * x;
    if (x > 0 && x <= 3) // булева операція(і)
        B = atan((exp(x) + 1) / 8);
    if (x >= 3)
        B = pow(x, 4) + exp(pow(x, 2) + 3);
    y = A + B;

    cout << "1) y = " << y << endl;

    // Спосіб 2: розгалуження в повній формі (if else if else)
    if (x < 0)
        B = pow(x, 7) - 2 * x;
    else
        if (x >= 3)
            B = pow(x, 4) + exp(pow(x, 2) + 3);
        else
            B = atan((exp(x) + 1) / 8);
    
    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
    }