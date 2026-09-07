#include <iostream>
using namespace std;

int x = 100;

void NumberFunction()
{
    int x = 700;
    cout << x;
}

int main()
{

    NumberFunction();
    int x = 300;

    ::x= 100000;
    cout << "number of " <<:: x;

    return 0;
}