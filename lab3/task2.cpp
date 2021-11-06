#include <iostream>

int main()
{
    int startInterval = 1;
    int endInterval;
    int divisor;
    int amountOfDividents = 0;
    std::cin >> endInterval;
    std::cin >> divisor;

    for (int point = startInterval; point < endInterval; point++)
    {
        if (point % divisor == 0)
        {
            amountOfDividents++;
        }
    }

    std::cout << amountOfDividents;
    return 0;
}