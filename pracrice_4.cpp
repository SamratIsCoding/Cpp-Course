#include <iostream>
using namespace std;
void swap(int a, int b, int temp)
{
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 46;
    int b = 227;

    cout << "The value before swap of a is " << a << " and b is " << b << endl;
    swap(a, b);
    cout << "The value after swap of a is " << a << " and b is " << b << endl;
}