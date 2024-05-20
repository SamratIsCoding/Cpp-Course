#include <iostream>

using namespace std;

struct employee
{
    int eId;
    char nameInitials;
    float salary;
};
int main()
{
    struct employee Nitin;
    Nitin.eId = 1;
    Nitin.nameInitials = 'N';
    Nitin.salary = 45000;

    cout << "The Employee Id is " << Nitin.eId << endl;
    cout << "The name initials are " << Nitin.nameInitials << endl;
    cout << "The Salary of Nitin is " << Nitin.salary << endl;

    return 0;
}