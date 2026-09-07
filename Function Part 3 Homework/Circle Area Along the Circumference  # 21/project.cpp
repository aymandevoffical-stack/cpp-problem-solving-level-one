#include <iostream>
using namespace std;

float circleAreaAlong(float PI , float L)
{
  float Area = (L *L) / (4 * PI);
  return Area;
}
int main()
{
    float PI = 3.14159;
    float L = 20;

    cout << circleAreaAlong(PI , L);
    return 0;
}