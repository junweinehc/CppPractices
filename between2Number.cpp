#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    std::cout << "Enter two numbers, first one is largar than second one"; //<< std::endl;
    std::cin >> num1 >> num2;
    while (num2!=num1+1)
    {
        --num2;
        std::cout << num2 <<std::endl;
    }
    
}