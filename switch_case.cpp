#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    case 20:
        cout << "You are 20" << endl;
        break;

    case 22:
        cout << "You are 22" << endl;
        break;

    default:
        cout << "You are not on the age list" << endl;
    }

    cout << "You are done with the code" << endl;

    return 0;
}