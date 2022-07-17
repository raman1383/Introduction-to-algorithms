#pragma once
#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

template <typename T>
T biggest(T first, T second)
{
    cout << "calling first impl\n";
    return (first < second) ? second : first;
}
template <typename T, typename U>
T biggest(T first, U second)
{
    cout << "calling second impl\n";
    return (first < second) ? second : first;
}

// template <class T>
// class