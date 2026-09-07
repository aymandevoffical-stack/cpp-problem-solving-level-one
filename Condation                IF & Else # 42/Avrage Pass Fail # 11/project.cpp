#include <iostream>
using namespace std;

int main()
{
    int Mark1, Mark2, Mark3;

    cout << "Enter Your First Mark \n";
    cin >> Mark1;

    cout << "Enter Your Second Mark \n";
    cin >> Mark2;

    cout << "Enter Your Third Mark \n";
    cin >> Mark3;

    int Ave = (Mark1 + Mark2 + Mark3) / 3;

    if (Ave >= 50)
    {
        cout << "PASS \n";
    }
    else
    {
        cout << "Fail \n";
    }

    return 0;
}