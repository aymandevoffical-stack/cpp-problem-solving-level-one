#include <iostream>
using namespace std;

int main()
{

    int Age;

    cout << "Enter Your Age Here \n";
    cin >> Age;

    if (Age >= 18 && Age <= 45)
    {
        cout << "Valid Age \n";
    }
    else
    {
        cout << "Invalid Age \n";
    }

    return 0;
}