#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void create_mass(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 100;//20-80
        }
    }
}

void print_mass(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void max_mass(int **arr, int n, int m)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max > arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << max;
};

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));

    int n;
    int m;
    int max = 0;

    cout << "Введите количество строк:\n";
    cin >> n;

    cout << "Введите количество столбцов:\n";
    cin >> m;

    int** arr = new int* [n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    create_mass(arr, n, m);

    print_mass(arr, n, m);
}
//09-02-07