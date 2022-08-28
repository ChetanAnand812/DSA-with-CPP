#include <iostream>
using namespace std;

// 1 -> Prime
// 0 -> Not a prime no.
bool isPrime(int num){

    for (int i=2; i<=num;i++){
        if(num%i == 0){
            return 0;
        }
        else{
            return 1;
        }
    }  
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    if(isPrime(n)){
        cout<<"Is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
    return 0;
}
