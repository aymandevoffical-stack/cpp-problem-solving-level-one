#include <iostream>
#include <cmath>
using namespace std;

float circlaAreaFunction(float r, const float PI)
{
    float cal = PI * pow(r, 2);

    return cal;
}

int main()
{
    float r = 5;
    const float PI = 3.14159;

    cout << circlaAreaFunction(r, PI);
    return 0;
}