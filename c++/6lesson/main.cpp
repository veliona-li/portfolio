#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    //сумма четных чисел в массиве
    /*int n;
    int sum = 0;

    do {
        std::cout << "Введите количество элементов массива:";
        std::cin >> n;
    } while (n <= 0);

    int a[n];

    for (int i = 1; i <= n; i++){
        std::cout << "Введите " << i << " элемент массива:\n";
        std::cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        std::cout << a[i] << " ";
    }
    for (int i = 1; i <= n; i++){
        if(a[i] % 2 == 0){
            sum = a[i] + sum;
        }
    }
    std::cout << "\nСумма четных элементов массива равна " << sum;*/

    //заполнить массив нечетными числами
    int n;
    int d;
    int x;
    int z;
    int sum = 0;

    //int f = 9 % 2;
    //std::cout << f;

    do {
        std::cout << "Введите количество элементов массива:\n";
        std::cin >> n;
    } while (n <= 0);

    do {
        std::cout << "Введите положительное начало диапазона вводимых чисел:\n";
        std::cin >> x;
    } while (x <= 0);

    do {
        std::cout << "Введите положительный конец диапазона вводимых чисел:\n";
        std::cin >> d;
        //z = d - x;
    } while (/*d <= 0 or abs(z) < d*/ d <= x);


    srand(time(0));

    int a[n];
    for(int i = 0; i < n; i++){
        do {
            a[i] = x + rand() % d;
        } while (a[i] % 2 == 0);
    }
    for(int i = 0; i < n; i++) std::cout << a[i] << " ";
}