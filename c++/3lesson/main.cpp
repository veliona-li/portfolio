#include <iostream>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    //сумма чисел до N

    /*int a = 0;

    int n;
    std::cout << "Введите число n:";
    std::cin >> n;

    for (int i; i <= n; i++)
    {
        a += i;
    }

    std::cout << a;*/

    //задача на ЗП

    /*int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for (int i = 1; i <= 6; i++)
    {
        std::cout << "Введите сумму ЗП за " << i << " месяц: \n";
        std::cin >> a;
        b += a;
        c = a * 0.13;
        d += c;
    }

    std::cout << "Общая сумма заработной платы составила " << b << " руб." << std::endl;
    std::cout << "Средняя ЗП за 6 месяцев составила - " << b / 6 << " руб." << std::endl;
    std::cout << "НДФЛ составил - " << d << " руб." << std::endl;
    std::cout << "Взнос в профсоюз составил - " << b * 0.01 << " руб." << std::endl;*/

    //возведение в степень

    /*int a;
    int b;
    int c;

    std::cout << "Введите число, которое будет возведено в степень:" << std::endl;
    std::cin >> a;
    std::cout << "Введите степень, в которую будет возведено число:" << std::endl;
    std::cin >> b;

    c = a;

    if (a == 0)
    {
        std::cout << "Нельзя вводить 0 " << std::endl;
        return 0;
    }

    for (int i = 1; i < b; i++)
    {
        a *= c;
        std::cout << a << std::endl;
    }

    std::cout << "Вводите только числа!" << std::endl;

    std::cout << "Число " << c << " возведённое в степень " << b << " равно " << a << std::endl;*/


    //решить уравнение

    double y;
    double a = 6.5;
    double b = 9.5;
    double c = 1.365;
    double d = 4;


    y = (pow(sin(a), 4) * pow(cos(b), 2)) / (5 * pow(sin(c), d)) + (3.f / 22.f);
    std::cout << y;




//    int x;
//    bool success = false;
//
//    std::cout << "Введите значение: " << std::endl;
//    while (!success)
//    {
//        std::cin >> x;
//        if (std::cin.good())
//        {
//            std::cout << "Вы ввели значение " << x << std::endl;
//            success = true;
//        }
//        else {
//            std::cout << "Значение введено неверно. Повторите ввод: " << std::endl;
//        }
//    }


//    int input;
//    std::cout << "Введите число: " << std::endl;
//    std::cin >> input;
//    if (!std::cin.fail()) {
//        std::cout << "Введено целое число " << input << std::endl;
//    }
//    else {
//        std::cout << "Введена кракозябра :) " << input << std::endl;
//    }
}
