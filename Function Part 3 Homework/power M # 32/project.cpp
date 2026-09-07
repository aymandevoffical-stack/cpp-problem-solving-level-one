#include <iostream>
#include <cmath>
using namespace std;

void powerFunction()
{
    float M;
    
    cout << "Enter The M";
    cin >> M;
    
    float Area  = pow(M , 4);
    cout << Area;
}

int main()
{
    powerFunction();
    return 0;
}