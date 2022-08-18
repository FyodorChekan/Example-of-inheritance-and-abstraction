#include "../Library/paralelepiped.h"
#include "../Library/dot.h"

double Paralelepiped::volume()
{
    return ((this->second.z) - (this->first.z)) * ((this->second.z) - (this->first.z)) * ((this->third.y) - (this->first.y));
}
double Paralelepiped::square()
{
    return ((2 * ((this->second.z) - (this->first.z)) * ((this->second.z) - (this->first.z))) + (((this->third.y) - (this->first.y)) * ((this->second.z) - (this->first.z))));
}
void Paralelepiped::toString()
{
    cout << "Coordinates of paralelepiped. " << "Every dot like : x, y, z" << "First dot: " << to_string(this->first.x) << ", " << to_string(this->first.y) << ", " << this->first.z << ". Second dot: " << this->second.x << ", " << this->second.y << ", " << this->second.z << ". Third dot: " << this->third.x << ", " << this->third.y << ", " << this->third.z << ". " << endl;
    cout << "Volume of paralelepiped: " << to_string(volume()) << endl;
    cout << "Square of paralelepiped: " << to_string(square()) << endl;
}
ostream& operator << (ostream& out, Paralelepiped const& figure)
{
    out << "Coordinates of paralelepiped. Every dot out like: x,y,z. " << "First dot: " << figure.first.x << ", " << figure.first.y << ", " << figure.first.z << ". Second dot: " << figure.second.x << ", " << figure.second.y << ", " << figure.second.z << ". Third dot: " << figure.third.x << ", " << figure.third.y << ", " << figure.third.z << ". " << endl;
    return out;
}
double Paralelepiped::getFirst()
{
    return this->first.x;
}
double Paralelepiped::getSecond()
{
    return this->second.x;
}
double Paralelepiped::getThird()
{
    return this->third.x;
}