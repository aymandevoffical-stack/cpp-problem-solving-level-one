#include <iostream>
#include <cmath>
using namespace std;

void powerFunction()
{
    float Num;
    
    cout << "Enter The Number";
    cin >> Num;
    
    float a, b, c;

     a = pow(Num, 2);
     b = pow(Num, 3);
     c = pow(Num, 4);

    cout << a << endl
         << b << endl
         << c;
}

int main()
{
    powerFunction();
    return 0;
}