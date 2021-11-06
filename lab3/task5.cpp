#include <iostream>

int pow(int num, int degree);

int main()
{
    std::cout << pow(2, 3);
    return 0;
}

int pow(int num, int degree)
{
    int result = 1;

    for (int i = 1; i <= degree; i++)
    {
        result *= num;
    }

    return result;
}
