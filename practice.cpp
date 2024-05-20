#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Please input the first number" << endl;
    cin >> a;
    cout << "Please input the second number" << endl;
    cin >> b;
    cout << endl;
    cout << "The addition of the first and second number is " << a + b << endl;
    cout << "The division of the first and second number is " << a / b << endl;
    cout << "The subtraction of the first and second number is " << a - b << endl;
    cout << "The multiplication of the first and second number is " << a * b << endl;
    cout << endl;
    cout << "Hence the addition,subtraction,multiplication and divison of the first and second number came out to be " << a + b << endl
         << a - b << endl
         << a * b << endl
         << a / b << endl;
    return 0;
}