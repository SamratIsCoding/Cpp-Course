#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// This is another method using reference variables
/*int &swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}*/

int main()
{
    int a = 4, b = 5;

    // Call by reference using pointers
    cout << "The value of a is " << a << " and b is " << b << endl;
    swap(&a, &b);
    cout << "The value of a is " << a << " and b is " << b << endl;

    cout << endl;

    // Call by reference using C++ reference variables
    cout << "The value of a is " << a << " and b is " << b << endl;
    swapReferenceVar(a, b);
    cout << "The value of a is " << a << " and b is " << b << endl;

    // Another method of Call by reference using C++ reference variables
    /*cout << "The value of a is " << a << " and b is " << b << endl;
    swapReferenceVar(a, b) = 766;
    */ cout << "The value of a is " << a << " and b is " << b << endl;

    return 0;
}