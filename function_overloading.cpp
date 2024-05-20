#include <iostream>
using namespace std;

// Volume of Cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Volume of Cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}

// Volume of Cube
int volume(int a)
{
    return (a * a * a);
}

int main()
{

    cout << "The Volume of cylinder of Radius 12 and Height 7 is " << volume(12, 7) << endl;
    cout << "The volume of cuboid of lenght 7, breadth 3 and height 9 is " << volume(7, 3, 9) << endl;
    cout << "The volume of cube of side 9 is " << volume(9) << endl;
}