#include "lib.hpp"

int main()
{
    cout << biggest<int>(12, 33) << endl;
    cout << biggest(765, 2) << endl;
    cout << biggest<int, float>(12, 33.98) << endl;
    cout << biggest('e', 2) << endl;
}