#include <iostream>
#include <thread>
#include <vector>

using std::cout, std::vector, std::endl;

void say()
{
    for (int i = 0; i < 11; i++)
    {
        cout << i << " from threadObj -> Hello world ! \n";
    }
}

template <typename T>
T myMax(T first, T second)
{
    return (first < second) ? second : first;
}

int main(int argc, char const *argv[])
{

    vector<int> v1 = {3, 1, 7, 9};
    vector<int> v2 = {10, 2, 7, 16, 9};

    //  access v1 and v2 by reference
    auto pushInto = [&](int m)
    {
        v1.push_back(m);
        v2.push_back(m);
        for (int i = 0; i < 11; i++)
        {
            cout << i << " from threadObj2 -> Hello world ! \n";
        }
    };

    // it pushes 20 in both v1 and v2
    pushInto(20);

    cout << "Hello world ! \n";

    std::thread threadObj(say);
    std::thread threadObj2(pushInto, 23);
    threadObj.join();
    threadObj2.join();

    cout << myMax<int>(3, 7) << endl;
    cout << myMax<double>(3.0, 7.0)
         << endl;
    cout << myMax<char>('g', 'e')
         << endl;

    cout << "Hello world ! \n";
}
