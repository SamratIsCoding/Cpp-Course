#include <iostream>
using namespace std;

// This is function prototype

int sum(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter the first number " << endl;
    cin >> num1;
    cout << "Enter the second number " << endl;
    cin >> num2;
    cout << endl;
    cout << "The sum of first and sceond number is " << sum(num1, num2) << endl;

    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}