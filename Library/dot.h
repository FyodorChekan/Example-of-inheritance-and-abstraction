#pragma once
#include <iostream>
using namespace std;

class Dot
{
public:
    double x;
    double y;
    double z;
    Dot()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
    Dot(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    friend ostream& operator << (ostream& out, Dot const& dot);
    friend istream& operator >> (istream& in, Dot& dot);
    friend bool operator < (Dot& dot, Dot& dot2);
    friend bool operator > (Dot& dot, Dot& dot2);
    friend bool operator == (const Dot& dot, const Dot& dot2);
};