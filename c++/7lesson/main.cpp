#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int n;
    int max = 0;
    int min = 99;


    do {
        std::cout << "Введите количество элементов массива a и b:\n";
        std::cin >> n;
    } while (n <= 0);

    srand(time(0));

    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = rand() % 25 + 1;
        std::cout << a[i] << " ";
    }
    std::cout << "\n";

    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = rand() % 25 + 1;
        std::cout << b[i] << " ";
    }
    std::cout << "\n";

    int c[n];
    for(int i = 0; i < n; i++){
        c[i] = a[i] + b[i];
        if (c[i] > max) {
            max = c[i];
        }
        if (c[i] < min) {
            min = c[i];
        }
    }

    for(int i = 0; i < n; i++) std::cout << c[i] << " ";

    std::cout << "\n" << "Самое большое число в массиве c - " << max << "\n";
    std::cout << "Самое маленькое число в массиве c - " << min << "\n";
}
