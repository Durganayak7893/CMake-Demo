#include <iostream>
#include "math.h"

int main()
{
    if (add(10, 5) != 15)
    {
        std::cerr << "Addition test failed\n";
        return 1;
    }

    if (subtract(10, 5) != 5)
    {
        std::cerr << "Subtraction test failed\n";
        return 1;
    }

    std::cout << "All tests passed\n";
    return 0;
}
