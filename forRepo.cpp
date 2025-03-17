#include "forRepo.h"





int32_t main()
{
    char arr_char[MAX_SIZE];
    int32_t arr_int[MAX_SIZE];
    double arr_doub[MAX_SIZE];

    int32_t size{};
    EnterSize(size);

    int32_t choice{};
    std::cout << "What about the type of you array? \n Enter 0 if you want to choose the [char] Type \n  Enter 1 if yuo want to choose the [int] type \n  Enter 2 if yuo want to choose the [double] type \n";
    EnterChoice(choice);

    switch (choice)
    {
    case 0:
        std::cout << "[char Type] Array:\n";
        EnterTheArray(arr_char, size);
        std::cout << "Count of elements between zeros: " << CountElements(arr_char, size) << '\n';
        break;
    case 1:
        std::cout << "[int32_t Type] Array:\n";
        EnterTheArray(arr_int, size);
        std::cout << "Count of elements between zeros: " << CountElements(arr_int, size) << '\n';
        break;
    case 2: 
        std::cout << "[double Type] Array:\n";
        EnterTheArray(arr_doub, size);
        std::cout << "Count of elements between zeros: " << CountElements(arr_doub, size) << '\n';
        break;

    }
        

    return 0;
}




