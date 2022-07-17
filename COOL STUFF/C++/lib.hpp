#pragma once
#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

template <typename T>
T biggest(T first, T second)
{
    return (first < second) ? second : first;
}