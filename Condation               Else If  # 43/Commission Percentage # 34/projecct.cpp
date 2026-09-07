#include <iostream>
using namespace std;

int main()
{

    int Percentage;

    cout << "Enter Your Percentage \n";
    cin >> Percentage;

    if (Percentage >= 1000000)
    {
        cout << "Percentage is 1%";
    }
    else if (Percentage >= 500000 && Percentage <= 1000000)
    {
        cout << "Percentage is 2%";
    }
    else if (Percentage >= 100000 && Percentage <= 500000)
    {
        cout << "Percentage is 3%";
    }
    else if (Percentage >= 50000 && Percentage <= 100000)
    {
        cout << "Percentage is 5%";
    }
    else
    {
        cout << "Percentage is 0%";
    }

    return 0;
}