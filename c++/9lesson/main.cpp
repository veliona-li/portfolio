#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    //Заполнить массив случайными числами и заполнить второй массив четными числами из первого

    srand(time(0));

    int a[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = rand() % 100;

              do{
                  a[i][j] = rand() % 100;
              } while(a[i][j] % 2 != 0);
              cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

