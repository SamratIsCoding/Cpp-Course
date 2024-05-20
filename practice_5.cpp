#include <iostream>
#include <cmath>
using namespace std;
double CompoundIntrest(double P, double r, double t)
{
    return P * pow(1 + r / 100, t);
}

int main()
{
    double principal, rate, time, numTimes;
    cout << "Give the initial principal balance" << endl;
    cin >> principal;
    cout << "Give intrest rate" << endl;
    cin >> rate;
    cout << "Give number of time periods elapsed" << endl;
    cin >> time;

    double amount = CompoundIntrest(principal, rate, time);
    double intrest = amount - principal;
    cout << " Compound Intrest " << intrest << endl;
}