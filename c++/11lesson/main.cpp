#include <iostream>
#include <windows.h>

int a;
int b;

int sum(int a, int b){
    return a + b;
}
int raz(int a, int b){
    return a - b;
}
int proiz(int a, int b){
    return a * b;
}
int del(int a, int b){
    return a / b;
}


int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    // математические операции через функции
    std::cout << "Введите первое число\n";
    std::cin >> a;
    std::cout << "Введите второе число\n";
    std::cin >> b;
    std::cout << "Сумма чисел: " << sum(a, b) << "\n";
    std::cout << "Разность чисел: " << raz(a, b) << "\n";
    std::cout << "Произведение чисел: " << proiz(a, b) << "\n";
    std::cout << "Частное чисел: " << del(a, b) << "\n";
}










