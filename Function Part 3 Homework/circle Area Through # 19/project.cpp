#include <iostream>
#include <cmath>
using namespace std;

float circlaAreaFunction(float d, const float PI)
{
    float cal = (PI * d * d) / 4 ;

    return cal;
}

int main()
{
    float d = 10;
    const float PI = 3.14159;

    cout << circlaAreaFunction(d, PI);
    return 0;
}