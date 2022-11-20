#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;

void create(int** a, int n, int m) {

}

int main()
{
    setlocale(0, "");
    srand(time(NULL));

    const int n = 5;
    const int m = 5;

    int mass[n][m];

    int i, j, a, c, e = 1, d = 100, temp, x, z;

    cout << "Массив до сортировки""\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mass[i][j] = ((int)rand() % 200) - 99;
            cout << setw(4) << mass[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (c = 0; c <= (n * m); c++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m - 1; j++)
            {
                if (mass[i][j] > mass[i][j + 1])
                {
                    temp = mass[i][j];
                    mass[i][j] = mass[i][j + 1];
                    mass[i][j + 1] = temp;
                }
            }
        }

        for (x = 0; x < m; x++)
        {
            for (z = 0; z < n - 1; z++)
            {
                if (mass[z][x] > mass[z][x + 1])
                {
                    temp = mass[z][x];
                    mass[z][x] = mass[z][x + 1];
                    mass[z][x + 1] = temp;
                }
            }
        }
    }

    cout << "\nМассив после сортировки \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << setw(4) << mass[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nУпорядоченные положительные числа: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mass[i][j] > 0) cout << mass[i][j] << " ";
        }
    }

    cout << endl;
}
