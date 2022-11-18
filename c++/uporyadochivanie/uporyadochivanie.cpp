#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <iomanip>
using namespace std;

void create_array(int** a, int *b, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = ((int)rand() % 200) - 99;
            cout << setw(5) << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}


void pozitive(int** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > 0) {
                cout << setw(2) << a[i][j] << " ";
            }
        }
    }
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "RUS");

    srand(time(NULL));

    int n, m, temp = 0;

    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;
    cout << endl;

    int* b = new int[n * m];
    int** a = new int* [n];
    for (int i = 0; i < n; i++) a[i] = new int[m];
    cout << endl;

    create_array(a, b, n, m);
    cout << endl;

    pozitive(a, n, m);
    cout << endl;
}