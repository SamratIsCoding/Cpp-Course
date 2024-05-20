#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter Your age" << endl;
    cin >> age;

    if (age < 18 && age > 1)
    {
        cout << "You are in school" << endl;
    }
    else if (age == 0)
    {
        cout << "You are not yet born" << endl;
    }
    else if (age > 18)
    {
        cout << "You must be going to college" << endl;
    }

    return 0;
}