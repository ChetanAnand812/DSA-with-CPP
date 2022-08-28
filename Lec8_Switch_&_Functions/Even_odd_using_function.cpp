#include <iostream>
using namespace std;

bool isEven(int number){
    if(number&1){       // odd
        return 0;
    }
    else{
        return 1;      // even
    }
    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    if(isEven(n)) {
        cout <<"Number is Even" <<endl;
    }
    else {
        cout<<"Number is Odd" <<endl;
    }

    return 0;
}