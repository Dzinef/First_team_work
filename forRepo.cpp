#include <iostream>
#include <cstdint>
#include "forRepo.h"

int main()
{
    char arr_char[MAX_SIZE];
    int32_t arr_int[MAX_SIZE];
    double arr_doub[MAX_SIZE];
    int32_t size{};
    EnterSize(size);

    if (!CheckSize(size))
    {
        std::cout << "Incorrect size" << std::endl; 
        return 1; 
    }
    else
    {
        int32_t choice{};
        std::cout << "What about the type of your array? \n Enter 0 if you want to choose the [char] Type \n Enter 1 if you want to choose the [int] type \n Enter 2 if you want to choose the [double] type \n";
        EnterChoice(choice);

        switch (choice)
        {
        case 0:
            std::cout << "[char Type] Array:\n";
            EnterTheArray(arr_char, size);
            std::cout << "Your array: ";
            PrintArray(arr_char, size);
            break;
        case 1:
            std::cout << "[int32_t Type] Array:\n";
            EnterTheArray(arr_int, size);
            std::cout << "Your array: ";
            PrintArray(arr_int, size);
            break;
        case 2:
            std::cout << "[double Type] Array:\n";
            EnterTheArray(arr_doub, size);
            std::cout << "Your array: ";
            PrintArray(arr_doub, size);
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            return 1;
        }

        return 0;
    }
}




