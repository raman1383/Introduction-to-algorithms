#pragma once
#include <iostream>

class Musician
{
private:
public:
    virtual void play() { std::cout << "play music ! "; }
};

class Guitarist : public Musician
{
private:
public:
    void play() override { std::cout << "paling music with guitar" << std::endl; }
};
