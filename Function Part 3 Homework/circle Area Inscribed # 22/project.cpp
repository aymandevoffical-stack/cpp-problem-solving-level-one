#include <iostream>
using namespace std;

void CircleAreaFunction()
{
    double a, b;
    float PI = 3.14159;

    cout << "Enter a \n";
    cin >> a;

    cout << "Enter b \n";
    cin >> b;

    double Area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));

    cout << Area;
    
}

int main()
{
    CircleAreaFunction();
    return 0;
}