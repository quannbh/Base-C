#include <iostream>
#include <string>
#include "CYTHON_BASIC.h"
#include <utility>

int main()
{
    print("Hello, world!");
    print(1 + 1);
    int a = 7, b = 8;
    print(a + b);
    a = 1;
    std::string s = input("Input your string: ");
    print(s);
}