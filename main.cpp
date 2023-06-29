#include <iostream>
#include <lib_a/lib_a.h>
#include <lib_b/lib_b.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << lib_a::getMessage() << std::endl;
    std::cout << lib_b::getMessage() << std::endl;
}