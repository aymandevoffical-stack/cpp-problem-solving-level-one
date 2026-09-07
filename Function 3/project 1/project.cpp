#include <iostream>
#include <string>
using namespace std;

void mySomeProseger()
{
    int Num1, Num2;

    cout << "Please Enter Number1 ?" << endl;
    cin >> Num1;

    cout << "Please Enter Number 2 ?" << endl;
    cin >> Num2;

    cout << "*********************************" << endl;

    int result = Num1 + Num2;

    cout << result << endl;
}
int mySomeFunction()
{
    int Num1, Num2;

    cout << "Please Enter Number1 ?" << endl;
    cin >> Num1;

    cout << "Please Enter Number 2 ?" << endl;
    cin >> Num2;

    cout << "*********************************" << endl;

    return Num1 + Num2;

   
}


int main()
{
    mySomeProseger();
    cout << mySomeFunction();
    return 0;
}