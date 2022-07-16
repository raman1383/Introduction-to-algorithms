#include <stdio.h>
#include "lib.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("%d\n", arr[i]);

    Guitarist x;
    Musician y;
    y.play();
    x.play();
}