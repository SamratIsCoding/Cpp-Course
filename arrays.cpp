#include <iostream>

using namespace std;

int main()
{
    int marks[10] = {12,
                     3,
                     56,
                     79,
                     9,
                     34,
                     56,
                     66,
                     13,
                     65};
    cout << "DISPLAYED THROUGH NORMAL COUT" << endl;
    cout << endl;
    cout << "The value at marks 0 is " << marks[0] << endl;
    cout << "The value at marks 1 is " << marks[1] << endl;
    cout << "The value at marks 2 is " << marks[2] << endl;
    cout << "The value at marks 3 is " << marks[3] << endl;
    cout << "The value at marks 4 is " << marks[4] << endl;
    cout << "The value at marks 5 is " << marks[5] << endl;
    cout << "The value at marks 6 is " << marks[6] << endl;
    cout << "The value at marks 7 is " << marks[7] << endl;
    cout << "The value at marks 8 is " << marks[8] << endl;
    cout << "The value at marks 9 is " << marks[9] << endl;
    cout << endl;
    cout << "DISPLAYED THROUGH FOR LOOP" << endl;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }
    return 0;
}