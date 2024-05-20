#include <iostream>

using namespace std;
// Making a Multiplication Table
int main()
{
    int i;
    cout << "Tell me the First Number:" << endl;
    cin >> i;
    /*cout << "Tell me the Second Number:" << endl;
    cin >> j;
    cout << "The multiply of the above two numbers are:" << i * j << endl;*/

    for (int j = 1; j <= 10; j++)
    {
        cout << "The Multiplication Table of The Given Two Numbers are:" << i * j << endl;
    }
}