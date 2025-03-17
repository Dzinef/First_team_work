#include "forRepo.h"


void EnterSize(int32_t& size)
{
    std::cout << "Enter size (not exceeding 100):\n";
    std::cin >> size;
    if (size > 100)
    {
        size = 100;
    }
}

void EnterChoice(int32_t& choice)
{
    std::cout << "Enter choice number(0 or 1 or 2):\n";
    std::cin >> choice;
}
