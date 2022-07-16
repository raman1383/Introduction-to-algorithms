#include <iostream>
#include <vector>

int main()
{
    int n;
    bool swapCheck = true;
    std::cout << "Enter the amount of number so sort : \n";
    std::cin >> n;
    std::vector<int> numbers;
    std::cout << "Enter " << n << " numbers :\n";
    int num;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        numbers.push_back(num);
    }

    for (int i = 0; (i < n) && (swapCheck); i++)
    {
        swapCheck = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swapCheck = true;
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    // Output
    std::cout << "\nSorted Array : ";
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != numbers.size() - 1)
        {
            std::cout << numbers[i] << ", ";
        }
        else
        {
            std::cout << numbers[i] << std::endl;
        }
    }
    return 0;
}
