#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    bool isPrime = 1;   // assume number is prime

    for (int i=2;i<n;i++){
        // rem=0, Not a prime no
        if(n%i==0){
            // cout<<"Not a Prime Number"<<endl;
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0){
        cout<<"Not a Prime Number"<<endl;
    }
    else{
        cout<<"is a Prime Number"<<endl;
    }
    
}