#pragma once
#include <iostream>
#include <vector>
#include <type_traits>
using std::cout, std::endl, std::vector, std::is_pointer, std::is_void;

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

template <class T>
class V
{
public:
    V(int n = 0) : m_nEle(n), m_buf(0) { creatBuf(); }
    ~V() { deleteBuf(); }

    V &operator=(const V &rhs) //! review
    {                          /* ... */
    }
    T getMax()
    { /* ... */
    }

protected:
    void creatBuf()
    { /* ... */
    }
    void deleteBuf()
    { /* ... */
    }

public:
    int m_nEle;
    T *m_buf;
};

struct X
{
};

void traits()
{
    cout << std::boolalpha;                            // set the boolalpha format flag for str stream.
    cout << is_void<void>::value << endl;              // true
    cout << is_void<int>::value << endl;               // false
    cout << is_pointer<X *>::value << endl;            // true
    cout << is_pointer<X>::value << endl;              // false
    cout << is_pointer<X &>::value << endl;            // false
    cout << is_pointer<int *>::value << endl;          // true
    cout << is_pointer<int **>::value << endl;         // true
    cout << is_pointer<int[10]>::value << endl;        // false
    cout << is_pointer<std::nullptr_t>::value << endl; // false
}
