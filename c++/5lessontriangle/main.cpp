#include <windows.h>
#include <iostream>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a;
    std::cout << "Введите высоту равнобедренного треугольника:";
    std::cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < a - i; j++)
        {
            std::cout << " ";
        }
        for (int j = a - 2 * i; j <= a; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


}
