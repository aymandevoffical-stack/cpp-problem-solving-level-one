#include <iostream>
#include <string>
using namespace std;

int main()
{

    // string st1 = "43.22";
    // // convert string to double

    // double num_double = stod(st1);

    // float num_float = stof(st1);
    // int num_int = stoi(st1);

    // cout << num_double << endl;
    // cout << num_float << endl;
    // cout << num_int << endl;

    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

    string S1,S2,S3;
    S1 = to_string(N1);
    S2 = to_string(N2);
    S3 = to_string(N3);

    float df = stoi(S3);

    cout << S1 << endl;
    cout << S2 << endl;
    cout << S3 << endl;

    return 0;
}