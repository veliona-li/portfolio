#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

// Функция создания и вывода массива
void create_array(int** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 1 + (int)rand() % (10 - 1 + 1);
            cout << setw(4) << a[i][j] << ' ';
        }
        cout << endl;
    }
}

// Функция переворота строк в столбцы
void rowincol(int** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j] << "\n";
        }
        cout << "----\n";
    }
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "RUS");

    srand(time(NULL));

    int n = 5, m = 5;

    int** a = new int* [n];
    for (int i = 0; i < n; i++) a[i] = new int[m];

    cout << "Массив: " << endl;
    
    create_array(a, n, m);

    cout << "\nСтроки в столбцах: \n----" << endl;

    rowincol(a, n, m);
}
