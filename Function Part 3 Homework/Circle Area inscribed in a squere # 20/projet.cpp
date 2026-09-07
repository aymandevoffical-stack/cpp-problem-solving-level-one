#include <iostream>
using namespace std;


float myCircleAreaFunction(float PI , float A) 
{
  float Area = (PI * (A * A)) / 4;
  return Area;
}
int main() {
    float PI = 3.14159;
    float A = 10;

    cout << myCircleAreaFunction(PI , A) << endl;
    
    return 0;
}