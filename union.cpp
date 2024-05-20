#include <iostream>

using namespace std;

// In union, if you want use only one of the following datat written in the union code,
// You use union
union money
{
    int rice;
    char car;
    float rupee;
};

int main()
{
    union money m1;
    // m1.rice = 32;
    // m1.car = 'P';
    m1.rupee = 82;

    // cout << "The Market price of rice is " << m1.rice << endl;
    //  cout << "The fav char of world is " << m1.car << endl;
    cout << "The Value of rupee against dollar is " << m1.rupee << endl;

    return 0;
}
