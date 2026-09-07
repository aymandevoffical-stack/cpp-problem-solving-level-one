#include <iostream>
using namespace std;

int ReadintNumberInRangeUsingWhileloop(int From, int To)
{
    int Number;
    cout << "Enter The Numer"<< From  << " " << To << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Enter The Numer " << From  << " " << To << endl;
        cin >> Number;

    }

    return Number;
}
int ReadintNumberInRangeUsingDoloop(int From , int To) {
    int Number;

    do
    {
        cout << "Enter the N umber " << From << " " << To << endl;
        cin  >> Number;
    } while (Number < From || Number > To);
    return Number;
}
int main()
{

    //cout << ReadintNumberInRangeUsingWhileloop(1 , 10) << endl;
    cout << ReadintNumberInRangeUsingDoloop(1 , 10) << endl;
    return 0;
}