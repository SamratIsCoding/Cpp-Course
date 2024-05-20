#include <iostream>

using namespace std;

int main()
{
    int marks[10] = {12,
                     3,
                     56,
                     79,
                     9,
                     34,
                     56,
                     66,
                     13,
                     65};

    int *p = marks;
    cout << "The marks at *p is " << *p << endl;
    cout << "The marks at *(p+1) is " << *(p + 1) << endl;
    cout << "The marks at *(p+2) is " << *(p + 2) << endl;
    cout << "The marks at *(p+3) is " << *(p + 3) << endl;
    cout << "The marks at *(p+4) is " << *(p + 4) << endl;
    cout << "The marks at *(p+5) is " << *(p + 5) << endl;
    cout << "The marks at *(p+6) is " << *(p + 6) << endl;
    cout << "The marks at *(p+7) is " << *(p + 7) << endl;
    cout << "The marks at *(p+8) is " << *(p + 8) << endl;
    cout << "The marks at *(p+9) is " << *(p + 9) << endl;

    return 0;
}