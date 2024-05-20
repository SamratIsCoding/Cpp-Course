#include <iostream>
using namespace std;

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 123467, b = 56891;
    cout << "The value at a is " << a << " The value at b is " << b << endl;
    swapPointer(&a, &b);
    cout << "The value at a after swap is " << a << " and the value at b after swap is " << b << endl;

    return 0;
}