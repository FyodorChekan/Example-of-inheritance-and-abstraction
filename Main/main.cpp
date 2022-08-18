#include <iostream>
#include <string>
#include "../Library/paralelepiped.h"
#include "../Library/dot.h"
#include "../Library/glavniy.h"
using namespace std;

int main()
{
    cout << "Enter the size of collection: ";
    size_t size;
    cin >> size;
    Figure** collection = new Figure * [size];
    for (size_t i = 0; i < size; i++)
    {
        double first_x, first_y, first_z, second_z, third_y, second_x, second_y, third_x, third_z;
        cout << "Because our figure is right, we need to enter all coordinates." << endl;
        cout << "Enter coordinates of the first dot like: x, y, z: "; cin >> first_x; cout << ", "; cin >> first_y; cout << ", "; cin >> first_z; cout << "." << endl;
        cout << "Enter coordinates of the second dot like: x, y, z: "; cin >> second_x; cout << ", "; cin >> second_y; cout << ", "; cin >> second_z; cout << "." << endl;
        cout << "Enter coordinates of the third dot like: x, y, z: "; cin >> third_x; cout << ", "; cin >> third_y; cout << ", "; cin >> third_z; cout << "." << endl;
            Dot first(first_x, first_y, first_z);
            Dot second(second_x, second_y, second_z);
            Dot third(third_x, third_y, third_z);
            try {
                Paralelepiped* figura = new Paralelepiped(first, second, third);
                collection[i] = figura;
            }
            catch (logic_error& e)
            {
                cerr << e.what() << endl;
                return 1000;
            }
    }

    for (size_t i = 0; i < size; i++)
    {
        collection[i]->toString();
    }

    cout << "Demonstration operators <<, >>, <, >: " << endl;
    Dot example(0, 0, 0);
    cout << example << endl;
    cout << "Input new coordinates of example dot: " << endl;
    cin >> example;

    cout << "Example dot: " << example << endl;

    Dot example2(10, 10, 10);

    cout << "Example dot2: " << example2 << endl;

    cout << "Return 1 if dot1 bigger than dot2, return 0 if dot1 smaller than dot2: ";
    if (example > example2)
        cout << "1" << endl;
    else cout << "0" << endl;

    cout << "Return 1 if dot1 smaller than dot2, return 0 if dot1 bigger than dot2: ";
    if (example < example2)
        cout << "1" << endl;
    else cout << "0" << endl;
    cout << "Return 1 if dot1 and dot2 similar, return 1 if not return 0: ";
    if (example == example2)
        cout << "1" << endl;
    else cout << "0" << endl;
    
    cout << "Demonastration operator << for paralelepiped: " << endl;
    Dot first1(1, 2, 4); Dot second2(5, 8, 12); Dot third3(9, 18, 30);
    Paralelepiped exam(first1, second2, third3);
    cout << exam << endl;

    cout << "Demonstration of second constructor: " << endl;
    Dot first11(1, 2, 4); double first_side = 12; double second_side = 16;
    cout << "First dot: " << first11 << endl;
    cout << "First side: " << first_side << ". Second side: " << second_side << "." << endl;
    try {
        Paralelepiped exam22(first11, first_side, second_side);
        cout << exam22 << endl;
    }
    catch (logic_error& q)
    {
        cerr << q.what() << endl;
        return 2000;
    }
    return 0;
}