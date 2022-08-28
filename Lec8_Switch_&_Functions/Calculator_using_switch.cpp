#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int a, b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;

    switch (n){
    case 1: cout<<"Addition is: "<<a+b<<endl;
        break;
    
    case 2: cout<<"Subtraction is: "<<a-b<<endl;
        break;
    
    case 3: cout<<"Multiplication is: "<<a*b<<endl;
        break;

    case 4: cout<<"Division is: "<<a/b<<endl;
        break;

    default: 
        break;
    }
    cout<<endl;
    return 0;
}