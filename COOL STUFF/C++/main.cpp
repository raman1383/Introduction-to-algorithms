#include <iostream>
using std::cout;
constexpr int double_it(int arg) { return arg * arg; };

int main()
{
    int bad_result = ((4 + 1) * (4 + 1));
    cout << bad_result;
    return 0;
}
