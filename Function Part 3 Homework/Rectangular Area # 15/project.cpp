#include <iostream>
using namespace std;

int rectangularFunction( int a , int b)
{
   

    int Area = a * b;
    return Area;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << rectangularFunction(a , b) << endl;
    return 0;
}