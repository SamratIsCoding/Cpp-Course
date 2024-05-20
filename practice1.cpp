#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << endl;
    for (int b = 0; b <= 25; b++)
    {
        cout << "The Multiplication table is: " << a * b << endl;
    }
    return 0;
}