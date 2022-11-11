#include <iostream>
#include <windows.h>
#include <conio.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a;
    std::cout << "Введите число:";
    std::cin >> a;
    std::cout << "Ваше число: ";

    if (a <= 0) {
        std::cout << "Число не подходит";
    }

    switch (a / 1000 % 10)
    {
        case 1: std::cout << "Одна тысяча "; break;
        case 2: std::cout << "Две тысячи "; break;
        case 3: std::cout << "Три тысячи "; break;
        case 4: std::cout << "Четыре тысячи "; break;
        case 5: std::cout << "Пять тысяч "; break;
        case 6: std::cout << "Шесть тысяч "; break;
        case 7: std::cout << "Семь тысяч "; break;
        case 8: std::cout << "Восемь тысяч "; break;
        case 9: std::cout << "Девять тысяч "; break;
    }

    switch (a / 100 % 10)
    {
        case 1: std::cout << "сто "; break;
        case 2: std::cout << "двести "; break;
        case 3: std::cout << "триста "; break;
        case 4: std::cout << "четыреста "; break;
        case 5: std::cout << "пятьсот "; break;
        case 6: std::cout << "шестьсот "; break;
        case 7: std::cout << "семьсот "; break;
        case 8: std::cout << "восемьсот "; break;
        case 9: std::cout << "девятьсот "; break;
    }

    switch ((a % 100) / 10)
    {
        case 2: std::cout << "двадцать "; break;
        case 3: std::cout << "тридцать "; break;
        case 4: std::cout << "сорок "; break;
        case 5: std::cout << "пятьдесят "; break;
        case 6: std::cout << "шестьдесят "; break;
        case 7: std::cout << "семьдесят "; break;
        case 8: std::cout << "восемьдесят "; break;
        case 9: std::cout << "девяносто "; break;
    }

    if (a % 100 >= 10 & a % 100 < 20) {
        switch (a % 100) {
            case 10: std::cout << "десять рублей"; break;
            case 11: std::cout << "одиннадцать рублей"; break;
            case 12: std::cout << "двенадцать рублей"; break;
            case 13: std::cout << "тринадцать рублей"; break;
            case 14: std::cout << "четырнадцать рублей"; break;
            case 15: std::cout << "пятнадцать рублей"; break;
            case 16: std::cout << "шестнадцать рублей"; break;
            case 17: std::cout << "семнадцать рублей"; break;
            case 18: std::cout << "восемнадцать рублей"; break;
            case 19: std::cout << "девятнадцать рублей"; break;
        }
    }
    else {
        switch (a % 10)
        {
            case 0: std::cout << "ноль\n"; break;
            case 1: std::cout << "один рубль\n"; break;
            case 2: std::cout << "два рубля\n"; break;
            case 3: std::cout << "три рубля\n"; break;
            case 4: std::cout << "четыре рубля"; break;
            case 5: std::cout << "пять рублей "; break;
            case 6: std::cout << "шесть рублей"; break;
            case 7: std::cout << "семь рублей"; break;
            case 8: std::cout << "восемь рублей"; break;
            case 9: std::cout << "девять рублей"; break;
        }
    }
}