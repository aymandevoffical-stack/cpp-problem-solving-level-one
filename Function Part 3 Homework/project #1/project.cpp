#include <iostream>
using namespace std;

void userNameFunction()
{
    string Name;
    cout << "Read Your Name" << endl;
    getline(cin , Name);

    cout << Name;
}
int main()
{
    userNameFunction();
    return 0;
}