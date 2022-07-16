#pragma once
#include <iostream>
constexpr int MAX = 100;

namespace lin
{
    auto fucker() -> void
    {
        for (int i = 0; i < MAX; i++)
        {
            std::cout << i << " >>  Lets fuck >>>" << std::endl;
        }
        // fucker(); // recursion, resulting in infinite loop
    }

} // namespace lin
