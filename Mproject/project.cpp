#include <iostream>
using namespace std;

int main()
{

  string TheName;
  short int Age;
  string Country;
  string City;
  short MonthSelary;
  char Gender;
  bool Marrid;

  cout << "Please write your name";
  cin >> TheName;

  cout << "Please write your Age";
  cin >> Age;

  cout << "Please write your Country";
  cin >> Country;

  cout << "Please write your City";
  cin >> City;

  cout << "Please write your MonthSelary";
  cin >> MonthSelary;

  cout << "Please write your Gender";
  cin >> Gender;

  cout << "Please write your Marrid";
  cin >> Marrid;

  cout << TheName << endl;
  cout << Age << endl;
  cout << Country << endl;
  cout << City << endl;
  cout << MonthSelary << endl;
  cout << Gender << endl;
  cout << Marrid << endl;

  return 0;
}