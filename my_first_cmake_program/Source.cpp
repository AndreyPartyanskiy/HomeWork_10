#include <iostream>
#include <windows.h>

int main()
{
    system("chcp 1251");
    system("cls");
    std::string stg;
    std::cout << "������� ���: ";
    std::cin >> stg;
    std::cout << "������������, " << stg << "! " << std::endl;
}
