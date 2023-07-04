#include <iostream>
#include <my_lib/lib.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << lib::getMessage() << std::endl;
}