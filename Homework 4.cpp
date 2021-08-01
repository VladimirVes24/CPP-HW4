// 1. Написать программу, проверяющую что сумма двух (введенных с клавиатуры) чисел лежит в пределах от 10 до 20 (включительно), если да – вывести строку "true", в противном случае – "false";
// 2. Написать программу, выводящую на экран строку “true”, если две целочисленные константы, объявленные в её начале либо обе равны десяти сами по себе, либо их сумма равна десяти.Иначе "false".
// 3. Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50. Например: "Your numbers: 1 3 5 7 9 11 13 …".Для решения используйте любой С++ цикл.
// 4. Со звёздочкой.Написать программу, проверяющую, является ли некоторое число - простым.Простое число — это целое положительное число, которое делится без остатка только на единицу и себя само.
// 5. Со звёздочкой.Пользователь вводит с клавиатуры число(год) : от 1 до 3000. Написать программу, которая определяет является ли этот год високосным.Каждый 4-й год является високосным, 
//    кроме каждого 100-го, при этом каждый 400-й – високосный.Вывести результаты работы программы в консоль.

#include <iostream>



void Task1()
{
    int a = 0, b = 0;

    std::cout << "First number:";
    std::cin >> a;
    std::cout << "Second number:";
    std::cin >> b;

    if (10 <= (a + b) && (a + b) <= 20) std::cout << "\nTask 1:True";
    else std::cout << "\nTask 1:False";
}

void Task2()
{
    const int a = 0, b = 10;

    if (((a == 10) && (b == 10)) || ((a + b) == 10)) std::cout << "\nTask 2: True";
    else std::cout << "\nTask 2: False";
}

void Task3()
{
    std::cout << "\nTask 3 Numbers:";
    for (int i = 1; i < 51; i++)
    {
        if (i % 2 != 0) std::cout << i << " ";
    }
    std::cout << "\n";
}

bool Task4(int input)
{
    bool check = true;
    if (input <= 0) check = false;
    else
    {
        for (int i = 2; i < input; i++)
        {
            if (input % i == 0) check = false;
        }
    }
    return check;
}

bool Task5(int input)
{
    bool check = false;
    if ((input % 4 == 0)&&(input % 100 != 0)) check = true;
    if (input % 400 == 0) check = true;
    return check;
}

int main()
{
    Task1();
    Task2();
    Task3();


    //Task 4
    int number = 131;
    if (Task4(number)) std::cout << "\nTask 4: Number is Prime\n";
    else std::cout << "\nTask 4: Number is not Prime\n";

    //Task 5
    
    int input = 0;
    bool correctInput = false;
    std::cout << "\nTask 5:";

    while (!correctInput)
    {
        std::cout << "\nEnter year number from 1 to 3000:";
        std::cin >> input;
        if (input >= 1 && input <= 3000) correctInput = true;
        else std::cout << "\nInput is out of range!";
    }

    if (Task5(input)) std::cout << "Intercalary year\n";
    else std::cout << "Ordinary year\n";


}
