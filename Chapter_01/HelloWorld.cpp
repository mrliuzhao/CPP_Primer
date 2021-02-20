#include <iostream>
// #include <cstdio>

int a = 99;

int main()
{
    std::cout << "Hello World!" << std::endl;

    int a = 0;
    std::cout << "a = " << a << std::endl;
    std::cout << "::a = " << ::a << std::endl;

    int *pt = NULL;
    pt = &::a;
    std::cout << "pt = " << pt << "; *pt = " << *pt << std::endl;

    std::cout << "Press Any key to exit..." << std::endl;
    std::cin.get();

    return EXIT_SUCCESS;
}
