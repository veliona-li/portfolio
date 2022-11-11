#include <iostream>
#include <iomanip>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));

    //std::cout << "Создать массив m*n и поменять строки/столбцы местами.";
    int n;
    int m;
    int a[m][n];

    std::cout << "Введите количество строк:\n";
    std::cin >> m;

    std::cout << "Введите количество столбцов:\n";
    std::cin >> n;

/*
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            a[i][j] = rand() % 100;
            std::cout << a[i][j];
        }
    }
*/

}
