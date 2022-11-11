#include <iostream>
#include <windows.h>
#include <iomanip>
#include <ctime>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(NULL));

    int n, m, d;

    std::cout << "Количество строк:";
    std::cin >> n;

    std::cout << "Количество столбцов:";
    std::cin >> m;

    int a[n][m];

    //заполнение массива и его вывод
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            a[i][j] = (int)rand() * (-21 - 21) / RAND_MAX + 20;
            std::cout << std::setw(4) << a[i][j] << " ";
        }
        std::cout << "\n";
    }


    do {
        std::cout << "Введите 0 чтобы поменять местами и строки и столбцы, введите 1 для замены строк, 2 - для замены столбцов:\n";
        std::cin >> d;
    } while((d != 0) and (d != 1) and (d != 2));

    //меняем 2 строки и 2 столбца
    if (d == 0) {
        int a1;
        int a2;

        do {
            std::cout << "Первая строка для замены:\n";
            std::cin >> a1;
        } while(a1 <= 0 and a1 > n);

        do {
            std::cout << "Вторая строка для замены:\n";
            std::cin >> a2;
        } while(a2 <= 0 and a2 > n);

        for (int j = 0; j < m; j++)
        {
            int b = a[a1][j];
            a[a1][j] = a[a2][j];
            a[a2][j] = b;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << std::setw(4) << a[i][j] << " ";
            }
            std::cout << '\n';
        }

        int b1;
        int b2;
        do {
            std::cout << "Первый столбец для замены:\n";
            std::cin >> b1;
        } while(b1 < 0 and b1 > n);
        do {
            std::cout << "Второй столбец для замены:\n";
            std::cin >> b2;
        } while(b2 < 0 and b2 > n);

        for (int i = 0; i < m; i++)
        {
            int c = a[i][b1];
            a[i][b1] = a[i][b2];
            a[i][b2] = c;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << std::setw(4) << a[i][j] << " ";
            }
            std::cout << '\n';
        }
    }

    //меняем 2 строки
    else if(d == 1) {
        int a1;
        int a2;

        do {
            std::cout << "Первая строка для замены:\n";
            std::cin >> a1;
        } while(a1 <= 0 and a1 > n);

        do {
            std::cout << "Вторая строка для замены:\n";
            std::cin >> a2;
        } while(a2 <= 0 and a2 > n);

        for (int j = 0; j < m; j++)
        {
            int b = a[a1][j];
            a[a1][j] = a[a2][j];
            a[a2][j] = b;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << std::setw(4) << a[i][j] << " ";
            }
            std::cout << '\n';
        }
    }

    //меняем 2 столбца
    else {
        int b1;
        int b2;

        do {
            std::cout << "Первый столбец для замены:\n";
            std::cin >> b1;
        } while(b1 < 0 and b1 > n);

        do {
            std::cout << "Второй столбец для замены:\n";
            std::cin >> b2;
        } while(b2 < 0 and b2 > n);

        for (int i = 0; i < m; i++)
        {
            int c = a[i][b1];
            a[i][b1] = a[i][b2];
            a[i][b2] = c;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << std::setw(4) << a[i][j] << " ";
            }
            std::cout << '\n';
        }
    }



    /*int a1;
    int a2;
    std::cout << "Первая строка для замены:";
    std::cin >> a1;
    std::cout << "Вторая строка для замены:";
    std::cin >> a2;

    for (int j = 0; j < m; j++)
    {
        int b = a[a1][j];
        a[a1][j] = a[a2][j];
        a[a2][j] = b;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << std::setw(4) << a[i][j] << " ";
        }
        std::cout << '\n';
    }

    int b1;
    int b2;
    std::cout << "Первый столбец для замены:";
    std::cin >> b1;
    std::cout << "Второй столбец для замены:";
    std::cin >> b2;

    for (int i = 0; i < m; i++)
    {
        int c = a[i][b1];
        a[i][b1] = a[i][b2];
        a[i][b2] = c;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << std::setw(4) << a[i][j] << " ";
        }
        std::cout << '\n';
    }*/
}
