#include <iostream>
#include <string>
#include<Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "������� ��� ���: ";
    std::cin >> name;
    std::cout << "�����������, " << name << '!' << std::endl;
    return 0;
}