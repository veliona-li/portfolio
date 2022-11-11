#include <iostream>
#include <iomanip>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));

    int n, m;

    std::cout << "Введите количество элементов массива:\n";
    std::cin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        a[i] = (int)rand() * (-21 - 21) / RAND_MAX + 20;
        std::cout << std::setw(1) << a[i] << " ";
    }

    std::cout << std::endl;
    do {
        std::cout << "Введите позицию в массиве, которую будем удалять:\n";
        std::cin >> m;
    } while (m >= n);

    for(int i = 0; i < n - 1; i++){
        if(m == i or i > m) a[i] = a[i + 1];
        std::cout << std::setw(1) << a[i] << " ";
    }
}
