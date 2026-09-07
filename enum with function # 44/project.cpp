#include <iostream>
using namespace std;

enum enScreenUniversity
{
    Sanaa = 1,
    Taiz = 2,
    Aden = 3,
    Mareb = 4,
    Ib = 5
};

int main()
{
    cout << "********************************** \n";
    cout << "Chose any Univercity to study \n";
    cout << "Sana (1)\n";
    cout << "Taiz (2) \n";
    cout << "Aden (3) \n";
    cout << "Mareb (4) \n";
    cout << "Ib (5)\n";
    cout << "Choose  one\n";
    cout << "***********************************\n";
    int c;
    enScreenUniversity Univercity;

    cin >> c;
    Univercity = (enScreenUniversity)c;


    if (Univercity == enScreenUniversity::Sanaa)
    {
        cout << "Your the best";
    }
    else
    {
        cout << "Congar";
    }

    return 0;
}