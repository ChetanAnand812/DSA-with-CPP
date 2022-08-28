#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int ans = ((factorial(n)/(factorial(r) * factorial(n-r))));
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;

    int answer = nCr(a,b);
    cout<<"nCr of a and b is: "<<answer<<endl;
    return 0;
}