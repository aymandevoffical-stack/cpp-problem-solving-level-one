#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int Num = 0;

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Enter The Number\n";
        cin >> Num;

        if (Num >= 50)
        {
            cout << "The Number is greeater than 50 and won't be calculate\n";
            continue;
        }
        sum += Num;

        cout << sum;
    }

    return 0;
}