#include <iostream>
using namespace std;

struct IdCard
{
    string Name;
    int Age;
    string City;
    string Country;
};

void ReadInfo(IdCard &Info)
{

    cout << "*******************************\n";

    cout << "Enter Your Full_Name\n";
    cin >> Info.Name;

    cout << "Enter Your Age\n";
    cin >> Info.Age;

    cout << "Enter Your City\n";
    cin >> Info.City;

    cout << "Enter Your Country\n";
    cin >> Info.Country;

    cout << "******************************\n";
}

void PrintInfo(IdCard &Info)
{

    cout << "************************************" << endl;

    cout << "Your Name IS " << Info.Name << endl;
    cout << "Your Age IS " << Info.Age << endl;
    cout << "Your City IS " << Info.City << endl;
    cout << "Your Country IS " << Info.Country << endl;

    cout << "************************************" << endl;
}

void ReadStrFunction(IdCard Card[100], int &NumbersOfCards)
{
    cout << "How Many Cards\n";
    cin >> NumbersOfCards;

    for (int i = 0; i <= NumbersOfCards - 1; i++)
    {
        cout << "Card Number Of " << i + 1 << endl;
        ReadInfo(Card[i]);
    }
}

void PrintStrFunction(IdCard Card[100], int NumbersOfCards)
{
    for (int i = 0; i <= NumbersOfCards - 1; i++)
    {
        cout << "Cards Of" << i + 1 << endl;
        PrintInfo(Card[i]);
    }
}

int main()
{
    IdCard Card[100];
    int NumbersOfCards = 1;

    ReadStrFunction(Card, NumbersOfCards);
    PrintStrFunction(Card, NumbersOfCards);

    return 0;
}