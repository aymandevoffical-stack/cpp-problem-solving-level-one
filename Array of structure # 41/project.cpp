#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    int Phone;
};

void ReadInfo(strInfo &Info)
{
    cout << "Enter Your FirstName \n";
    cin >> Info.FirstName;

    cout << "Enter Your LastName \n";
    cin >> Info.LastName;

    cout << "Enter Your Age\n";
    cin >> Info.Age;

    cout << "Enter Your PhoneNumber \n";
    cin >> Info.Phone;
}

void PrintInfo(strInfo &Info)
{
    cout << "*********************************************" << endl;

    cout << "FirsName :" << Info.FirstName << endl;
    cout << "LastName :" << Info.LastName << endl;
    cout << "Age :" << Info.Age << endl;
    cout << "PhoneNumber :" << Info.Phone << endl;

    cout << "**********************************************" << endl;
}

void ReadStrFunction(strInfo Persons[100], int &NumberOfPersons)
{
    cout << "How Many Person\n";
    cin >> NumberOfPersons;

    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Person Number :" << i + 1 << endl;
        ReadInfo(Persons[i]);
    }
}

void PrintStrFunction(strInfo Persons[100], int NumberOfPersons)
{
    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Persons Of:" << i + 1 << endl;
        PrintInfo(Persons[i]);
    }
}

int main()
{
    strInfo Persons[100];
    int NumberOfPersons = 1;

    ReadStrFunction(Persons, NumberOfPersons);
    PrintStrFunction(Persons, NumberOfPersons);
    return 0;
}