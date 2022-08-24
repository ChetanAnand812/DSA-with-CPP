#include <iostream>
using namespace std;

int main(){
  // CONDITIONAL STATEMENTS
    /* if-else
    int a;
    cin>>a;

    if(a>0){
        cout<<"a is positive number"<<endl;
    }
    else{
        cout<<"a is negative number"<<endl;
    }
    */

    // a = cin.get(); is used for taking space,enter,tab from user

    /* if else-if
    int a;
    cout<<"Enter a: ";
    cin>>a;

    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else if(a<0){
        cout<<"A is negative:"<<endl;
    }
    else{
        cout<<"A is zero"<<endl;
    }
    */

  /* Question 1
  int a = 9;
  if(a == 9){
    cout<<"Nine";       output: NinePositive
  }
  if(a>0){
    cout<<"Positive";
  }
  else{
    cout<<"Negative";
  }
   */

  /* Question 2
  int a = 2;
  int b = a+1;
  if((a=3)==b){           output: 3
    cout<<a;
  }
  else{
    cout<<a+2;
  }
  */

 /* Question 3
 int a = 19;

 if(a>15){
    cout<<"Chetan";
 }
 else if(a == 19){            //output: Chetan19
    cout<<"ok";
 }
 else{
    cout<<"Anand";
 }
 cout<<a;
*/

// Question 3
char a;
cin>>a;
                          // 'A' is 65, 'a' is 97, 0 is 48
if(a >= 'A' && a <= 'Z'){
  cout<<"This is Upper case"<<endl;
}
else if(a >= 'a' && a <= 'z'){
  cout<<"This is Lower case";
}
else if(a >= 0 && a <= 9){
  cout<<"This is Integer"; 
}
return 0;



}