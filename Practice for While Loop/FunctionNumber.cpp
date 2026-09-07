#include <iostream>
using namespace std;

int intFunctionNumber(int From, int To)
{

    int Number;

    cout << "Enter The Number From " << "(" << From << " , " << To << ")" << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong Number : Enter The Number From  " << "(" << From << " , " << To << ")" << endl;
        cin >> Number;
    }

    return Number;
}
int main()
{

    cout << "\n The Number is" << intFunctionNumber(20, 50) << endl;
    return 0;
}