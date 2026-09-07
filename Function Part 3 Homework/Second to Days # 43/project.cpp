#include <iostream>
#include <cmath>
using namespace std;

void secodToDaydFunction()
{
  
   int TotalSecond;

   cout << "Write The totalSecond" << endl;
   cin  >> TotalSecond;
   
   int secondPerDay = 24 * 60 * 60;
   int secondPerHourse = 60 * 60;
   int secondPerMinutes = 60;

   int NumberOfDays , NumberOfHourse , NumberOfMinutes , NumberOfSecond , Remainder;
   
   NumberOfDays = floor(TotalSecond / secondPerDay);
   Remainder =  TotalSecond % secondPerDay;
   
   NumberOfHourse = floor(Remainder / secondPerHourse);
   Remainder =  Remainder % secondPerHourse;
   
   NumberOfMinutes = floor(Remainder / secondPerMinutes);
   Remainder =   Remainder % secondPerMinutes;

   NumberOfSecond = Remainder ;

   cout << NumberOfDays << ":" << NumberOfHourse << ":" << NumberOfMinutes << ":" << NumberOfSecond;
}

int main()
{ 

    secodToDaydFunction();
    return 0;
}