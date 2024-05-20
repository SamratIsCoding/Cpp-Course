#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 3; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << "*"<<endl;
        }
    }
    return 0;
}