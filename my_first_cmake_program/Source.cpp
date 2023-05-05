#include <iostream>
#include <windows.h>

int main()
{
    system("chcp 1251");
    system("cls");
    std::string stg;
    std::cout << "Введите имя: ";
    std::cin >> stg;
    std::cout << "Здравствуйте, " << stg << "! " << std::endl;
}
