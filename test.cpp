#include <iostream>

int main()
{
    int a,b,sum;

    std::cout << "Enter your math score: " << std::endl;
    std::cin >> a;

    std::cout << "Your English score: " << std::endl;
    std::cin >> b;

    sum = a + b;

    if ( sum> 160 )
    {
        std::cout << "Your score is: " << sum << " Which is a B, keep it up!" << std::endl;
    }

    if ( sum> 180 )
    {
        std::cout << "Your score is: " << sum << " Wow! You're Elite! A Student" << std::endl;
    }else
    {
        std::cout << "I will keep ur score to you:  " << sum << " Bad, but you still have chance" << std::endl;
    }
    

    return 0;
}