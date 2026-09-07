#include <iostream>
#include <cmath>
using namespace std;

void CircleAreaFunction()
{
    double a, b, c;
    float PI = 3.14159;

    cout << "Enter a \n";
    cin >> a;

    cout << "Enter b \n";
    cin >> b;

    cout << "Enter c \n";
    cin >> c;

    double P = (a + b + c) / 2;
    double T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    T = T * T;
    double Area = PI * T;

    cout << Area;
}

int main()
{
    CircleAreaFunction();
    return 0;
}