#include <iostream>
#include <cmath>
using namespace std;

float rectangularFunction( int a , int d)
{
   

    int Area = a * sqrt(d *d - a * a);
    return Area;
}

int main()
{
    int a = 5;
    int d = 40;
    cout << rectangularFunction(a , d) << endl;
    return 0;
}