#include <iostream>
using namespace std;

int main(){

    // declare
    int number[15];

    // accessing an array
    cout<<"Value at 14 index "<<number[14]<<endl;   // output return garbage value
    cout<<"Value at 1 index "<<number[1]<<endl;

    // initialising an array
    int second[3] = {5, 7, 11};
    cout<<"Value at 1 index "<<second[1]<<endl;

    int third[15] = {2,7};
    int n = 15;
    for (int i = 0; i < n; i++){
        cout<<third[i]<<" ";
    }

    cout<<endl;

    // initialising all location with 0
    int fourth[10] = {0};
    int x = 10;
    for (int i = 0; i < x; i++){
        cout<<fourth[i]<<" ";
    }

    cout<<endl;

    // initialising all location with 1 [not possible with below line]
    int fifth[10] = {1};
    int y = 10;
    for (int i = 0; i < y; i++){
        cout<<fifth[i]<<" ";
    }
    
}