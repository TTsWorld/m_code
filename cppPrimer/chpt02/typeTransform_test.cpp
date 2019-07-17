#include <iostream>

int main()
{
    int i = 0;
    unsigned int a = 1;
    auto c = i -a;
    std::cout << c  << std::endl;
    std::cout << typeid(c).name()  << std::endl;
    return 0;
}

