#include <iostream>
#include "lin.hpp"
using std::cout;
constexpr int double_it(int arg) { return arg * arg; };

int main()
{
    int bad_result = ((4 + 1) * (4 + 1));
    cout << bad_result;
    lin::fucker();
    return 0;
}
