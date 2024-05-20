#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int a = 4, b = 277, c = 20455;
    cout << "The value of a without setw is:"
         << a << endl;
    cout << "The value of b without setw is:"
         << b << endl;
    cout << "The value of c without setw is:"
         << c << endl;
    cout << endl;
    cout << "The value of a with setw is:" << setw(5)
         << a << endl;
    cout << "The value of b with setw is:" << setw(5)
         << b << endl;
    cout << "The value of c with setw is:" << setw(5)
         << c << endl;
    return 0;
}