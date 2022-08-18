#include "../Library/dot.h"

ostream& operator << (ostream& out, Dot const& dot)
{
    out << "x,y,z: " << dot.x << ", " << dot.y << ", " << dot.z;
    return out;
}
istream& operator >> (istream& in, Dot& dot)
{
    in >> dot.x >> dot.y >> dot.z;
    return in;
}
bool operator > (Dot& dot, Dot& dot2)
{
    bool q = false;
    if (dot.x > dot2.x)
        q = true;
    return q;
}
bool operator < (Dot& dot, Dot& dot2)
{
    bool q = false;
    if (dot.x < dot2.x)
        q = true;
    return q;
} bool operator == (const Dot& dot, const Dot& dot2)
{
    bool q = false;
    if (dot.x == dot2.x)
        q = true;
    return q;
}