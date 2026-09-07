

#include <iostream>
using namespace std;

struct contactInformation
{
    string phoneNumber;
    string Email;
    string Account;
};

struct stAdress
{
    string street;
    contactInformation contact;
};

struct stinformation
{
    string Name;
    short int Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearlySalary;
    bool Gender;
    bool Married;
    stAdress Adress;
};

int main()
{
    stinformation Person;

    Person.Name = "Ayman";
    Person.Age = 19;
    Person.City = "Sana'a";
    Person.Country = "Yemen";
    Person.MonthlySalary = 5000;
    Person.YearlySalary = 6000;
    Person.Gender = 1;
    Person.Married = 1;
    Person.Adress.street = "Shomila";
    Person.Adress.contact.phoneNumber = "772017579";

    cout << Person.Name << endl;
    cout << Person.Age << endl;
    cout << Person.City << endl;
    cout << Person.Country << endl;
    cout << Person.MonthlySalary << endl;
    cout << Person.YearlySalary << endl;
    cout << Person.Gender << endl;
    cout << Person.Married << endl;
    cout << Person.Adress.street << endl;
    cout << Person.Adress.contact.phoneNumber << endl;
    cout << Person.Adress.contact.Email << endl;
    cout << Person.Adress.contact.Account << endl;
    return 0;
}