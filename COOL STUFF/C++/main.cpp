#include <iostream>
#include <algorithm>
#include <concepts>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
using std::cout, std::string, std::vector, std::list, std::stack, std::queue, std::set, std::map;

int main()
{
    string name = "Mia";
    int age = 21;
    bool isActive = false;
    cout << "Hello, world !\n";

    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator it{vec.begin()};
    list<int> list = {0, 1, 2, 3, 4, 5, 6};
    auto listBegin = std::begin(list);
    auto listEnd = std::end(list);
    stack<int> stack;
    stack.push(12);
    stack.pop();
    queue<int> queue;
    queue.push(2);
    queue.pop();
    set<int> balancedBinaryTree = {1, 3, 4, 2};
    map<int, string> hashMap;
    hashMap[3] = "three";
    hashMap[4] = "four";
    std::unordered_map<string, string> hashTable;
    hashTable["key1"] = "value 1";
    hashTable["key2"] = "value 2";
}