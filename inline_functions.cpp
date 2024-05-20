#include <iostream>
using namespace std;

inline float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int money = 300000;

    cout << "The money " << money << " after intrest will be " << moneyReceived(money) << endl;
    cout << "For VIP the money " << money << " after intrest will be " << moneyReceived(money, 1.1);
}