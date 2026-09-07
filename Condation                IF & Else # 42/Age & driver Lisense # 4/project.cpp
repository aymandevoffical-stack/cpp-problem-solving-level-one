#include <iostream>
using namespace std;

int main()
{

    int Age, DriverLisense;

    cout << "Enter Your Age \n";
    cin >> Age;

    cout << "Please Enter Your DriverLisense When You have \n";
    cin >> DriverLisense;

    if (Age >= 21 && DriverLisense == true)
    {
        cout << "Hired \n";
    }
    else
    {
        cout << "Rejected \n";
    }

    cout << "Check Your \n";

    return 0;
}