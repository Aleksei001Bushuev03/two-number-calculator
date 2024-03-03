#include <iostream>
#include <cstring>
#include<Windows.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<clocale>


class Calculator {
public:
    double num1;
    double num2;

   void double_add(double num1, double num2) //- метод должен возвращать результат сложения num1 и num2
   {
       std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
   }
     void double_multiply(double num1, double num2) //- метод должен возвращать результат перемножения num1 и num2
       {
         std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
     }
        void double_subtract_1_2(double num1, double num2)// - метод должен возвращать результат вычитания num2 из num1
           {
            std::cout << "num2 - num1 =" << num2 - num1 << std::endl;
        }
         void  double_subtract_2_1(double num1, double num2) //- метод должен возвращать результат вычитания num1 из num2
           {
             std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
         }
           void double_divide_1_2(double num1, double num2) //- метод должен возвращать результат деления num1 На num2
           {
               std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
           }
           void double_divide_2_1(double num1, double num2)// - метод должен возвращать результат деления num2 На num1
           {
               std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
            }

           void bool_set_num1(double num1)// - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
           {
               std::cout << "Введите num1: ";
               std::cin >> num1;
               std::cout << std::endl;
               if (num1==0)
               {
                   do {
                       std::cout << "Неверный ввод! " << std::endl;
                       std::cout << "Введите num1: ";
                       std::cin >> num1;
                       std::cout << std::endl;
                   } while (num1 == 0);
               }
               else
               this->num1 = num1;
               
                  }
         void bool_set_num2(double num2) //- метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
           {
             std::cout << "Введите num2: ";
             std::cin >> num2;
             std::cout << std::endl;
             if (num2 == 0)
             {
                 do {
                     std::cout << "Неверный ввод! " << std::endl;
                     std::cout << "Введите num2: ";
                     std::cin >> num2;
                     std::cout << std::endl;
                 } while (num2 == 0);
             }
             else
                 this->num2 = num2;
              }


};

int main()
{

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num_1;double num_2;
    std::cout << "Введите num1: ";
    std::cin >> num_1;
    std::cout << std::endl;
    std::cout << "Введите num2: ";
    std::cin >> num_2;
    std::cout << std::endl;
    while(true)
    {
        Calculator colculator;
        colculator.num1 = num_1;
        colculator.num2 = num_2;
        colculator.double_add(num_1, num_2);
        colculator.double_multiply(num_1, num_2);
        colculator.double_subtract_1_2(num_1, num_2);
        colculator.double_subtract_2_1(num_1, num_2);
        colculator.double_divide_1_2(num_1, num_2);
        colculator.double_divide_2_1(num_1, num_2);
        colculator.bool_set_num1(num_1);
        colculator.bool_set_num2(num_2);

    }





    return 0;
}