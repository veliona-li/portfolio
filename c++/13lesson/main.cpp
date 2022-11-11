#include <iostream>
#include <windows.h>
#include <cmath>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //Задание №20 - Ищенко
    /*
    srand(time(0));

    int n = 15;
    int sum = 0;
    int count = 0;
    float a[n];
    float b = 0;
    std::cout << "Задайте начальное число в диапазоне от -20 до 20: \n";
    std::cin >> b;

    for (int i = 0; i < n; i++) {
        a[i] = (float)rand() * (-21 - 21) / RAND_MAX + 21;
        //(double)rand() * (b-a) / RAND_MAX + a

        std::cout << round(a[i] * 10) / 10 << " ";
        if (round(a[i] * 10) / 10 > 0) {
            sum += a[i];
        }
        if (round(a[i] * 10) / 10 < 0 and abs(round(a[i] * 10) / 10 - b) <= 0.5) {
                count += 1;
        }
        if (round(a[i] * 10) / 10 > 0 and abs(round(a[i] * 10) / 10 - b) <= 0.5) {
            count += 1;
        }
    }
    std::cout << "\nСумма положительных чисел равна - " << sum << std::endl;
    std::cout << "\nКоличество чисел, отличающихся от заданного не более, чем на 0.5 равно - " << count << std::endl;*/

    //Задание 24

    srand(time(0));
/*
    int n = 10;
    float sum = 0;
    int count = 0;
    float a[n];

    for (int i = 0; i < n; i++) {
        a[i] = (float)rand() * (-21 - 21) / RAND_MAX + 21;
        //(double)rand() * (b-a) / RAND_MAX + a
        std::cout << round(a[i] * 10) / 10 << " ";
        if (a[i] >= 1.5) {
            count += 1;
        }
        if ((-1) <= a[i] and a[i] <= 0) {
            sum += round(a[i] * 10) / 10;
        }
    }

    std::cout << "\n\nКоличество чисел, больших или равных 1.5 - " << count << std::endl;
    std::cout << "\nСумма отрицательных чисел в диапазоне от -1 до 0 равна - " << "(" << sum << ")" << std::endl;*/

    //Задание 22
/*
    srand(time(0));

    int n = 15;
    int count = 0;
    float a[n];

    std::cout << "Начальный массив:\n";
    for (int i = 0; i < n; i++) {
        a[i] = (float)rand() * (-21 - 21) / RAND_MAX + 21;
        //(double)rand() * (b-a) / RAND_MAX + a
        std::cout << round(a[i] * 10) / 10 << " ";
        if (a[i] >= 1 and a[i] <= 11) {
            count += 1;
        }
    }

    std::cout << "\n\nКоличество чисел, входящих в диапазон от 1 до 11 включительно - " << count << std::endl;

    std::cout << "\nПреобразованный массив:\n";
    for (int i = 0; i < n; i++) {
        if (round(a[i] * 10) / 10 >= 1 and round(a[i] * 10) / 10 <= 11) {
            std::cout << round(a[i] * a[i] * 10) / 10 << " ";
        }
    }*/
}
