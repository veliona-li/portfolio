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
            a[i][j] = rand() % 100;
            cout << setw(4) << a[i][j] << ' ';
        }
        cout << endl;
    }
}

// Функция обнуления столбца и вывода обнуленного массива
void null_col(int** a, int n, int m, int col) {
    for (int i = 0; i < n; i++) {
        a[i][col] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "RUS");

    srand(time(NULL));

    int n, m, col;

    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;

    int** a = new int* [n];
    for (int i = 0; i < n; i++) a[i] = new int[m]; // динамический массив

    cout << endl;

    create_array(a, n, m);

    do {
        cout << "\nВведите столбец для обнуления: ";
        cin >> col;
    } while ((col >= n) || (col <= -1));
 
    null_col(a, n, m, col);
}
