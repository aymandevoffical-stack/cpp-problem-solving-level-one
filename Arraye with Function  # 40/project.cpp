#include <iostream>
using namespace std;

void ReadGradeFunction(float Grades[3])
{

    cout << "Enter Your First Grade \n";
    cin >> Grades[0];

    cout << "Enter Your Second Grade \n";
    cin >> Grades[1];

    cout << "Enter Your Third Grade \n";
    cin >> Grades[2];
}

float AddGradeFunction(float Grades[3])
{

    return (Grades[0] + Grades[1] + Grades[2]) / 3;
}

int main()
{
    float Grades[3];

    ReadGradeFunction(Grades);
    cout << AddGradeFunction(Grades);
    return 0;
}