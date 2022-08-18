#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
    virtual void toString() = 0;
    virtual double volume() = 0;
    virtual double square() = 0;
    virtual ~Figure() = default;
};