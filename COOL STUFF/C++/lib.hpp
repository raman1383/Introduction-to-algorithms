#pragma once
#include <iostream>
#include <vector>
#include <concepts>
#include <iterator>

using std::string;

struct Email
{
    string subject;
    string body;
    string from;
};

template <typename T>
concept addable = requires(T obj)
{
    obj + obj;
};

template <typename T>
concept incrementable = std::regular<T> && std::weakly_incrementable<T> && requires(T t)
{
    {
        t++
        } -> std::same_as<T>;
};

template <typename T>
requires std::integral<T> || std::floating_point<T>
constexpr double Average(std::vector<T> const &vec)
{
    const double sum = std::accumulate(vec.begin(), vec.end(), 0.0);
    return sum / vec.size();
}