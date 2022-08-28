#include <iostream>
using namespace std;

/* int main(){
    int num;   // char ch; 'a'
    cout<<"Enter num: ";
    cin>>num;

    switch (num){
    case 1: cout<<"First";   // in case we can use only int or char - case '1', 'a'
        break;
    
    case 2: cout<<"Second";
        break;

    default: cout<<"Default";
        break;
    }
    cout<<endl;
    return 0;
} */

// Nested Switch

int main(){
    char ch = '1';
    int num = 1;

    switch (ch){
    case 1: cout<<"First"<<endl;  
            cout<<"First again"<<endl;
            break;
    
    case '1': switch(num) {
        case 1: cout<<"Value of num is "<<endl;
        break; 
        }
    break;

    default: cout<<"Default";
        break;
    }
    cout<<endl;
    return 0;
}