#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Заполнить массив 10*10 числами, сложить столбцы и найти минимум и максимум
    int sum[10], a[10][10], max, min;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        sum[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = rand() % 78 + 7;
            cout << a[i][j] << " ";
            sum[j] += a[i][j];
        }
        cout << "\n";
    }

    cout << "\n\n";
    for (int i = 0; i < 10; i++)
    {
        cout << sum[i] << "\t";
    }

    max = 0;
    min = 900;
    for (int i = 0; i < 10; i++)
    {
        if (max < sum[i]){
            max = sum[i];
        }
        if (min > sum[i]){
            min = sum[i];
        }
    }

    cout << "\n\n";
    cout << "Максимальное число - " << max << "\n";
    cout << "Минимальное число - " << min << "\n";


}
