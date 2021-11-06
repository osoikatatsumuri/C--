#include <iostream>

int main()
{
    int factorial;
    int num = 1;

    std::cin >> factorial;

    for (int i = 1; i <= factorial; i++)
    {
        num *= i;
    }

    std::cout << num;
}