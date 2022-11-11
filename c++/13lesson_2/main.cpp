#include <iostream>
#include <windows.h>
#include <cmath>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //Задание №9 - Белякова
    /*int n = 10, count = 0;
    int array[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        array[i] = (int)rand() * (-21 - 21) / RAND_MAX + 20;

        std::cout << array[i] << " ";

        if(array[i] < 0){
            count +=1;
        }
    }
    std::cout << "\n\nКоличество отрицательных чисел в массиве равно: " << count << " \n";
    std::cout << "\nМассив, числа которые находятся в диапазоне 0...10, умноженные на 10: \n";

    for(int i = 0; i < n; i++){
        if(array[i] >= 0 and array[i] <= 10){
            array[i] *= 10;
            std::cout << array[i] << " ";
        }

    }*/

    //Задание №21
    /*int n = 10, countnegativ = 0, countpozitiv = 0;
    float array[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        array[i] = (float)rand() * (-21 - 21) / RAND_MAX + 20;
        std::cout << round(array[i] * 10) / 10 << " ";

        if(array[i] < 0 and (array[i] >= (-5) and array[i] <= 5)){
            countnegativ += 1;
        }

        if(array[i] > 0){
            countpozitiv += 1;
        }
    }
    std::cout << "\n\nКоличество отрицательных чисел в диапазоне от -5 до 5 равно: " << countnegativ;
    std::cout << "\n\nКоличество положительных чисел равно: " << countpozitiv;*/

    //Задание №25
   /* int n = 10;
    float array[n], count = 0, mult = 1;
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        array[i] = (float)rand() * (-21 - 21) / RAND_MAX + 20;
        std::cout << round(array[i] * 10) / 10 << " ";

        if(array[i] < 15) count +=1;

        if(array[i] >= 10 and array[i] <= 15) mult *= array[i];
    }
    std::cout << "\n\nКоличество чисел меньших 15 равно: " << count;
    std::cout << "\n\nПроизведение чисел в диапазоне 10...15 равно: " << round(mult * 10) / 10;*/
}
