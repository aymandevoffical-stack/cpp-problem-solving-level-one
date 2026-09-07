#include <iostream>
using namespace std;

int main()

{
    short int a,b,c;

    cout <<"Please write your first Number?"  << endl;
    cin >> a;

    cout << "Please write your second Number?" << endl;
    cin >> b;

    cout << "Please write your third Number?" << endl;
    cin >> c;

    int sum = a + b + c;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout <<"------------------------------------" << endl;
    cout << sum << endl;


    return 0;
}