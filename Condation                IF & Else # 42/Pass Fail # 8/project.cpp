#include <iostream>
using namespace std;

int main()
{
    int Mark;

    cout << "Enter Your Mark \n";
    cin  >> Mark;

    if ( Mark >= 50)
    {
        cout <<"PASS \n";
    }else{
        cout << "Fail \n";
    }
    
    return 0;
}