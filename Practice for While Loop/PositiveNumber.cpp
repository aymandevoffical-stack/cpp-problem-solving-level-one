#include <iostream>
using namespace std;

int main()
{

    int Number;

    cout << "Please Enter A positive Number\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Number,Please Enter A Positive Number\n";
        cin >> Number;
    }
    cout << "The Number is " << Number << endl;

    return 0;
}