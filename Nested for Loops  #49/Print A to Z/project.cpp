#include <iostream>
using namespace std;

int main()
{

    for (int i = 65; i <= 89; i++)
    {
        for (int j = 65; j <= 89; j++)
        {
            cout << char(i) << char(j);
        }
        cout << "------------------------";
    }

    return 0;
}