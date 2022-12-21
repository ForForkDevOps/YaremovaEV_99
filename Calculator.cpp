#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    char operation;
    double firstNumber, secondNumber;

    std::cout << "Введите первое число: "; std::cin >> firstNumber;
    std::cout << "Введите второе число: "; std::cin >> secondNumber;
    std::cout << "Введите операцию: "; std::cin >> operation;
    if (operation == '/' && secondNumber == 0)
    {
        std::cout << "Ошибка!";
    }
    else
    {
        switch (operation)
        {
        case '+':
            std::cout << "Ответ: " << firstNumber + secondNumber << std::endl;
            break;
        case '-':
            std::cout << "Ответ: " << firstNumber - secondNumber << std::endl;
            break;
        case '*':
            std::cout << "Ответ: " << firstNumber * secondNumber << std::endl;
            break;
        case '/':
            std::cout << "Ответ: " << firstNumber / secondNumber << std::endl;
            break;
        default:
            std::cout << "Ошибка!";
        }
    }
    return 0;
}