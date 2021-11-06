#include <iostream>

int main()
{
    int index;
    int tmp;
    int prevNumber = 0;
    int firstFibNum = 0;
    int secondFibNum = 1;
    int nFibNum = 1;

    std::cin >> index;

    switch (index)
    {
        case 1:
            std::cout << firstFibNum;
            return 0;
        case 2:
            std::cout << secondFibNum;
            return 0;
        default:
            if (index <= 0)
            {
                return -1;
            }
            break;
    }

    for (int counter = 3; counter <= index; counter++)
    {
            tmp = nFibNum;
            nFibNum += prevNumber;
            prevNumber = tmp;
    }

    std::cout << nFibNum;
}