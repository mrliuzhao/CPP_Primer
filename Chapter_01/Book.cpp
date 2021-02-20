#include "Book.h"

int main(int argc, char *argv[])
{
    Book b1;
    std::cout << "sizeof(b1) = " << sizeof(b1) << std::endl;
    std::cout << b1 << std::endl;

    Book b2 = Book("12345678", 5, 22.22);
    std::cout << "sizeof(b2) = " << sizeof(b2) << std::endl;
    std::cout << b2 << std::endl;

    std::cout << "sizeof(std::string) = " << sizeof(std::string) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl;

    extern const double PI;
    std::cout << "PI = " << PI << std::endl;

    return EXIT_SUCCESS;
}
