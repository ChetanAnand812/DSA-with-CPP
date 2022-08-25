#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";

    for (int i=1;i<=n;i++){
        int nextsum = a+b;
        cout<<nextsum<<" ";

        a = b;
        b = nextsum;
    }
    
}