#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int *b = &a;

     cout << "The address of a is " << &a << endl;
     cout << "The address of a in pointer b is " << b << endl;

     cout << "The value at address a is " << *b << endl;
     cout << "The value at pointer b is " << *b << endl;

    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at pointer c is " << **c << endl;

    return 0;
}