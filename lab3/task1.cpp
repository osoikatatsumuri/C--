#include <iostream>

int main() {
    int amount;
    std::cin >> amount;

    for (int i = 0; i < amount; i++)
    {
        for (int j = 0; j != i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << "" << std::endl;
    }

    return 0;
}
