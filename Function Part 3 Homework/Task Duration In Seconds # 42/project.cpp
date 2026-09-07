#include <iostream>
#include <cmath>
using namespace std;

void durationSecondFunction()
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSecond;

    cout << "Write a NumberOfDay" << endl;
    cin >> NumberOfDays;

    cout << "Write a NumberOfHourse" << endl;
    cin >> NumberOfHours;

    cout << "Write a NumberOfMinutes" << endl;
    cin >> NumberOfMinutes;

    cout << "Write a NumberOfSecond" << endl;
    cin >> NumberOfSecond;

    int totalOfNumbers = (NumberOfDays * 24 * 60 * 60) +
                         (NumberOfHours * 60 * 60) +
                         (NumberOfMinutes * 60) +
                         (NumberOfSecond);

    cout << totalOfNumbers << "Second";
}

int main()
{
    durationSecondFunction();
    return 0;
}