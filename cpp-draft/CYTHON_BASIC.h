// printmodule.h
#ifndef CYTHON_MODULE_H
#define CYTHON_MODULE_H
#include <iostream>
#include <utility>
using namespace std;

template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

template <typename T>
std::string input(T value)
{
    std::string val;
    std::cout << value;
    std::cin >> val;
    return val;
}

#endif
