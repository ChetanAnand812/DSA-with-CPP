#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter n";
    cin>>n;
    /* cout<<"Printing count from 1 to n"<<endl;

    for (int i=0; i<=n; i++){
        cout<< i<<" ";
    }
    cout<<endl;
    */

    for (int a=0, b=1;a>=0, b>=1; a--, b--){       // we can use multiple condition in for loop
        cout<<a<<" "<<b<<endl;
    }

    cout<<"Sum of 1 to n"<<endl;
    int sum =0;
    for (int i=0;i<=n; i++){
        sum = sum +i;
    }
    cout<<sum<<endl;
    
}