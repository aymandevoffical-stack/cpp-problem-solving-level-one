#include <iostream>
#include <string>
using namespace std;

void swapNumbers(int Num1, int Num2)
{

    int Tem;
    Tem = Num1;
    Num1 = Num2;
    Num2 = Tem;

    cout << Num1 << endl;
    cout << Num2 << endl;
}

int main()
{
    int Num1 = 10;
    int Num2 = 20;

    swapNumbers(Num1, Num2);

    return 0;
}