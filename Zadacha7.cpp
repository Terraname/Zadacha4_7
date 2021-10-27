// Zadacha7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{   
    std::cout << "This program counts number of digits of a number and finds element with rank i (units rank is 0) \n";
    bool ch = true;
    int i;
    std::string n;

    while (ch)
    {
        ch = false;
        std::cout << "Enter natural number \n";
        std::getline(std::cin, n);

        //  В числе должен быть хотя бы 1 знак
        if (n.length() == 0)
        {
            ch = true;
            std::cout << "Wrong value! Enter at list 1 digit \n";
            continue;
        }

        // Натуральное число не может начинатся с 0
        if (n[0] == 48)
        {
            ch = true;
            std::cout << "Wrong value! 0 can't be first digit of a natural number \n";
            continue;
        }

        // Проверяем все ли символы являются цифрами
        for (i = 0; i < n.length(); i++)
        {

            if (n[i] > 57 || n[i] < 48)
            {
                ch = true;
                break;
            }
        }

        // Выводим сообщение в случае ошибки
        if (ch)
        {
            ch = true;
            std::cout << "Wrong value! " << n << " is not a natural numder \n";
        }

    }

    std::cout << "Enter i \n";
    std::cin >> i;
    while (std::cin.fail() || i > n.length() - 1)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Wrong i \n";
        std::cout << "Enter i another time \n";
        std::cin >> i;
    }
    std::cout << "Number of digits is " << n.length() << "\n";
    std::cout << "Digit number " << i << " is " << n.substr(n.length() - i - 1 , 1) << "\n";
    // std::cout << n[i];
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
