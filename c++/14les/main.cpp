#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));

    int n;
    int m;
    int a[n][m];

    std::cout << "Введите число строк:\n";
    std::cin >> n;

    std::cout << "Введите число строк:\n";
    std::cin >> m;


    for (int i = 0; i < n; i ++)
    {
        for (int j =0; j < m; j++)
        {
            a[i][j] = rand() % 100;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
}