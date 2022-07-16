#include "lin.hpp"
using std::cout;
constexpr int double_it(int arg) { return arg * arg; };

struct BeforeMain
{
    BeforeMain()
    {
        std::cout << "Constructing BeforeMain" << std::endl;
    }
};

main()
{
    int bad_result = ((4 + 1) * (4 + 1));
    cout << bad_result;
    lin::fucker();
    BeforeMain b;
    return 0;
}
