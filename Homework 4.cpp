// 1. �������� ���������, ����������� ��� ����� ���� (��������� � ����������) ����� ����� � �������� �� 10 �� 20 (������������), ���� �� � ������� ������ "true", � ��������� ������ � "false";
// 2. �������� ���������, ��������� �� ����� ������ �true�, ���� ��� ������������� ���������, ����������� � � ������ ���� ��� ����� ������ ���� �� ����, ���� �� ����� ����� ������.����� "false".
// 3. �������� ��������� ������� ������� �� ����� ������ ���� �������� ����� �� 1 �� 50. ��������: "Your numbers: 1 3 5 7 9 11 13 �".��� ������� ����������� ����� �++ ����.
// 4. �� ���������.�������� ���������, �����������, �������� �� ��������� ����� - �������.������� ����� � ��� ����� ������������� �����, ������� ������� ��� ������� ������ �� ������� � ���� ����.
// 5. �� ���������.������������ ������ � ���������� �����(���) : �� 1 �� 3000. �������� ���������, ������� ���������� �������� �� ���� ��� ����������.������ 4-� ��� �������� ����������, 
//    ����� ������� 100-��, ��� ���� ������ 400-� � ����������.������� ���������� ������ ��������� � �������.

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
