#pragma once
#include <iostream>
#include <string>
#include "../Library/dot.h"
#include "../Library/glavniy.h"

class Paralelepiped : public Figure
{
public:
    Dot first;
    Dot second;
    Dot third;
    Paralelepiped(Dot first, Dot second, Dot third)
    {
        if (((third.y - first.y) / (second.y - first.y)) == ((third.z - first.z) / (second.z - first.z)))
        {
            throw std::logic_error("The points are on the same straight line. Creating a parallelepiped is not possible");
        }
        this->first = first;
        this->second = second;
        this->third = third;
    }
    Paralelepiped(Dot first, double first_side, double second_side)
    {
        if ((first.x < 0) || (first.y < 0) || (first.z < 0) || (first_side < 0) || (second_side < 0))
        {
            throw std::logic_error("Creating a parallelepiped is not possible");

        }
        this->first = first;
        this->second.x = first.x;
        this->second.y = first.y;
        this->second.z = first_side + this->first.z;
        this->third.x = first.x;
        this->third.z = first.z;
        this->third.y = second_side + this->first.y;
    }
    Paralelepiped()
    {
        this->first.x = 0;
        this->first.y = 0;
        this->first.z = 0;
        this->second.x = 0;
        this->second.y = 0;
        this->second.z = 0;
        this->third.x = 0;
        this->third.y = 0;
        this->third.z = 0;
    }
    double volume() override;
    double square() override;
    void toString() override;
    double getFirst();
    double getSecond();
    double getThird();
    ~Paralelepiped() = default;
    friend ostream& operator << (ostream& out, Paralelepiped const& figure);
};
