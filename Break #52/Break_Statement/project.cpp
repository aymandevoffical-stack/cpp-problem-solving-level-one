#include<iostream>
using namespace std;

int main(){

    int arr[10] = {10 , 20 , 44 , 55 , 33 , 22 , 99 , 88 , 99 , 100};
    int SearchNumber = 20;

    for (int i = 0; i < 10; i++)
    {
        cout << "We Are in Atteration" << i + 1 << endl;
        if (SearchNumber == arr[i])
        {
            cout << "The Number is " << SearchNumber << endl;
            break;
        }
        
    }
    
    
    return 0;
}