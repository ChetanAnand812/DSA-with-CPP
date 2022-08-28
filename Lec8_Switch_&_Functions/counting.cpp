#include <iostream>
using namespace std;
void printCount(int num){
    // function body
    for (int i=0; i<=num;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    // function call
    printCount(n);

    return 0;
}