using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.VisualBasic;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*//программа получает на входе число и проверяет делимость на 3 и 7
            try
            {
                int num = int.Parse(Interaction.InputBox("Введите число: "));

                if (num % 3 == 0 && num % 7 == 0)
                {
                    MessageBox.Show($"Введеное число {num} делится на 3 и на 7 без остатка.");
                }
                else
                {
                    MessageBox.Show($"Введенное число {num} не делится на 3 и на 7 без остатка.");
                }
            }

            catch
            {
                MessageBox.Show("Введите число.");
            }*/

            /*//программа получает на вход два числа и выводит наибольшее из них или говорит об их равенстве 
            try
            {
                int num1 = int.Parse(Interaction.InputBox("Введите первое число: "));
                int num2 = int.Parse(Interaction.InputBox("Введите второе число: "));

                if (num1 == num2) MessageBox.Show($"Числа {num1} и {num2} равны.");

                else if (num1 > num2) MessageBox.Show($"Число {num1} больше {num2}");

                else MessageBox.Show($"Число {num2} больше {num1}");
            }

            catch
            {
                MessageBox.Show("Введите число.");
            }*/

            /*//сумма четных чисел  
            try 
            { 
                Console.Write("Введите количество элементов массива: "); 
                int n = int.Parse(Console.ReadLine()); 
                int[] arr = new int[n]; 
 
                int sum = 0; 
                Random rnd = new Random(); 
 
                for (int i = 0; i < arr.Length; i++) 
                { 
                    arr[i] = rnd.Next(1, 100); 
                    if (arr[i] % 2 == 0) sum += arr[i]; 
                    Console.Write(arr[i] + " "); 
                } 
 
                Console.WriteLine(); 

                Console.WriteLine($"Сумма четных чисел равна: {sum}."); 
            } 
 
            catch 
            { 
                Console.WriteLine("Введите число."); 
            } 
 
            Console.ReadKey();*/

            /*//сумма квадратов чисел 
            try
            {
                Console.Write("Введите количество элементов массива: ");
                int n = int.Parse(Console.ReadLine());
                int[] arr = new int[n];

                int sum = 0;
                Random rnd = new Random();

                for (int i = 0; i < arr.Length; i++)
                {
                    arr[i] = rnd.Next(1, 100);
                    sum = sum + (arr[i] * arr[i]);
                    Console.Write(arr[i] + " ");
                }

                Console.WriteLine();
                Console.WriteLine($"Сумма квадратов чисел равна: {sum}.");
            }

            catch
            {
                Console.WriteLine("Введите число.");
            }

            Console.ReadKey();*/

            /*//вводится число, определить по введенному числу день недели 
            try
            {
                Console.Write("Введите число: ");
                int a = int.Parse(Console.ReadLine());

                switch (a)
                {
                    case 1:
                        Console.WriteLine("Понедельник.");
                        break;
                    case 2:
                        Console.WriteLine("Вторник.");
                        break;
                    case 3:
                        Console.WriteLine("Среда.");
                        break;
                    case 4:
                        Console.WriteLine("Четверг.");
                        break;
                    case 5:
                        Console.WriteLine("Пятница.");
                        break;
                    case 6:
                        Console.WriteLine("Суббота.");
                        break;
                    case 7:
                        Console.WriteLine("Воскресенье.");
                        break;
                    default:
                        Console.WriteLine("Данному числу не принадлежит день недели.");
                        break;
                }
            }

            catch
            {
                Console.WriteLine("Введите число.");
            }

            Console.ReadKey();*/
        }
    }
}
