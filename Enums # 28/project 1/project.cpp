#include <iostream>
using namespace std;

enum Gender
{
    Female = 200,
    Male
};

enum enMarried {
    Single,
    Married
};

enum MyFavoriteColor {
    Green,
    Blue,
    Yellow,
    Purpule,
};

struct stinformation
{
    string Name;
    short int Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearlySalary;
   ;
};

int main()
{
    stinformation Person;
    Gender Sex;
    enMarried cas;
    MyFavoriteColor Color;

    Person.Name = "Ayman";
    Person.Age = 19;
    Person.City = "Sana'a";
    Person.Country = "Yemen";
    Person.MonthlySalary = 5000;
    Person.YearlySalary = 6000;
    Sex =  Gender :: Male;
    cas = enMarried :: Single;
    Color = MyFavoriteColor :: Blue;
    

    cout << Person.Name << endl;
    cout << Person.Age << endl;
    cout << Person.City << endl;
    cout << Person.Country << endl;
    cout << Person.MonthlySalary << endl;
    cout << Person.YearlySalary << endl;
    cout << Sex << endl;
    cout << cas << endl;
    cout << Color << endl;

    return 0;
}